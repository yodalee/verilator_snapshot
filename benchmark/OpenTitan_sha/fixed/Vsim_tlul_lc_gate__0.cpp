// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_tlul_lc_gate___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
        = (2U | (0xffff0001U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]));
}

void Vsim_tlul_lc_gate___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate__0(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tl_h2d_int[1U][0U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[0U];
    vlSelfRef.__PVT__tl_h2d_int[1U][1U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[1U];
    vlSelfRef.__PVT__tl_h2d_int[1U][2U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[2U];
    vlSelfRef.__PVT__tl_h2d_int[1U][3U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[3U];
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
        = (vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
        = (vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
        = (vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
        = (vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__PVT__tl_h2d_int[2U][0U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U];
    vlSelfRef.__PVT__tl_h2d_int[2U][1U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U];
    vlSelfRef.__PVT__tl_h2d_int[2U][2U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U];
    vlSelfRef.__PVT__tl_h2d_int[2U][3U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U];
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
        = (vlSelfRef.__PVT__tl_h2d_int[0U][0U] & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
        = (vlSelfRef.__PVT__tl_h2d_int[0U][1U] & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
        = (vlSelfRef.__PVT__tl_h2d_int[0U][2U] & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
        = (vlSelfRef.__PVT__tl_h2d_int[0U][3U] & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i))));
}

void Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate__0(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__10__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__10__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__10__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__10__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__10__payload;
    __Vfunc_extract_d2h_rsp_intg__10__payload = 0;
    CData/*1:0*/ __Vdly__outstanding_txn;
    __Vdly__outstanding_txn = 0;
    // Body
    __Vdly__outstanding_txn = vlSelfRef.__PVT__outstanding_txn;
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = ((0xffff0000U & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U]) 
           | (((((((2U & (VL_REDXOR_32((0x10U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                          << 1U)) | (1U & (~ VL_REDXOR_32(
                                                          (8U 
                                                           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                  << 6U) | (((2U & (VL_REDXOR_32((4U 
                                                  & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                    << 1U)) | (1U & 
                                               (~ VL_REDXOR_32(
                                                               (0x22U 
                                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                            << 4U)) | ((((2U & (VL_REDXOR_32(
                                                             (0x21U 
                                                              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                << 1U)) 
                                         | (1U & (~ 
                                                  VL_REDXOR_32(
                                                               (0x1fU 
                                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                        << 2U) | ((2U 
                                                   & (VL_REDXOR_8(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_32(
                                                                    (0x98505586U 
                                                                     & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__rdata_q)))))) 
               << 8U) | (((((2U & ((~ VL_REDXOR_32(
                                                   (0x2dcc624cU 
                                                    & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__rdata_q))) 
                                   << 1U)) | (1U & 
                                              VL_REDXOR_32(
                                                           (0xc2c1323bU 
                                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__rdata_q)))) 
                           << 6U) | (((2U & ((~ VL_REDXOR_32(
                                                             (0x31234ed1U 
                                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__rdata_q))) 
                                             << 1U)) 
                                      | (1U & VL_REDXOR_32(
                                                           (0x413d89aaU 
                                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__rdata_q)))) 
                                     << 4U)) | ((8U 
                                                 & ((~ 
                                                     VL_REDXOR_32(
                                                                  (0xdeba8050U 
                                                                   & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__rdata_q))) 
                                                    << 3U)) 
                                                | ((4U 
                                                    & (VL_REDXOR_32(
                                                                    (0x2606bd25U 
                                                                     & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__rdata_q)) 
                                                       << 2U)) 
                                                   | (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1180))))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = ((0x0000ffffU & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U]) 
           | ((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                                 << 0x00000030U) 
                                                | (((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                    << 0x00000010U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                      >> 0x00000010U))))) 
              << 0x00000010U));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__a_ack) & (~ (IData)(vlSelfRef.__PVT__d_ack)))) {
            __Vdly__outstanding_txn = (3U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__outstanding_txn)));
        } else if (((IData)(vlSelfRef.__PVT__d_ack) 
                    & (~ (IData)(vlSelfRef.__PVT__a_ack)))) {
            __Vdly__outstanding_txn = (3U & ((IData)(vlSelfRef.__PVT__outstanding_txn) 
                                             - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending) 
             & vlSelfRef.__PVT__tl_h2d_error[0U])) {
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending = 0U;
        } else if ((IData)(((vlSelfRef.__PVT__tl_h2d_error[3U] 
                             >> 0x0000000cU) & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]))) {
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending = 1U;
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source 
                = (0x000000ffU & ((vlSelfRef.__PVT__tl_h2d_error[3U] 
                                   << 4U) | (vlSelfRef.__PVT__tl_h2d_error[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode 
                = (7U & (vlSelfRef.__PVT__tl_h2d_error[3U] 
                         >> 9U));
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size 
                = (3U & (vlSelfRef.__PVT__tl_h2d_error[3U] 
                         >> 4U));
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type 
                = (0x0000000fU & (vlSelfRef.__PVT__tl_h2d_error[0U] 
                                  >> 0x0000000fU));
        }
        vlSelfRef.__PVT__u_err_en_sync__DOT__gen_no_flops__DOT__unused_logic 
            = vlSelfRef.__PVT__err_en;
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__state_d;
    } else {
        __Vdly__outstanding_txn = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode = 4U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type = 9U;
        vlSelfRef.__PVT__u_err_en_sync__DOT__gen_no_flops__DOT__unused_logic = 0x0aU;
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw = 0x00baU;
    }
    vlSelfRef.__PVT__tl_d2h_int[2U][0U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U];
    vlSelfRef.__PVT__tl_d2h_int[2U][1U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U];
    vlSelfRef.__PVT__tl_d2h_int[2U][2U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U];
    vlSelfRef.__PVT__outstanding_txn = __Vdly__outstanding_txn;
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
        = ((0xfe00ffffU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source) 
                             << 0x00000011U)));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
        = ((0x01ffffffU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U]) 
           | (0xfe000000U & ((((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                                << 0x00000019U))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((0x01ffffffU & (((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                                      ? 1U : 0U) >> 2U)) 
                    | ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                       >> 7U))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__9__val 
                        = vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__9__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__9__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__9__Vfuncout))
                      ? 0U : 0xffffffffU));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    __Vfunc_extract_d2h_rsp_intg__10__tl[0U] = vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U];
    __Vfunc_extract_d2h_rsp_intg__10__tl[1U] = vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U];
    __Vfunc_extract_d2h_rsp_intg__10__tl[2U] = vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U];
    __Vfunc_extract_d2h_rsp_intg__10__payload = ((0x00000038U 
                                                  & ((__Vfunc_extract_d2h_rsp_intg__10__tl[2U] 
                                                      << 5U) 
                                                     | (0x00000018U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__10__tl[1U] 
                                                           >> 0x0000001bU)))) 
                                                 | ((6U 
                                                     & (__Vfunc_extract_d2h_rsp_intg__10__tl[1U] 
                                                        >> 0x00000018U)) 
                                                    | (1U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__10__tl[0U] 
                                                          >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__10__Vfuncout = __Vfunc_extract_d2h_rsp_intg__10__payload;
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__10__Vfuncout;
}

void Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate__1(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__5__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__5__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__5__val;
    __Vfunc_lc_tx_test_false_strict__5__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__6__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__6__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__6__val;
    __Vfunc_lc_tx_test_false_strict__6__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__7__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__7__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__7__val;
    __Vfunc_lc_tx_test_false_strict__7__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__8__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__8__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__8__val;
    __Vfunc_lc_tx_test_false_strict__8__val = 0;
    // Body
    vlSelfRef.__PVT__block_cmd = 0U;
    vlSelfRef.__PVT__state_d = vlSelfRef.__PVT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__err_en = 0x0aU;
    vlSelfRef.err_o = 0U;
    vlSelfRef.flush_ack_o = 0U;
    vlSelfRef.resp_pending_o = 0U;
    if ((0x0121U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__0__val 
                        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_dft_en.__PVT__lc_en;
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__0__Vfuncout 
                        = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__0__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__0__Vfuncout))) {
            vlSelfRef.__PVT__state_d = 0x00e7U;
        }
        if ((0U != (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.resp_pending_o = 1U;
        }
    } else if ((0x00e7U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__block_cmd = 1U;
        if ((0U == (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.__PVT__state_d = (([&]() {
                        vlSelfRef.__Vfunc_lc_tx_test_false_loose__1__val 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_dft_en.__PVT__lc_en;
                        vlSelfRef.__Vfunc_lc_tx_test_false_loose__1__Vfuncout 
                            = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__1__val));
                    }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__1__Vfuncout))
                                         ? 0x00baU : 0x004cU);
        } else {
            vlSelfRef.resp_pending_o = 1U;
        }
    } else if ((0x004cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__block_cmd = 1U;
        vlSelfRef.flush_ack_o = 1U;
        vlSelfRef.__PVT__state_d = (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__2__val 
                        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_dft_en.__PVT__lc_en;
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__2__Vfuncout 
                        = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__2__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__2__Vfuncout))
                                     ? 0x00baU : 0x0121U);
    } else if ((0x00baU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__err_en = 5U;
        if (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_true_strict__3__val 
                        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_dft_en.__PVT__lc_en;
                    vlSelfRef.__Vfunc_lc_tx_test_true_strict__3__Vfuncout 
                        = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__3__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__3__Vfuncout))) {
            vlSelfRef.__PVT__state_d = 0x0116U;
        }
    } else if ((0x0116U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__err_en = 5U;
        vlSelfRef.__PVT__block_cmd = 1U;
        if ((0U == (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.__PVT__state_d = 0x0121U;
        }
    } else {
        vlSelfRef.err_o = 1U;
        vlSelfRef.__PVT__err_en = 5U;
    }
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x0116U 
                                              == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                             << 4U) 
                                            | (((0x00baU 
                                                 == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                                << 3U) 
                                               | ((0x004cU 
                                                   == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                                  << 2U))) 
                                           | (((0x00e7U 
                                                == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                               << 1U) 
                                              | (0x0121U 
                                                 == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))))))) {
        if ((0U != ((((0x0116U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                      << 4U) | (((0x00baU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                 << 3U) | ((0x004cU 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                           << 2U))) 
                    | (((0x00e7U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                        << 1U) | (0x0121U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tlul_lc_gate.sv:179: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otp_ctrl.u_tlul_lc_gate: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/tlul_lc_gate.sv", 179, "");
            }
        }
    }
    __Vfunc_lc_tx_test_false_strict__5__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__5__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__5__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i 
        = __Vfunc_lc_tx_test_false_strict__5__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__6__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__6__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__6__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i 
        = __Vfunc_lc_tx_test_false_strict__6__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__8__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__8__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__8__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i 
        = __Vfunc_lc_tx_test_false_strict__8__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__7__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__7__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__7__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i 
        = __Vfunc_lc_tx_test_false_strict__7__Vfuncout;
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[1U][0U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U];
    vlSelfRef.__PVT__tl_d2h_int[1U][1U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U];
    vlSelfRef.__PVT__tl_d2h_int[1U][2U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U];
    vlSelfRef.__PVT__tl_d2h_int[0U][0U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[0U][1U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[0U][2U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
}

void Vsim_tlul_lc_gate___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate__0(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
        = (vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
        = (vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
        = (vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
        = (vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__PVT__tl_h2d_int[2U][0U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U];
    vlSelfRef.__PVT__tl_h2d_int[2U][1U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U];
    vlSelfRef.__PVT__tl_h2d_int[2U][2U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U];
    vlSelfRef.__PVT__tl_h2d_int[2U][3U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U];
}

void Vsim_tlul_lc_gate___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate__1(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tl_h2d_int[0U][0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__16__KET____DOT__fifo_d.tl_h_i[0U];
    vlSelfRef.__PVT__tl_h2d_int[0U][1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__16__KET____DOT__fifo_d.tl_h_i[1U];
    vlSelfRef.__PVT__tl_h2d_int[0U][2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__16__KET____DOT__fifo_d.tl_h_i[2U];
    vlSelfRef.__PVT__tl_h2d_int[0U][3U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__16__KET____DOT__fifo_d.tl_h_i[3U];
    vlSelfRef.tl_d2h_o[0U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][0U];
    vlSelfRef.tl_d2h_o[1U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][1U];
    vlSelfRef.tl_d2h_o[2U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][2U];
    vlSelfRef.__PVT__tl_h2d_error[0U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[1U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[2U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[3U] = 0U;
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__4__val 
                    = vlSelfRef.__PVT__err_en;
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__4__Vfuncout 
                    = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__4__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__4__Vfuncout))) {
        vlSelfRef.__PVT__tl_h2d_error[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__16__KET____DOT__fifo_d.tl_h_i[0U];
        vlSelfRef.__PVT__tl_h2d_error[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__16__KET____DOT__fifo_d.tl_h_i[1U];
        vlSelfRef.__PVT__tl_h2d_error[2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__16__KET____DOT__fifo_d.tl_h_i[2U];
        vlSelfRef.__PVT__tl_h2d_error[3U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__16__KET____DOT__fifo_d.tl_h_i[3U];
        vlSelfRef.tl_d2h_o[0U] = ((0xffff0000U & vlSelfRef.tl_d2h_o[0U]) 
                                  | (((((((2U & (VL_REDXOR_32(
                                                              (0x10U 
                                                               & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   VL_REDXOR_32(
                                                                (8U 
                                                                 & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                         << 6U) | (
                                                   ((2U 
                                                     & (VL_REDXOR_32(
                                                                     (4U 
                                                                      & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ 
                                                          VL_REDXOR_32(
                                                                       (0x22U 
                                                                        & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                   << 4U)) 
                                       | ((((2U & (
                                                   VL_REDXOR_32(
                                                                (0x21U 
                                                                 & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ VL_REDXOR_32(
                                                               (0x1fU 
                                                                & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                           << 2U) | 
                                          ((2U & (VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_32(
                                                           (0x98505586U 
                                                            & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                << 0x00000010U) 
                                                               | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                  >> 0x00000010U)))))))) 
                                      << 8U) | ((((
                                                   (2U 
                                                    & ((~ 
                                                        VL_REDXOR_32(
                                                                     (0x2dcc624cU 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U))))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & VL_REDXOR_32(
                                                                     (0xc2c1323bU 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U)))))) 
                                                  << 6U) 
                                                 | (((2U 
                                                      & ((~ 
                                                          VL_REDXOR_32(
                                                                       (0x31234ed1U 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U))))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_32(
                                                                       (0x413d89aaU 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U)))))) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & ((~ 
                                                        VL_REDXOR_32(
                                                                     (0xdeba8050U 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U))))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_32(
                                                                       (0x2606bd25U 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U)))) 
                                                          << 2U)) 
                                                      | (3U 
                                                         & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]))))));
        vlSelfRef.tl_d2h_o[0U] = ((0x0000ffffU & vlSelfRef.tl_d2h_o[0U]) 
                                  | ((IData)((0x0003ffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                  << 0x00000030U) 
                                                 | (((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                     << 0x00000010U) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                       >> 0x00000010U))))) 
                                     << 0x00000010U));
        vlSelfRef.tl_d2h_o[1U] = (((IData)((0x0003ffffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                << 0x00000030U) 
                                               | (((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                   << 0x00000010U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                     >> 0x00000010U))))) 
                                   >> 0x00000010U) 
                                  | ((IData)(((0x0003ffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                   << 0x00000030U) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                      << 0x00000010U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                        >> 0x00000010U)))) 
                                              >> 0x00000020U)) 
                                     << 0x00000010U));
        vlSelfRef.tl_d2h_o[2U] = (3U & ((IData)(((0x0003ffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                      << 0x00000030U) 
                                                     | (((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                         << 0x00000010U) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                           >> 0x00000010U)))) 
                                                 >> 0x00000020U)) 
                                        >> 0x00000010U));
    }
    if (vlSelfRef.__PVT__block_cmd) {
        vlSelfRef.tl_d2h_o[0U] = (0xfffffffeU & vlSelfRef.tl_d2h_o[0U]);
        vlSelfRef.__PVT__tl_h2d_int[0U][3U] = (0x00000fffU 
                                               & vlSelfRef.__PVT__tl_h2d_int
                                               [0U][3U]);
        vlSelfRef.__PVT__tl_h2d_error[3U] = (0x00000fffU 
                                             & vlSelfRef.__PVT__tl_h2d_error[3U]);
    }
    vlSelfRef.__PVT__a_ack = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__16__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                              & vlSelfRef.tl_d2h_o[0U]);
    vlSelfRef.__PVT__d_ack = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o)) 
                              & (vlSelfRef.tl_d2h_o[2U] 
                                 >> 1U));
}

void Vsim_tlul_lc_gate___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate__2(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
        = (vlSelfRef.__PVT__tl_h2d_int[0U][0U] & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
        = (vlSelfRef.__PVT__tl_h2d_int[0U][1U] & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
        = (vlSelfRef.__PVT__tl_h2d_int[0U][2U] & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
        = (vlSelfRef.__PVT__tl_h2d_int[0U][3U] & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i))));
}

void Vsim_tlul_lc_gate___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__0(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tl_h2d_int[2U][0U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U];
    vlSelfRef.__PVT__tl_h2d_int[2U][1U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U];
    vlSelfRef.__PVT__tl_h2d_int[2U][2U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U];
    vlSelfRef.__PVT__tl_h2d_int[2U][3U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U];
}

void Vsim_tlul_lc_gate___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__1(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40[0U] = 
        ((0xfffffffeU & vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U]) 
         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1717));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40[1U] = 
        ((1U & vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U]) 
         | (0xfffffffeU & vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40[2U] = 
        ((1U & vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U]) 
         | (0xfffffffeU & vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40[3U] = 
        ((1U & vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U]) 
         | (0x00001ffeU & vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U]));
}

void Vsim_tlul_lc_gate___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__2(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
        = (vlSelfRef.__PVT__tl_h2d_int[0U][0U] & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
        = (vlSelfRef.__PVT__tl_h2d_int[0U][1U] & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
        = (vlSelfRef.__PVT__tl_h2d_int[0U][2U] & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
        = (vlSelfRef.__PVT__tl_h2d_int[0U][3U] & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__PVT__tl_h2d_int[1U][0U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[0U];
    vlSelfRef.__PVT__tl_h2d_int[1U][1U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[1U];
    vlSelfRef.__PVT__tl_h2d_int[1U][2U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[2U];
    vlSelfRef.__PVT__tl_h2d_int[1U][3U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[3U];
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
        = (vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
        = (vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
        = (vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
        = (vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i))));
}

void Vsim_tlul_lc_gate___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__0(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41[0U] = (IData)(
                                                            (0x0fffffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40[1U])) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40[0U])))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41[1U] = 
        (((IData)((0x00007fffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U])) 
                                             << 0x00000022U) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U])) 
                                                << 2U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) 
                                                  >> 0x0000001eU))))) 
          << 0x0000001eU) | (IData)(((0x0fffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40[1U])) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40[0U])))) 
                                     >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41[2U] = 
        (((IData)((0x00007fffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U])) 
                                             << 0x00000022U) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U])) 
                                                << 2U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) 
                                                  >> 0x0000001eU))))) 
          >> 2U) | ((IData)(((0x00007fffffffffffULL 
                              & (((QData)((IData)(vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U])) 
                                  << 0x00000022U) | 
                                 (((QData)((IData)(
                                                   vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U])) 
                                   << 2U) | ((QData)((IData)(
                                                             vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) 
                                             >> 0x0000001eU)))) 
                             >> 0x00000020U)) << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41[3U] = 
        ((IData)(((0x00007fffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U])) 
                                             << 0x00000022U) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U])) 
                                                << 2U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) 
                                                  >> 0x0000001eU)))) 
                  >> 0x00000020U)) >> 2U);
}

void Vsim_tlul_lc_gate___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__1(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = ((0xffff0000U & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U]) 
           | (((((2U & (VL_REDXOR_32((0x10U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                        << 1U)) | (1U & (~ VL_REDXOR_32(
                                                        (8U 
                                                         & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                << 0x0000000eU) | (((2U & (VL_REDXOR_32(
                                                        (4U 
                                                         & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                           << 1U)) 
                                    | (1U & (~ VL_REDXOR_32(
                                                            (0x22U 
                                                             & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                   << 0x0000000cU)) 
              | ((0x00000800U & (VL_REDXOR_32((0x21U 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                 << 0x0000000bU)) | 
                 ((0x00000400U & ((~ VL_REDXOR_32((0x1fU 
                                                   & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp)))) 
                                  << 0x0000000aU)) 
                  | ((0x00000200U & (VL_REDXOR_8(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                     << 9U)) | (0x000001ffU 
                                                & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT____VdfgRegularize_hb672d1f3_0_1[0U]))))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = ((0x0000ffffU & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U]) 
           | ((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U])) 
                                                 << 0x00000030U) 
                                                | (((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U])) 
                                                    << 0x00000010U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U])) 
                                                      >> 0x00000010U))))) 
              << 0x00000010U));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.__PVT__tl_d2h_int[2U][0U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U];
    vlSelfRef.__PVT__tl_d2h_int[2U][1U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U];
    vlSelfRef.__PVT__tl_d2h_int[2U][2U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U];
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[1U][0U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U];
    vlSelfRef.__PVT__tl_d2h_int[1U][1U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U];
    vlSelfRef.__PVT__tl_d2h_int[1U][2U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U];
    vlSelfRef.__PVT__tl_d2h_int[0U][0U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[0U][1U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[0U][2U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_h2d_int[0U][0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d.tl_h_i[0U];
    vlSelfRef.__PVT__tl_h2d_int[0U][1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d.tl_h_i[1U];
    vlSelfRef.__PVT__tl_h2d_int[0U][2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d.tl_h_i[2U];
    vlSelfRef.__PVT__tl_h2d_int[0U][3U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d.tl_h_i[3U];
    vlSelfRef.tl_d2h_o[0U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][0U];
    vlSelfRef.tl_d2h_o[1U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][1U];
    vlSelfRef.tl_d2h_o[2U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][2U];
    vlSelfRef.__PVT__tl_h2d_error[0U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[1U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[2U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[3U] = 0U;
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__15__val 
                    = vlSelfRef.__PVT__err_en;
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__15__Vfuncout 
                    = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__15__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__15__Vfuncout))) {
        vlSelfRef.__PVT__tl_h2d_error[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d.tl_h_i[0U];
        vlSelfRef.__PVT__tl_h2d_error[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d.tl_h_i[1U];
        vlSelfRef.__PVT__tl_h2d_error[2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d.tl_h_i[2U];
        vlSelfRef.__PVT__tl_h2d_error[3U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d.tl_h_i[3U];
        vlSelfRef.tl_d2h_o[0U] = ((0xffff0000U & vlSelfRef.tl_d2h_o[0U]) 
                                  | (((((((2U & (VL_REDXOR_32(
                                                              (0x10U 
                                                               & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   VL_REDXOR_32(
                                                                (8U 
                                                                 & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                         << 6U) | (
                                                   ((2U 
                                                     & (VL_REDXOR_32(
                                                                     (4U 
                                                                      & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ 
                                                          VL_REDXOR_32(
                                                                       (0x22U 
                                                                        & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                   << 4U)) 
                                       | ((((2U & (
                                                   VL_REDXOR_32(
                                                                (0x21U 
                                                                 & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ VL_REDXOR_32(
                                                               (0x1fU 
                                                                & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                           << 2U) | 
                                          ((2U & (VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_32(
                                                           (0x98505586U 
                                                            & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                << 0x00000010U) 
                                                               | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                  >> 0x00000010U)))))))) 
                                      << 8U) | ((((
                                                   (2U 
                                                    & ((~ 
                                                        VL_REDXOR_32(
                                                                     (0x2dcc624cU 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U))))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & VL_REDXOR_32(
                                                                     (0xc2c1323bU 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U)))))) 
                                                  << 6U) 
                                                 | (((2U 
                                                      & ((~ 
                                                          VL_REDXOR_32(
                                                                       (0x31234ed1U 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U))))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_32(
                                                                       (0x413d89aaU 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U)))))) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & ((~ 
                                                        VL_REDXOR_32(
                                                                     (0xdeba8050U 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U))))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_32(
                                                                       (0x2606bd25U 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U)))) 
                                                          << 2U)) 
                                                      | (3U 
                                                         & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]))))));
        vlSelfRef.tl_d2h_o[0U] = ((0x0000ffffU & vlSelfRef.tl_d2h_o[0U]) 
                                  | ((IData)((0x0003ffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                  << 0x00000030U) 
                                                 | (((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                     << 0x00000010U) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                       >> 0x00000010U))))) 
                                     << 0x00000010U));
        vlSelfRef.tl_d2h_o[1U] = (((IData)((0x0003ffffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                << 0x00000030U) 
                                               | (((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                   << 0x00000010U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                     >> 0x00000010U))))) 
                                   >> 0x00000010U) 
                                  | ((IData)(((0x0003ffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                   << 0x00000030U) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                      << 0x00000010U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                        >> 0x00000010U)))) 
                                              >> 0x00000020U)) 
                                     << 0x00000010U));
        vlSelfRef.tl_d2h_o[2U] = (3U & ((IData)(((0x0003ffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                      << 0x00000030U) 
                                                     | (((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                         << 0x00000010U) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                           >> 0x00000010U)))) 
                                                 >> 0x00000020U)) 
                                        >> 0x00000010U));
    }
    if (vlSelfRef.__PVT__block_cmd) {
        vlSelfRef.tl_d2h_o[0U] = (0xfffffffeU & vlSelfRef.tl_d2h_o[0U]);
        vlSelfRef.__PVT__tl_h2d_int[0U][3U] = (0x00000fffU 
                                               & vlSelfRef.__PVT__tl_h2d_int
                                               [0U][3U]);
        vlSelfRef.__PVT__tl_h2d_error[3U] = (0x00000fffU 
                                             & vlSelfRef.__PVT__tl_h2d_error[3U]);
    }
    vlSelfRef.__PVT__a_ack = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                              & vlSelfRef.tl_d2h_o[0U]);
    vlSelfRef.__PVT__d_ack = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o)) 
                              & (vlSelfRef.tl_d2h_o[2U] 
                                 >> 1U));
}

void Vsim_tlul_lc_gate___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__2(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1717 = (1U 
                                                   & (vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                      | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_285)));
}

void Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__0(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__21__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__21__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__21__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__21__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__21__payload;
    __Vfunc_extract_d2h_rsp_intg__21__payload = 0;
    CData/*1:0*/ __Vdly__outstanding_txn;
    __Vdly__outstanding_txn = 0;
    // Body
    __Vdly__outstanding_txn = vlSelfRef.__PVT__outstanding_txn;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__a_ack) & (~ (IData)(vlSelfRef.__PVT__d_ack)))) {
            __Vdly__outstanding_txn = (3U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__outstanding_txn)));
        } else if (((IData)(vlSelfRef.__PVT__d_ack) 
                    & (~ (IData)(vlSelfRef.__PVT__a_ack)))) {
            __Vdly__outstanding_txn = (3U & ((IData)(vlSelfRef.__PVT__outstanding_txn) 
                                             - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending) 
             & vlSelfRef.__PVT__tl_h2d_error[0U])) {
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending = 0U;
        } else if ((IData)(((vlSelfRef.__PVT__tl_h2d_error[3U] 
                             >> 0x0000000cU) & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]))) {
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending = 1U;
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source 
                = (0x000000ffU & ((vlSelfRef.__PVT__tl_h2d_error[3U] 
                                   << 4U) | (vlSelfRef.__PVT__tl_h2d_error[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode 
                = (7U & (vlSelfRef.__PVT__tl_h2d_error[3U] 
                         >> 9U));
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size 
                = (3U & (vlSelfRef.__PVT__tl_h2d_error[3U] 
                         >> 4U));
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type 
                = (0x0000000fU & (vlSelfRef.__PVT__tl_h2d_error[0U] 
                                  >> 0x0000000fU));
        }
        vlSelfRef.__PVT__u_err_en_sync__DOT__gen_no_flops__DOT__unused_logic 
            = vlSelfRef.__PVT__err_en;
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__state_d;
    } else {
        __Vdly__outstanding_txn = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode = 4U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type = 9U;
        vlSelfRef.__PVT__u_err_en_sync__DOT__gen_no_flops__DOT__unused_logic = 0x0aU;
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw = 0x00baU;
    }
    vlSelfRef.__PVT__outstanding_txn = __Vdly__outstanding_txn;
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
        = ((0xfe00ffffU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source) 
                             << 0x00000011U)));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
        = ((0x01ffffffU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U]) 
           | (0xfe000000U & ((((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                                << 0x00000019U))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((0x01ffffffU & (((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                                      ? 1U : 0U) >> 2U)) 
                    | ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                       >> 7U))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__20__val 
                        = vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__20__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__20__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__20__Vfuncout))
                      ? 0U : 0xffffffffU));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    __Vfunc_extract_d2h_rsp_intg__21__tl[0U] = vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U];
    __Vfunc_extract_d2h_rsp_intg__21__tl[1U] = vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U];
    __Vfunc_extract_d2h_rsp_intg__21__tl[2U] = vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U];
    __Vfunc_extract_d2h_rsp_intg__21__payload = ((0x00000038U 
                                                  & ((__Vfunc_extract_d2h_rsp_intg__21__tl[2U] 
                                                      << 5U) 
                                                     | (0x00000018U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__21__tl[1U] 
                                                           >> 0x0000001bU)))) 
                                                 | ((6U 
                                                     & (__Vfunc_extract_d2h_rsp_intg__21__tl[1U] 
                                                        >> 0x00000018U)) 
                                                    | (1U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__21__tl[0U] 
                                                          >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__21__Vfuncout = __Vfunc_extract_d2h_rsp_intg__21__payload;
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__21__Vfuncout;
}

void Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__1(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__16__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__16__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__16__val;
    __Vfunc_lc_tx_test_false_strict__16__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__17__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__17__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__17__val;
    __Vfunc_lc_tx_test_false_strict__17__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__18__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__18__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__18__val;
    __Vfunc_lc_tx_test_false_strict__18__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__19__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__19__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__19__val;
    __Vfunc_lc_tx_test_false_strict__19__val = 0;
    // Body
    vlSelfRef.__PVT__block_cmd = 0U;
    vlSelfRef.__PVT__state_d = vlSelfRef.__PVT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__err_en = 0x0aU;
    vlSelfRef.err_o = 0U;
    vlSelfRef.flush_ack_o = 0U;
    vlSelfRef.resp_pending_o = 0U;
    if ((0x0121U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__11__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__lc_tlul_gate_en;
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__11__Vfuncout 
                        = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__11__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__11__Vfuncout))) {
            vlSelfRef.__PVT__state_d = 0x00e7U;
        }
        if ((0U != (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.resp_pending_o = 1U;
        }
    } else if ((0x00e7U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__block_cmd = 1U;
        if ((0U == (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.__PVT__state_d = (([&]() {
                        vlSelfRef.__Vfunc_lc_tx_test_false_loose__12__val 
                            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__lc_tlul_gate_en;
                        vlSelfRef.__Vfunc_lc_tx_test_false_loose__12__Vfuncout 
                            = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__12__val));
                    }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__12__Vfuncout))
                                         ? 0x00baU : 0x004cU);
        } else {
            vlSelfRef.resp_pending_o = 1U;
        }
    } else if ((0x004cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__block_cmd = 1U;
        vlSelfRef.flush_ack_o = 1U;
        vlSelfRef.__PVT__state_d = (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__13__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__lc_tlul_gate_en;
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__13__Vfuncout 
                        = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__13__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__13__Vfuncout))
                                     ? 0x00baU : 0x0121U);
    } else if ((0x00baU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__err_en = 5U;
        if (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_true_strict__14__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__lc_tlul_gate_en;
                    vlSelfRef.__Vfunc_lc_tx_test_true_strict__14__Vfuncout 
                        = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__14__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__14__Vfuncout))) {
            vlSelfRef.__PVT__state_d = 0x0116U;
        }
    } else if ((0x0116U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__err_en = 5U;
        vlSelfRef.__PVT__block_cmd = 1U;
        if ((0U == (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.__PVT__state_d = 0x0121U;
        }
    } else {
        vlSelfRef.err_o = 1U;
        vlSelfRef.__PVT__err_en = 5U;
    }
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x0116U 
                                              == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                             << 4U) 
                                            | (((0x00baU 
                                                 == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                                << 3U) 
                                               | ((0x004cU 
                                                   == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                                  << 2U))) 
                                           | (((0x00e7U 
                                                == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                               << 1U) 
                                              | (0x0121U 
                                                 == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))))))) {
        if ((0U != ((((0x0116U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                      << 4U) | (((0x00baU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                 << 3U) | ((0x004cU 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                           << 2U))) 
                    | (((0x00e7U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                        << 1U) | (0x0121U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tlul_lc_gate.sv:179: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sram_ctrl_ret_aon.u_tlul_lc_gate: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/tlul_lc_gate.sv", 179, "");
            }
        }
    }
    __Vfunc_lc_tx_test_false_strict__18__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__18__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__18__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i 
        = __Vfunc_lc_tx_test_false_strict__18__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__16__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__16__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__16__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i 
        = __Vfunc_lc_tx_test_false_strict__16__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__17__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__17__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__17__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i 
        = __Vfunc_lc_tx_test_false_strict__17__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__19__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__19__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__19__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i 
        = __Vfunc_lc_tx_test_false_strict__19__Vfuncout;
}

void Vsim_tlul_lc_gate___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__1(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = ((0xffff0000U & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U]) 
           | (((((2U & (VL_REDXOR_32((0x10U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                        << 1U)) | (1U & (~ VL_REDXOR_32(
                                                        (8U 
                                                         & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                << 0x0000000eU) | (((2U & (VL_REDXOR_32(
                                                        (4U 
                                                         & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                           << 1U)) 
                                    | (1U & (~ VL_REDXOR_32(
                                                            (0x22U 
                                                             & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                   << 0x0000000cU)) 
              | ((0x00000800U & (VL_REDXOR_32((0x21U 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                 << 0x0000000bU)) | 
                 ((0x00000400U & ((~ VL_REDXOR_32((0x1fU 
                                                   & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp)))) 
                                  << 0x0000000aU)) 
                  | ((0x00000200U & (VL_REDXOR_8(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                     << 9U)) | (0x000001ffU 
                                                & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT____VdfgRegularize_hb672d1f3_0_1[0U]))))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = ((0x0000ffffU & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U]) 
           | ((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U])) 
                                                 << 0x00000030U) 
                                                | (((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U])) 
                                                    << 0x00000010U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U])) 
                                                      >> 0x00000010U))))) 
              << 0x00000010U));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.__PVT__tl_d2h_int[2U][0U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U];
    vlSelfRef.__PVT__tl_d2h_int[2U][1U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U];
    vlSelfRef.__PVT__tl_d2h_int[2U][2U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U];
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[1U][0U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U];
    vlSelfRef.__PVT__tl_d2h_int[1U][1U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U];
    vlSelfRef.__PVT__tl_d2h_int[1U][2U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U];
    vlSelfRef.__PVT__tl_d2h_int[0U][0U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[0U][1U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[0U][2U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
}

void Vsim_tlul_lc_gate___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__3(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tl_h2d_int[0U][0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d.tl_h_i[0U];
    vlSelfRef.__PVT__tl_h2d_int[0U][1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d.tl_h_i[1U];
    vlSelfRef.__PVT__tl_h2d_int[0U][2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d.tl_h_i[2U];
    vlSelfRef.__PVT__tl_h2d_int[0U][3U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d.tl_h_i[3U];
    vlSelfRef.tl_d2h_o[0U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][0U];
    vlSelfRef.tl_d2h_o[1U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][1U];
    vlSelfRef.tl_d2h_o[2U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][2U];
    vlSelfRef.__PVT__tl_h2d_error[0U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[1U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[2U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[3U] = 0U;
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__15__val 
                    = vlSelfRef.__PVT__err_en;
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__15__Vfuncout 
                    = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__15__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__15__Vfuncout))) {
        vlSelfRef.__PVT__tl_h2d_error[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d.tl_h_i[0U];
        vlSelfRef.__PVT__tl_h2d_error[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d.tl_h_i[1U];
        vlSelfRef.__PVT__tl_h2d_error[2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d.tl_h_i[2U];
        vlSelfRef.__PVT__tl_h2d_error[3U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d.tl_h_i[3U];
        vlSelfRef.tl_d2h_o[0U] = ((0xffff0000U & vlSelfRef.tl_d2h_o[0U]) 
                                  | (((((((2U & (VL_REDXOR_32(
                                                              (0x10U 
                                                               & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   VL_REDXOR_32(
                                                                (8U 
                                                                 & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                         << 6U) | (
                                                   ((2U 
                                                     & (VL_REDXOR_32(
                                                                     (4U 
                                                                      & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ 
                                                          VL_REDXOR_32(
                                                                       (0x22U 
                                                                        & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                   << 4U)) 
                                       | ((((2U & (
                                                   VL_REDXOR_32(
                                                                (0x21U 
                                                                 & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ VL_REDXOR_32(
                                                               (0x1fU 
                                                                & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                           << 2U) | 
                                          ((2U & (VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_32(
                                                           (0x98505586U 
                                                            & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                << 0x00000010U) 
                                                               | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                  >> 0x00000010U)))))))) 
                                      << 8U) | ((((
                                                   (2U 
                                                    & ((~ 
                                                        VL_REDXOR_32(
                                                                     (0x2dcc624cU 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U))))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & VL_REDXOR_32(
                                                                     (0xc2c1323bU 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U)))))) 
                                                  << 6U) 
                                                 | (((2U 
                                                      & ((~ 
                                                          VL_REDXOR_32(
                                                                       (0x31234ed1U 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U))))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_32(
                                                                       (0x413d89aaU 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U)))))) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & ((~ 
                                                        VL_REDXOR_32(
                                                                     (0xdeba8050U 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U))))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_32(
                                                                       (0x2606bd25U 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U)))) 
                                                          << 2U)) 
                                                      | (3U 
                                                         & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]))))));
        vlSelfRef.tl_d2h_o[0U] = ((0x0000ffffU & vlSelfRef.tl_d2h_o[0U]) 
                                  | ((IData)((0x0003ffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                  << 0x00000030U) 
                                                 | (((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                     << 0x00000010U) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                       >> 0x00000010U))))) 
                                     << 0x00000010U));
        vlSelfRef.tl_d2h_o[1U] = (((IData)((0x0003ffffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                << 0x00000030U) 
                                               | (((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                   << 0x00000010U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                     >> 0x00000010U))))) 
                                   >> 0x00000010U) 
                                  | ((IData)(((0x0003ffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                   << 0x00000030U) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                      << 0x00000010U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                        >> 0x00000010U)))) 
                                              >> 0x00000020U)) 
                                     << 0x00000010U));
        vlSelfRef.tl_d2h_o[2U] = (3U & ((IData)(((0x0003ffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                      << 0x00000030U) 
                                                     | (((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                         << 0x00000010U) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                           >> 0x00000010U)))) 
                                                 >> 0x00000020U)) 
                                        >> 0x00000010U));
    }
    if (vlSelfRef.__PVT__block_cmd) {
        vlSelfRef.tl_d2h_o[0U] = (0xfffffffeU & vlSelfRef.tl_d2h_o[0U]);
        vlSelfRef.__PVT__tl_h2d_int[0U][3U] = (0x00000fffU 
                                               & vlSelfRef.__PVT__tl_h2d_int
                                               [0U][3U]);
        vlSelfRef.__PVT__tl_h2d_error[3U] = (0x00000fffU 
                                             & vlSelfRef.__PVT__tl_h2d_error[3U]);
    }
    vlSelfRef.__PVT__a_ack = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                              & vlSelfRef.tl_d2h_o[0U]);
    vlSelfRef.__PVT__d_ack = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o)) 
                              & (vlSelfRef.tl_d2h_o[2U] 
                                 >> 1U));
}

void Vsim_tlul_lc_gate___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate__1(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__27__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__27__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__27__val;
    __Vfunc_lc_tx_test_false_strict__27__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__28__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__28__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__28__val;
    __Vfunc_lc_tx_test_false_strict__28__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__29__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__29__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__29__val;
    __Vfunc_lc_tx_test_false_strict__29__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__30__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__30__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__30__val;
    __Vfunc_lc_tx_test_false_strict__30__val = 0;
    // Body
    vlSelfRef.__PVT__block_cmd = 0U;
    vlSelfRef.__PVT__state_d = vlSelfRef.__PVT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__err_en = 0x0aU;
    vlSelfRef.err_o = 0U;
    vlSelfRef.flush_ack_o = 0U;
    vlSelfRef.resp_pending_o = 0U;
    if ((0x0121U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__22__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellinp__u_prog_tl_gate__lc_en_i;
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__22__Vfuncout 
                        = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__22__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__22__Vfuncout))) {
            vlSelfRef.__PVT__state_d = 0x00e7U;
        }
        if ((0U != (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.resp_pending_o = 1U;
        }
    } else if ((0x00e7U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__block_cmd = 1U;
        if ((0U == (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.__PVT__state_d = (([&]() {
                        vlSelfRef.__Vfunc_lc_tx_test_false_loose__23__val 
                            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellinp__u_prog_tl_gate__lc_en_i;
                        vlSelfRef.__Vfunc_lc_tx_test_false_loose__23__Vfuncout 
                            = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__23__val));
                    }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__23__Vfuncout))
                                         ? 0x00baU : 0x004cU);
        } else {
            vlSelfRef.resp_pending_o = 1U;
        }
    } else if ((0x004cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__block_cmd = 1U;
        vlSelfRef.flush_ack_o = 1U;
        vlSelfRef.__PVT__state_d = (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__24__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellinp__u_prog_tl_gate__lc_en_i;
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__24__Vfuncout 
                        = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__24__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__24__Vfuncout))
                                     ? 0x00baU : 0x0121U);
    } else if ((0x00baU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__err_en = 5U;
        if (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_true_strict__25__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellinp__u_prog_tl_gate__lc_en_i;
                    vlSelfRef.__Vfunc_lc_tx_test_true_strict__25__Vfuncout 
                        = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__25__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__25__Vfuncout))) {
            vlSelfRef.__PVT__state_d = 0x0116U;
        }
    } else if ((0x0116U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__err_en = 5U;
        vlSelfRef.__PVT__block_cmd = 1U;
        if ((0U == (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.__PVT__state_d = 0x0121U;
        }
    } else {
        vlSelfRef.err_o = 1U;
        vlSelfRef.__PVT__err_en = 5U;
    }
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x0116U 
                                              == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                             << 4U) 
                                            | (((0x00baU 
                                                 == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                                << 3U) 
                                               | ((0x004cU 
                                                   == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                                  << 2U))) 
                                           | (((0x00e7U 
                                                == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                               << 1U) 
                                              | (0x0121U 
                                                 == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))))))) {
        if ((0U != ((((0x0116U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                      << 4U) | (((0x00baU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                 << 3U) | ((0x004cU 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                           << 2U))) 
                    | (((0x00e7U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                        << 1U) | (0x0121U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tlul_lc_gate.sv:179: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_prog_tl_gate: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/tlul_lc_gate.sv", 179, "");
            }
        }
    }
    __Vfunc_lc_tx_test_false_strict__29__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__29__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__29__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i 
        = __Vfunc_lc_tx_test_false_strict__29__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__27__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__27__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__27__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i 
        = __Vfunc_lc_tx_test_false_strict__27__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__28__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__28__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__28__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i 
        = __Vfunc_lc_tx_test_false_strict__28__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__30__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__30__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__30__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i 
        = __Vfunc_lc_tx_test_false_strict__30__Vfuncout;
}

void Vsim_tlul_lc_gate___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate__2(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_valid)
                                      ? (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__rdata_o 
                                               >> 8U))
                                      : 0U))) << 0x00000039U) 
                   | (((QData)((IData)(((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_valid)
                                         ? (0x000000ffU 
                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__rdata_o)
                                         : 0U))) << 0x00000031U) 
                      | (((QData)((IData)((((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_error)) 
                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__vld_rd_rsp))
                                            ? (IData)(
                                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_rspfifo__DOT__rdata_o 
                                                       >> 8U))
                                            : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__error_blanking_data))) 
                          << 0x00000010U) | (QData)((IData)(
                                                            ((((0x00004000U 
                                                                & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__rdata_o)
                                                                ? 0x0000002aU
                                                                : 
                                                               ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__vld_rd_rsp)
                                                                 ? 
                                                                (0x0000007fU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_rspfifo__DOT__rdata_o 
                                                                            >> 1U)))
                                                                 : 0x0000002aU)) 
                                                              << 2U) 
                                                             | ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_error) 
                                                                  & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_valid)) 
                                                                 << 1U) 
                                                                | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT____VdfgRegularize_h10d5dfb6_0_0)))))))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = ((0xc0000000U & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U]) 
           | (IData)(((((QData)((IData)(((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_valid)
                                          ? (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__rdata_o 
                                                   >> 8U))
                                          : 0U))) << 0x00000039U) 
                       | (((QData)((IData)(((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_valid)
                                             ? (0x000000ffU 
                                                & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__rdata_o)
                                             : 0U))) 
                           << 0x00000031U) | (((QData)((IData)(
                                                               (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_error)) 
                                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__vld_rd_rsp))
                                                                 ? (IData)(
                                                                           (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_rspfifo__DOT__rdata_o 
                                                                            >> 8U))
                                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__error_blanking_data))) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(
                                                                ((((0x00004000U 
                                                                    & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__rdata_o)
                                                                    ? 0x0000002aU
                                                                    : 
                                                                   ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__vld_rd_rsp)
                                                                     ? 
                                                                    (0x0000007fU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_rspfifo__DOT__rdata_o 
                                                                                >> 1U)))
                                                                     : 0x0000002aU)) 
                                                                  << 2U) 
                                                                 | ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_error) 
                                                                      & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_valid)) 
                                                                     << 1U) 
                                                                    | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT____VdfgRegularize_h10d5dfb6_0_0)))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U]) 
           | ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_valid) 
                & (1U != (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__rdata_o 
                                >> 0x0000000fU)))) ? 0U
                : 1U) << 0x0000001eU));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = ((2U & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U]) 
           | (3U & ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_valid) 
                      & (1U != (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__rdata_o 
                                      >> 0x0000000fU))))
                      ? 0U : 1U) >> 2U)));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = ((1U & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U]) 
           | (3U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_valid) 
                    << 1U)));
    vlSelfRef.__PVT__tl_d2h_int[2U][0U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U];
    vlSelfRef.__PVT__tl_d2h_int[2U][1U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U];
    vlSelfRef.__PVT__tl_d2h_int[2U][2U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U];
}

void Vsim_tlul_lc_gate___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate__1(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[1U][0U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U];
    vlSelfRef.__PVT__tl_d2h_int[1U][1U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U];
    vlSelfRef.__PVT__tl_d2h_int[1U][2U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U];
    vlSelfRef.__PVT__tl_d2h_int[0U][0U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[0U][1U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[0U][2U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_h2d_int[0U][0U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
        [0U][0U];
    vlSelfRef.__PVT__tl_h2d_int[0U][1U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
        [0U][1U];
    vlSelfRef.__PVT__tl_h2d_int[0U][2U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
        [0U][2U];
    vlSelfRef.__PVT__tl_h2d_int[0U][3U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
        [0U][3U];
    vlSelfRef.tl_d2h_o[0U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][0U];
    vlSelfRef.tl_d2h_o[1U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][1U];
    vlSelfRef.tl_d2h_o[2U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][2U];
    vlSelfRef.__PVT__tl_h2d_error[0U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[1U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[2U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[3U] = 0U;
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__26__val 
                    = vlSelfRef.__PVT__err_en;
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__26__Vfuncout 
                    = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__26__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__26__Vfuncout))) {
        vlSelfRef.__PVT__tl_h2d_error[0U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
            [0U][0U];
        vlSelfRef.__PVT__tl_h2d_error[1U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
            [0U][1U];
        vlSelfRef.__PVT__tl_h2d_error[2U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
            [0U][2U];
        vlSelfRef.__PVT__tl_h2d_error[3U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
            [0U][3U];
        vlSelfRef.tl_d2h_o[0U] = ((0xffff0000U & vlSelfRef.tl_d2h_o[0U]) 
                                  | (((((((2U & (VL_REDXOR_32(
                                                              (0x10U 
                                                               & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   VL_REDXOR_32(
                                                                (8U 
                                                                 & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                         << 6U) | (
                                                   ((2U 
                                                     & (VL_REDXOR_32(
                                                                     (4U 
                                                                      & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ 
                                                          VL_REDXOR_32(
                                                                       (0x22U 
                                                                        & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                   << 4U)) 
                                       | ((((2U & (
                                                   VL_REDXOR_32(
                                                                (0x21U 
                                                                 & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ VL_REDXOR_32(
                                                               (0x1fU 
                                                                & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                           << 2U) | 
                                          ((2U & (VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_32(
                                                           (0x98505586U 
                                                            & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                << 0x00000010U) 
                                                               | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                  >> 0x00000010U)))))))) 
                                      << 8U) | ((((
                                                   (2U 
                                                    & ((~ 
                                                        VL_REDXOR_32(
                                                                     (0x2dcc624cU 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U))))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & VL_REDXOR_32(
                                                                     (0xc2c1323bU 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U)))))) 
                                                  << 6U) 
                                                 | (((2U 
                                                      & ((~ 
                                                          VL_REDXOR_32(
                                                                       (0x31234ed1U 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U))))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_32(
                                                                       (0x413d89aaU 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U)))))) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & ((~ 
                                                        VL_REDXOR_32(
                                                                     (0xdeba8050U 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U))))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_32(
                                                                       (0x2606bd25U 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U)))) 
                                                          << 2U)) 
                                                      | (3U 
                                                         & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]))))));
        vlSelfRef.tl_d2h_o[0U] = ((0x0000ffffU & vlSelfRef.tl_d2h_o[0U]) 
                                  | ((IData)((0x0003ffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                  << 0x00000030U) 
                                                 | (((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                     << 0x00000010U) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                       >> 0x00000010U))))) 
                                     << 0x00000010U));
        vlSelfRef.tl_d2h_o[1U] = (((IData)((0x0003ffffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                << 0x00000030U) 
                                               | (((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                   << 0x00000010U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                     >> 0x00000010U))))) 
                                   >> 0x00000010U) 
                                  | ((IData)(((0x0003ffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                   << 0x00000030U) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                      << 0x00000010U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                        >> 0x00000010U)))) 
                                              >> 0x00000020U)) 
                                     << 0x00000010U));
        vlSelfRef.tl_d2h_o[2U] = (3U & ((IData)(((0x0003ffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                      << 0x00000030U) 
                                                     | (((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                         << 0x00000010U) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                           >> 0x00000010U)))) 
                                                 >> 0x00000020U)) 
                                        >> 0x00000010U));
    }
    if (vlSelfRef.__PVT__block_cmd) {
        vlSelfRef.tl_d2h_o[0U] = (0xfffffffeU & vlSelfRef.tl_d2h_o[0U]);
        vlSelfRef.__PVT__tl_h2d_int[0U][3U] = (0x00000fffU 
                                               & vlSelfRef.__PVT__tl_h2d_int
                                               [0U][3U]);
        vlSelfRef.__PVT__tl_h2d_error[3U] = (0x00000fffU 
                                             & vlSelfRef.__PVT__tl_h2d_error[3U]);
    }
    vlSelfRef.__PVT__a_ack = (1U & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                     [0U][3U] >> 0x0000000cU) 
                                    & vlSelfRef.tl_d2h_o[0U]));
    vlSelfRef.__PVT__d_ack = (IData)(((vlSelfRef.tl_d2h_o[2U] 
                                       >> 1U) & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                      [0U][0U]));
}

void Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate__0(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__27__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__27__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__27__val;
    __Vfunc_lc_tx_test_false_strict__27__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__28__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__28__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__28__val;
    __Vfunc_lc_tx_test_false_strict__28__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__29__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__29__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__29__val;
    __Vfunc_lc_tx_test_false_strict__29__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__30__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__30__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__30__val;
    __Vfunc_lc_tx_test_false_strict__30__val = 0;
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__32__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__32__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__32__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__32__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__32__payload;
    __Vfunc_extract_d2h_rsp_intg__32__payload = 0;
    CData/*1:0*/ __Vdly__outstanding_txn;
    __Vdly__outstanding_txn = 0;
    // Body
    __Vdly__outstanding_txn = vlSelfRef.__PVT__outstanding_txn;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__a_ack) & (~ (IData)(vlSelfRef.__PVT__d_ack)))) {
            __Vdly__outstanding_txn = (3U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__outstanding_txn)));
        } else if (((IData)(vlSelfRef.__PVT__d_ack) 
                    & (~ (IData)(vlSelfRef.__PVT__a_ack)))) {
            __Vdly__outstanding_txn = (3U & ((IData)(vlSelfRef.__PVT__outstanding_txn) 
                                             - (IData)(1U)));
        }
        vlSelfRef.__PVT__u_err_en_sync__DOT__gen_no_flops__DOT__unused_logic 
            = vlSelfRef.__PVT__err_en;
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__state_d;
        if (((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending) 
             & vlSelfRef.__PVT__tl_h2d_error[0U])) {
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending = 0U;
        } else if ((IData)(((vlSelfRef.__PVT__tl_h2d_error[3U] 
                             >> 0x0000000cU) & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]))) {
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending = 1U;
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source 
                = (0x000000ffU & ((vlSelfRef.__PVT__tl_h2d_error[3U] 
                                   << 4U) | (vlSelfRef.__PVT__tl_h2d_error[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode 
                = (7U & (vlSelfRef.__PVT__tl_h2d_error[3U] 
                         >> 9U));
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size 
                = (3U & (vlSelfRef.__PVT__tl_h2d_error[3U] 
                         >> 4U));
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type 
                = (0x0000000fU & (vlSelfRef.__PVT__tl_h2d_error[0U] 
                                  >> 0x0000000fU));
        }
    } else {
        __Vdly__outstanding_txn = 0U;
        vlSelfRef.__PVT__u_err_en_sync__DOT__gen_no_flops__DOT__unused_logic = 0x0aU;
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw = 0x00baU;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode = 4U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type = 9U;
    }
    vlSelfRef.__PVT__outstanding_txn = __Vdly__outstanding_txn;
    vlSelfRef.__PVT__block_cmd = 0U;
    vlSelfRef.__PVT__state_d = vlSelfRef.__PVT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__err_en = 0x0aU;
    vlSelfRef.err_o = 0U;
    vlSelfRef.flush_ack_o = 0U;
    vlSelfRef.resp_pending_o = 0U;
    if ((0x0121U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__22__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellinp__u_prog_tl_gate__lc_en_i;
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__22__Vfuncout 
                        = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__22__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__22__Vfuncout))) {
            vlSelfRef.__PVT__state_d = 0x00e7U;
        }
        if ((0U != (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.resp_pending_o = 1U;
        }
    } else if ((0x00e7U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__block_cmd = 1U;
        if ((0U == (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.__PVT__state_d = (([&]() {
                        vlSelfRef.__Vfunc_lc_tx_test_false_loose__23__val 
                            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellinp__u_prog_tl_gate__lc_en_i;
                        vlSelfRef.__Vfunc_lc_tx_test_false_loose__23__Vfuncout 
                            = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__23__val));
                    }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__23__Vfuncout))
                                         ? 0x00baU : 0x004cU);
        } else {
            vlSelfRef.resp_pending_o = 1U;
        }
    } else if ((0x004cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__block_cmd = 1U;
        vlSelfRef.flush_ack_o = 1U;
        vlSelfRef.__PVT__state_d = (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__24__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellinp__u_prog_tl_gate__lc_en_i;
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__24__Vfuncout 
                        = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__24__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__24__Vfuncout))
                                     ? 0x00baU : 0x0121U);
    } else if ((0x00baU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__err_en = 5U;
        if (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_true_strict__25__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellinp__u_prog_tl_gate__lc_en_i;
                    vlSelfRef.__Vfunc_lc_tx_test_true_strict__25__Vfuncout 
                        = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__25__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__25__Vfuncout))) {
            vlSelfRef.__PVT__state_d = 0x0116U;
        }
    } else if ((0x0116U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__err_en = 5U;
        vlSelfRef.__PVT__block_cmd = 1U;
        if ((0U == (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.__PVT__state_d = 0x0121U;
        }
    } else {
        vlSelfRef.err_o = 1U;
        vlSelfRef.__PVT__err_en = 5U;
    }
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x0116U 
                                              == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                             << 4U) 
                                            | (((0x00baU 
                                                 == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                                << 3U) 
                                               | ((0x004cU 
                                                   == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                                  << 2U))) 
                                           | (((0x00e7U 
                                                == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                               << 1U) 
                                              | (0x0121U 
                                                 == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))))))) {
        if ((0U != ((((0x0116U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                      << 4U) | (((0x00baU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                 << 3U) | ((0x004cU 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                           << 2U))) 
                    | (((0x00e7U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                        << 1U) | (0x0121U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tlul_lc_gate.sv:179: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_prog_tl_gate: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/tlul_lc_gate.sv", 179, "");
            }
        }
    }
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
        = ((0xfe00ffffU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source) 
                             << 0x00000011U)));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
        = ((0x01ffffffU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U]) 
           | (0xfe000000U & ((((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                                << 0x00000019U))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((0x01ffffffU & (((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                                      ? 1U : 0U) >> 2U)) 
                    | ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                       >> 7U))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__31__val 
                        = vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__31__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__31__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__31__Vfuncout))
                      ? 0U : 0xffffffffU));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    __Vfunc_lc_tx_test_false_strict__29__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__29__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__29__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i 
        = __Vfunc_lc_tx_test_false_strict__29__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__27__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__27__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__27__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i 
        = __Vfunc_lc_tx_test_false_strict__27__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__28__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__28__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__28__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i 
        = __Vfunc_lc_tx_test_false_strict__28__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__30__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__30__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__30__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i 
        = __Vfunc_lc_tx_test_false_strict__30__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__32__tl[0U] = vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U];
    __Vfunc_extract_d2h_rsp_intg__32__tl[1U] = vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U];
    __Vfunc_extract_d2h_rsp_intg__32__tl[2U] = vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U];
    __Vfunc_extract_d2h_rsp_intg__32__payload = ((0x00000038U 
                                                  & ((__Vfunc_extract_d2h_rsp_intg__32__tl[2U] 
                                                      << 5U) 
                                                     | (0x00000018U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__32__tl[1U] 
                                                           >> 0x0000001bU)))) 
                                                 | ((6U 
                                                     & (__Vfunc_extract_d2h_rsp_intg__32__tl[1U] 
                                                        >> 0x00000018U)) 
                                                    | (1U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__32__tl[0U] 
                                                          >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__32__Vfuncout = __Vfunc_extract_d2h_rsp_intg__32__payload;
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__32__Vfuncout;
}

void Vsim_tlul_lc_gate___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate__0(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_valid)
                                      ? (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__rdata_o 
                                               >> 8U))
                                      : 0U))) << 0x00000039U) 
                   | (((QData)((IData)(((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_valid)
                                         ? (0x000000ffU 
                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__rdata_o)
                                         : 0U))) << 0x00000031U) 
                      | (((QData)((IData)((((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_error)) 
                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__vld_rd_rsp))
                                            ? (IData)(
                                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_rspfifo__DOT__rdata_o 
                                                       >> 8U))
                                            : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__error_blanking_data))) 
                          << 0x00000010U) | (QData)((IData)(
                                                            ((((0x00004000U 
                                                                & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__rdata_o)
                                                                ? 0x0000002aU
                                                                : 
                                                               ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__vld_rd_rsp)
                                                                 ? 
                                                                (0x0000007fU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_rspfifo__DOT__rdata_o 
                                                                            >> 1U)))
                                                                 : 0x0000002aU)) 
                                                              << 2U) 
                                                             | ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_error) 
                                                                  & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_valid)) 
                                                                 << 1U) 
                                                                | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT____VdfgRegularize_h10d5dfb6_0_0)))))))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = ((0xc0000000U & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U]) 
           | (IData)(((((QData)((IData)(((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_valid)
                                          ? (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__rdata_o 
                                                   >> 8U))
                                          : 0U))) << 0x00000039U) 
                       | (((QData)((IData)(((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_valid)
                                             ? (0x000000ffU 
                                                & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__rdata_o)
                                             : 0U))) 
                           << 0x00000031U) | (((QData)((IData)(
                                                               (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_error)) 
                                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__vld_rd_rsp))
                                                                 ? (IData)(
                                                                           (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_rspfifo__DOT__rdata_o 
                                                                            >> 8U))
                                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__error_blanking_data))) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(
                                                                ((((0x00004000U 
                                                                    & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__rdata_o)
                                                                    ? 0x0000002aU
                                                                    : 
                                                                   ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__vld_rd_rsp)
                                                                     ? 
                                                                    (0x0000007fU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_rspfifo__DOT__rdata_o 
                                                                                >> 1U)))
                                                                     : 0x0000002aU)) 
                                                                  << 2U) 
                                                                 | ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_error) 
                                                                      & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_valid)) 
                                                                     << 1U) 
                                                                    | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT____VdfgRegularize_h10d5dfb6_0_0)))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U]) 
           | ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_valid) 
                & (1U != (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__rdata_o 
                                >> 0x0000000fU)))) ? 0U
                : 1U) << 0x0000001eU));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = ((2U & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U]) 
           | (3U & ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_valid) 
                      & (1U != (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__rdata_o 
                                      >> 0x0000000fU))))
                      ? 0U : 1U) >> 2U)));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = ((1U & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U]) 
           | (3U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_valid) 
                    << 1U)));
    vlSelfRef.__PVT__tl_d2h_int[2U][0U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U];
    vlSelfRef.__PVT__tl_d2h_int[2U][1U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U];
    vlSelfRef.__PVT__tl_d2h_int[2U][2U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U];
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[1U][0U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U];
    vlSelfRef.__PVT__tl_d2h_int[1U][1U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U];
    vlSelfRef.__PVT__tl_d2h_int[1U][2U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U];
    vlSelfRef.__PVT__tl_d2h_int[0U][0U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[0U][1U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[0U][2U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_h2d_int[0U][0U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
        [0U][0U];
    vlSelfRef.__PVT__tl_h2d_int[0U][1U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
        [0U][1U];
    vlSelfRef.__PVT__tl_h2d_int[0U][2U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
        [0U][2U];
    vlSelfRef.__PVT__tl_h2d_int[0U][3U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
        [0U][3U];
    vlSelfRef.tl_d2h_o[0U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][0U];
    vlSelfRef.tl_d2h_o[1U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][1U];
    vlSelfRef.tl_d2h_o[2U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][2U];
    vlSelfRef.__PVT__tl_h2d_error[0U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[1U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[2U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[3U] = 0U;
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__26__val 
                    = vlSelfRef.__PVT__err_en;
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__26__Vfuncout 
                    = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__26__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__26__Vfuncout))) {
        vlSelfRef.__PVT__tl_h2d_error[0U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
            [0U][0U];
        vlSelfRef.__PVT__tl_h2d_error[1U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
            [0U][1U];
        vlSelfRef.__PVT__tl_h2d_error[2U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
            [0U][2U];
        vlSelfRef.__PVT__tl_h2d_error[3U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
            [0U][3U];
        vlSelfRef.tl_d2h_o[0U] = ((0xffff0000U & vlSelfRef.tl_d2h_o[0U]) 
                                  | (((((((2U & (VL_REDXOR_32(
                                                              (0x10U 
                                                               & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   VL_REDXOR_32(
                                                                (8U 
                                                                 & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                         << 6U) | (
                                                   ((2U 
                                                     & (VL_REDXOR_32(
                                                                     (4U 
                                                                      & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ 
                                                          VL_REDXOR_32(
                                                                       (0x22U 
                                                                        & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                   << 4U)) 
                                       | ((((2U & (
                                                   VL_REDXOR_32(
                                                                (0x21U 
                                                                 & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ VL_REDXOR_32(
                                                               (0x1fU 
                                                                & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                           << 2U) | 
                                          ((2U & (VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_32(
                                                           (0x98505586U 
                                                            & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                << 0x00000010U) 
                                                               | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                  >> 0x00000010U)))))))) 
                                      << 8U) | ((((
                                                   (2U 
                                                    & ((~ 
                                                        VL_REDXOR_32(
                                                                     (0x2dcc624cU 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U))))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & VL_REDXOR_32(
                                                                     (0xc2c1323bU 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U)))))) 
                                                  << 6U) 
                                                 | (((2U 
                                                      & ((~ 
                                                          VL_REDXOR_32(
                                                                       (0x31234ed1U 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U))))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_32(
                                                                       (0x413d89aaU 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U)))))) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & ((~ 
                                                        VL_REDXOR_32(
                                                                     (0xdeba8050U 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U))))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_32(
                                                                       (0x2606bd25U 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U)))) 
                                                          << 2U)) 
                                                      | (3U 
                                                         & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]))))));
        vlSelfRef.tl_d2h_o[0U] = ((0x0000ffffU & vlSelfRef.tl_d2h_o[0U]) 
                                  | ((IData)((0x0003ffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                  << 0x00000030U) 
                                                 | (((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                     << 0x00000010U) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                       >> 0x00000010U))))) 
                                     << 0x00000010U));
        vlSelfRef.tl_d2h_o[1U] = (((IData)((0x0003ffffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                << 0x00000030U) 
                                               | (((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                   << 0x00000010U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                     >> 0x00000010U))))) 
                                   >> 0x00000010U) 
                                  | ((IData)(((0x0003ffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                   << 0x00000030U) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                      << 0x00000010U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                        >> 0x00000010U)))) 
                                              >> 0x00000020U)) 
                                     << 0x00000010U));
        vlSelfRef.tl_d2h_o[2U] = (3U & ((IData)(((0x0003ffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                      << 0x00000030U) 
                                                     | (((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                         << 0x00000010U) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                           >> 0x00000010U)))) 
                                                 >> 0x00000020U)) 
                                        >> 0x00000010U));
    }
    if (vlSelfRef.__PVT__block_cmd) {
        vlSelfRef.tl_d2h_o[0U] = (0xfffffffeU & vlSelfRef.tl_d2h_o[0U]);
        vlSelfRef.__PVT__tl_h2d_int[0U][3U] = (0x00000fffU 
                                               & vlSelfRef.__PVT__tl_h2d_int
                                               [0U][3U]);
        vlSelfRef.__PVT__tl_h2d_error[3U] = (0x00000fffU 
                                             & vlSelfRef.__PVT__tl_h2d_error[3U]);
    }
    vlSelfRef.__PVT__a_ack = (1U & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                     [0U][3U] >> 0x0000000cU) 
                                    & vlSelfRef.tl_d2h_o[0U]));
    vlSelfRef.__PVT__d_ack = (IData)(((vlSelfRef.tl_d2h_o[2U] 
                                       >> 1U) & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                      [0U][0U]));
}

void Vsim_tlul_lc_gate___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate__1(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__38__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__38__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__38__val;
    __Vfunc_lc_tx_test_false_strict__38__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__39__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__39__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__39__val;
    __Vfunc_lc_tx_test_false_strict__39__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__40__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__40__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__40__val;
    __Vfunc_lc_tx_test_false_strict__40__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__41__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__41__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__41__val;
    __Vfunc_lc_tx_test_false_strict__41__val = 0;
    // Body
    vlSelfRef.__PVT__block_cmd = 0U;
    vlSelfRef.__PVT__state_d = vlSelfRef.__PVT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__err_en = 0x0aU;
    vlSelfRef.err_o = 0U;
    vlSelfRef.flush_ack_o = 0U;
    vlSelfRef.resp_pending_o = 0U;
    if ((0x0121U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__33__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__host_enable;
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__33__Vfuncout 
                        = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__33__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__33__Vfuncout))) {
            vlSelfRef.__PVT__state_d = 0x00e7U;
        }
        if ((0U != (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.resp_pending_o = 1U;
        }
    } else if ((0x00e7U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__block_cmd = 1U;
        if ((0U == (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.__PVT__state_d = (([&]() {
                        vlSelfRef.__Vfunc_lc_tx_test_false_loose__34__val 
                            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__host_enable;
                        vlSelfRef.__Vfunc_lc_tx_test_false_loose__34__Vfuncout 
                            = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__34__val));
                    }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__34__Vfuncout))
                                         ? 0x00baU : 0x004cU);
        } else {
            vlSelfRef.resp_pending_o = 1U;
        }
    } else if ((0x004cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__block_cmd = 1U;
        vlSelfRef.flush_ack_o = 1U;
        vlSelfRef.__PVT__state_d = (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__35__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__host_enable;
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__35__Vfuncout 
                        = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__35__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__35__Vfuncout))
                                     ? 0x00baU : 0x0121U);
    } else if ((0x00baU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__err_en = 5U;
        if (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_true_strict__36__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__host_enable;
                    vlSelfRef.__Vfunc_lc_tx_test_true_strict__36__Vfuncout 
                        = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__36__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__36__Vfuncout))) {
            vlSelfRef.__PVT__state_d = 0x0116U;
        }
    } else if ((0x0116U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__err_en = 5U;
        vlSelfRef.__PVT__block_cmd = 1U;
        if ((0U == (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.__PVT__state_d = 0x0121U;
        }
    } else {
        vlSelfRef.err_o = 1U;
        vlSelfRef.__PVT__err_en = 5U;
    }
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x0116U 
                                              == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                             << 4U) 
                                            | (((0x00baU 
                                                 == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                                << 3U) 
                                               | ((0x004cU 
                                                   == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                                  << 2U))) 
                                           | (((0x00e7U 
                                                == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                               << 1U) 
                                              | (0x0121U 
                                                 == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))))))) {
        if ((0U != ((((0x0116U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                      << 4U) | (((0x00baU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                 << 3U) | ((0x004cU 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                           << 2U))) 
                    | (((0x00e7U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                        << 1U) | (0x0121U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tlul_lc_gate.sv:179: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_tl_gate: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/tlul_lc_gate.sv", 179, "");
            }
        }
    }
    __Vfunc_lc_tx_test_false_strict__39__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__39__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__39__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i 
        = __Vfunc_lc_tx_test_false_strict__39__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__41__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__41__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__41__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i 
        = __Vfunc_lc_tx_test_false_strict__41__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__40__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__40__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__40__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i 
        = __Vfunc_lc_tx_test_false_strict__40__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__38__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__38__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__38__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i 
        = __Vfunc_lc_tx_test_false_strict__38__Vfuncout;
}

void Vsim_tlul_lc_gate___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate__1(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = ((0xffff0000U & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U]) 
           | (((((2U & (VL_REDXOR_32((0x10U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                        << 1U)) | (1U & (~ VL_REDXOR_32(
                                                        (8U 
                                                         & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                << 0x0000000eU) | (((2U & (VL_REDXOR_32(
                                                        (4U 
                                                         & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                           << 1U)) 
                                    | (1U & (~ VL_REDXOR_32(
                                                            (0x22U 
                                                             & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                   << 0x0000000cU)) 
              | ((0x00000800U & (VL_REDXOR_32((0x21U 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                 << 0x0000000bU)) | 
                 ((0x00000400U & ((~ VL_REDXOR_32((0x1fU 
                                                   & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp)))) 
                                  << 0x0000000aU)) 
                  | ((0x00000200U & (VL_REDXOR_8(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                     << 9U)) | (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_973))))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = ((0x0000ffffU & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U]) 
           | ((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rsp_gen__DOT__tl_i[2U])) 
                                                 << 0x00000030U) 
                                                | (((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rsp_gen__DOT__tl_i[1U])) 
                                                    << 0x00000010U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rsp_gen__DOT__tl_i[0U])) 
                                                      >> 0x00000010U))))) 
              << 0x00000010U));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rsp_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rsp_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rsp_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rsp_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rsp_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rsp_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rsp_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rsp_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rsp_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.__PVT__tl_d2h_int[2U][0U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U];
    vlSelfRef.__PVT__tl_d2h_int[2U][1U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U];
    vlSelfRef.__PVT__tl_d2h_int[2U][2U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U];
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[1U][0U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U];
    vlSelfRef.__PVT__tl_d2h_int[1U][1U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U];
    vlSelfRef.__PVT__tl_d2h_int[1U][2U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U];
    vlSelfRef.__PVT__tl_d2h_int[0U][0U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[0U][1U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[0U][2U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_h2d_int[0U][0U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__tl_d_o[0U];
    vlSelfRef.__PVT__tl_h2d_int[0U][1U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__tl_d_o[1U];
    vlSelfRef.__PVT__tl_h2d_int[0U][2U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__tl_d_o[2U];
    vlSelfRef.__PVT__tl_h2d_int[0U][3U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__tl_d_o[3U];
    vlSelfRef.tl_d2h_o[0U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][0U];
    vlSelfRef.tl_d2h_o[1U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][1U];
    vlSelfRef.tl_d2h_o[2U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][2U];
    vlSelfRef.__PVT__tl_h2d_error[0U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[1U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[2U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[3U] = 0U;
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__37__val 
                    = vlSelfRef.__PVT__err_en;
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__37__Vfuncout 
                    = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__37__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__37__Vfuncout))) {
        vlSelfRef.__PVT__tl_h2d_error[0U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__tl_d_o[0U];
        vlSelfRef.__PVT__tl_h2d_error[1U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__tl_d_o[1U];
        vlSelfRef.__PVT__tl_h2d_error[2U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__tl_d_o[2U];
        vlSelfRef.__PVT__tl_h2d_error[3U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__tl_d_o[3U];
        vlSelfRef.tl_d2h_o[0U] = ((0xffff0000U & vlSelfRef.tl_d2h_o[0U]) 
                                  | (((((((2U & (VL_REDXOR_32(
                                                              (0x10U 
                                                               & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   VL_REDXOR_32(
                                                                (8U 
                                                                 & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                         << 6U) | (
                                                   ((2U 
                                                     & (VL_REDXOR_32(
                                                                     (4U 
                                                                      & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ 
                                                          VL_REDXOR_32(
                                                                       (0x22U 
                                                                        & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                   << 4U)) 
                                       | ((((2U & (
                                                   VL_REDXOR_32(
                                                                (0x21U 
                                                                 & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ VL_REDXOR_32(
                                                               (0x1fU 
                                                                & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                           << 2U) | 
                                          ((2U & (VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_32(
                                                           (0x98505586U 
                                                            & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                << 0x00000010U) 
                                                               | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                  >> 0x00000010U)))))))) 
                                      << 8U) | ((((
                                                   (2U 
                                                    & ((~ 
                                                        VL_REDXOR_32(
                                                                     (0x2dcc624cU 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U))))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & VL_REDXOR_32(
                                                                     (0xc2c1323bU 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U)))))) 
                                                  << 6U) 
                                                 | (((2U 
                                                      & ((~ 
                                                          VL_REDXOR_32(
                                                                       (0x31234ed1U 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U))))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_32(
                                                                       (0x413d89aaU 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U)))))) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & ((~ 
                                                        VL_REDXOR_32(
                                                                     (0xdeba8050U 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U))))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_32(
                                                                       (0x2606bd25U 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U)))) 
                                                          << 2U)) 
                                                      | (3U 
                                                         & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]))))));
        vlSelfRef.tl_d2h_o[0U] = ((0x0000ffffU & vlSelfRef.tl_d2h_o[0U]) 
                                  | ((IData)((0x0003ffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                  << 0x00000030U) 
                                                 | (((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                     << 0x00000010U) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                       >> 0x00000010U))))) 
                                     << 0x00000010U));
        vlSelfRef.tl_d2h_o[1U] = (((IData)((0x0003ffffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                << 0x00000030U) 
                                               | (((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                   << 0x00000010U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                     >> 0x00000010U))))) 
                                   >> 0x00000010U) 
                                  | ((IData)(((0x0003ffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                   << 0x00000030U) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                      << 0x00000010U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                        >> 0x00000010U)))) 
                                              >> 0x00000020U)) 
                                     << 0x00000010U));
        vlSelfRef.tl_d2h_o[2U] = (3U & ((IData)(((0x0003ffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                      << 0x00000030U) 
                                                     | (((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                         << 0x00000010U) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                           >> 0x00000010U)))) 
                                                 >> 0x00000020U)) 
                                        >> 0x00000010U));
    }
    if (vlSelfRef.__PVT__block_cmd) {
        vlSelfRef.tl_d2h_o[0U] = (0xfffffffeU & vlSelfRef.tl_d2h_o[0U]);
        vlSelfRef.__PVT__tl_h2d_int[0U][3U] = (0x00000fffU 
                                               & vlSelfRef.__PVT__tl_h2d_int
                                               [0U][3U]);
        vlSelfRef.__PVT__tl_h2d_error[3U] = (0x00000fffU 
                                             & vlSelfRef.__PVT__tl_h2d_error[3U]);
    }
    vlSelfRef.__PVT__a_ack = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                              & vlSelfRef.tl_d2h_o[0U]);
    vlSelfRef.__PVT__d_ack = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
                              & (vlSelfRef.tl_d2h_o[2U] 
                                 >> 1U));
}

void Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate__0(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__38__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__38__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__38__val;
    __Vfunc_lc_tx_test_false_strict__38__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__39__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__39__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__39__val;
    __Vfunc_lc_tx_test_false_strict__39__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__40__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__40__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__40__val;
    __Vfunc_lc_tx_test_false_strict__40__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__41__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__41__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__41__val;
    __Vfunc_lc_tx_test_false_strict__41__val = 0;
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__43__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__43__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__43__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__43__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__43__payload;
    __Vfunc_extract_d2h_rsp_intg__43__payload = 0;
    CData/*1:0*/ __Vdly__outstanding_txn;
    __Vdly__outstanding_txn = 0;
    // Body
    __Vdly__outstanding_txn = vlSelfRef.__PVT__outstanding_txn;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__a_ack) & (~ (IData)(vlSelfRef.__PVT__d_ack)))) {
            __Vdly__outstanding_txn = (3U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__outstanding_txn)));
        } else if (((IData)(vlSelfRef.__PVT__d_ack) 
                    & (~ (IData)(vlSelfRef.__PVT__a_ack)))) {
            __Vdly__outstanding_txn = (3U & ((IData)(vlSelfRef.__PVT__outstanding_txn) 
                                             - (IData)(1U)));
        }
        vlSelfRef.__PVT__u_err_en_sync__DOT__gen_no_flops__DOT__unused_logic 
            = vlSelfRef.__PVT__err_en;
        if (((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending) 
             & vlSelfRef.__PVT__tl_h2d_error[0U])) {
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending = 0U;
        } else if ((IData)(((vlSelfRef.__PVT__tl_h2d_error[3U] 
                             >> 0x0000000cU) & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]))) {
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending = 1U;
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source 
                = (0x000000ffU & ((vlSelfRef.__PVT__tl_h2d_error[3U] 
                                   << 4U) | (vlSelfRef.__PVT__tl_h2d_error[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode 
                = (7U & (vlSelfRef.__PVT__tl_h2d_error[3U] 
                         >> 9U));
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size 
                = (3U & (vlSelfRef.__PVT__tl_h2d_error[3U] 
                         >> 4U));
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type 
                = (0x0000000fU & (vlSelfRef.__PVT__tl_h2d_error[0U] 
                                  >> 0x0000000fU));
        }
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__state_d;
    } else {
        __Vdly__outstanding_txn = 0U;
        vlSelfRef.__PVT__u_err_en_sync__DOT__gen_no_flops__DOT__unused_logic = 0x0aU;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode = 4U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type = 9U;
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw = 0x00baU;
    }
    vlSelfRef.__PVT__outstanding_txn = __Vdly__outstanding_txn;
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
        = ((0xfe00ffffU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source) 
                             << 0x00000011U)));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
        = ((0x01ffffffU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U]) 
           | (0xfe000000U & ((((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                                << 0x00000019U))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((0x01ffffffU & (((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                                      ? 1U : 0U) >> 2U)) 
                    | ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                       >> 7U))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__42__val 
                        = vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__42__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__42__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__42__Vfuncout))
                      ? 0U : 0xffffffffU));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    vlSelfRef.__PVT__block_cmd = 0U;
    vlSelfRef.__PVT__state_d = vlSelfRef.__PVT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__err_en = 0x0aU;
    vlSelfRef.err_o = 0U;
    vlSelfRef.flush_ack_o = 0U;
    vlSelfRef.resp_pending_o = 0U;
    if ((0x0121U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__33__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__host_enable;
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__33__Vfuncout 
                        = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__33__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__33__Vfuncout))) {
            vlSelfRef.__PVT__state_d = 0x00e7U;
        }
        if ((0U != (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.resp_pending_o = 1U;
        }
    } else if ((0x00e7U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__block_cmd = 1U;
        if ((0U == (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.__PVT__state_d = (([&]() {
                        vlSelfRef.__Vfunc_lc_tx_test_false_loose__34__val 
                            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__host_enable;
                        vlSelfRef.__Vfunc_lc_tx_test_false_loose__34__Vfuncout 
                            = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__34__val));
                    }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__34__Vfuncout))
                                         ? 0x00baU : 0x004cU);
        } else {
            vlSelfRef.resp_pending_o = 1U;
        }
    } else if ((0x004cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__block_cmd = 1U;
        vlSelfRef.flush_ack_o = 1U;
        vlSelfRef.__PVT__state_d = (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__35__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__host_enable;
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__35__Vfuncout 
                        = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__35__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__35__Vfuncout))
                                     ? 0x00baU : 0x0121U);
    } else if ((0x00baU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__err_en = 5U;
        if (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_true_strict__36__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__host_enable;
                    vlSelfRef.__Vfunc_lc_tx_test_true_strict__36__Vfuncout 
                        = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__36__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__36__Vfuncout))) {
            vlSelfRef.__PVT__state_d = 0x0116U;
        }
    } else if ((0x0116U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__err_en = 5U;
        vlSelfRef.__PVT__block_cmd = 1U;
        if ((0U == (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.__PVT__state_d = 0x0121U;
        }
    } else {
        vlSelfRef.err_o = 1U;
        vlSelfRef.__PVT__err_en = 5U;
    }
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x0116U 
                                              == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                             << 4U) 
                                            | (((0x00baU 
                                                 == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                                << 3U) 
                                               | ((0x004cU 
                                                   == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                                  << 2U))) 
                                           | (((0x00e7U 
                                                == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                               << 1U) 
                                              | (0x0121U 
                                                 == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))))))) {
        if ((0U != ((((0x0116U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                      << 4U) | (((0x00baU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                 << 3U) | ((0x004cU 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                           << 2U))) 
                    | (((0x00e7U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                        << 1U) | (0x0121U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tlul_lc_gate.sv:179: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_tl_gate: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/tlul_lc_gate.sv", 179, "");
            }
        }
    }
    __Vfunc_extract_d2h_rsp_intg__43__tl[0U] = vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U];
    __Vfunc_extract_d2h_rsp_intg__43__tl[1U] = vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U];
    __Vfunc_extract_d2h_rsp_intg__43__tl[2U] = vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U];
    __Vfunc_extract_d2h_rsp_intg__43__payload = ((0x00000038U 
                                                  & ((__Vfunc_extract_d2h_rsp_intg__43__tl[2U] 
                                                      << 5U) 
                                                     | (0x00000018U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__43__tl[1U] 
                                                           >> 0x0000001bU)))) 
                                                 | ((6U 
                                                     & (__Vfunc_extract_d2h_rsp_intg__43__tl[1U] 
                                                        >> 0x00000018U)) 
                                                    | (1U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__43__tl[0U] 
                                                          >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__43__Vfuncout = __Vfunc_extract_d2h_rsp_intg__43__payload;
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__43__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__39__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__39__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__39__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i 
        = __Vfunc_lc_tx_test_false_strict__39__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__41__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__41__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__41__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i 
        = __Vfunc_lc_tx_test_false_strict__41__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__40__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__40__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__40__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i 
        = __Vfunc_lc_tx_test_false_strict__40__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__38__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__38__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__38__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i 
        = __Vfunc_lc_tx_test_false_strict__38__Vfuncout;
}

void Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_sba__0(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_sba__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__54__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__54__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__54__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__54__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__54__payload;
    __Vfunc_extract_d2h_rsp_intg__54__payload = 0;
    CData/*1:0*/ __Vdly__outstanding_txn;
    __Vdly__outstanding_txn = 0;
    // Body
    __Vdly__outstanding_txn = vlSelfRef.__PVT__outstanding_txn;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__a_ack) & (~ (
                                                   vlSelfRef.tl_d2h_o[2U] 
                                                   >> 1U)))) {
            __Vdly__outstanding_txn = (3U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__outstanding_txn)));
        } else if ((IData)(((vlSelfRef.tl_d2h_o[2U] 
                             >> 1U) & (~ (IData)(vlSelfRef.__PVT__a_ack))))) {
            __Vdly__outstanding_txn = (3U & ((IData)(vlSelfRef.__PVT__outstanding_txn) 
                                             - (IData)(1U)));
        }
        vlSelfRef.__PVT__u_err_en_sync__DOT__gen_no_flops__DOT__unused_logic 
            = vlSelfRef.__PVT__err_en;
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__state_d;
        if (((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending) 
             & vlSelfRef.__PVT__tl_h2d_error[0U])) {
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending = 0U;
        } else if ((IData)(((vlSelfRef.__PVT__tl_h2d_error[3U] 
                             >> 0x0000000cU) & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]))) {
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending = 1U;
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source 
                = (0x000000ffU & ((vlSelfRef.__PVT__tl_h2d_error[3U] 
                                   << 4U) | (vlSelfRef.__PVT__tl_h2d_error[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode 
                = (7U & (vlSelfRef.__PVT__tl_h2d_error[3U] 
                         >> 9U));
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size 
                = (3U & (vlSelfRef.__PVT__tl_h2d_error[3U] 
                         >> 4U));
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type 
                = (0x0000000fU & (vlSelfRef.__PVT__tl_h2d_error[0U] 
                                  >> 0x0000000fU));
        }
    } else {
        __Vdly__outstanding_txn = 0U;
        vlSelfRef.__PVT__u_err_en_sync__DOT__gen_no_flops__DOT__unused_logic = 0x0aU;
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw = 0x00baU;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode = 4U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type = 9U;
    }
    vlSelfRef.__PVT__outstanding_txn = __Vdly__outstanding_txn;
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
        = ((0xfe00ffffU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source) 
                             << 0x00000011U)));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
        = ((0x01ffffffU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U]) 
           | (0xfe000000U & ((((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                                << 0x00000019U))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((0x01ffffffU & (((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                                      ? 1U : 0U) >> 2U)) 
                    | ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                       >> 7U))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__53__val 
                        = vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__53__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__53__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__53__Vfuncout))
                      ? 0U : 0xffffffffU));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    __Vfunc_extract_d2h_rsp_intg__54__tl[0U] = vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U];
    __Vfunc_extract_d2h_rsp_intg__54__tl[1U] = vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U];
    __Vfunc_extract_d2h_rsp_intg__54__tl[2U] = vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U];
    __Vfunc_extract_d2h_rsp_intg__54__payload = ((0x00000038U 
                                                  & ((__Vfunc_extract_d2h_rsp_intg__54__tl[2U] 
                                                      << 5U) 
                                                     | (0x00000018U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__54__tl[1U] 
                                                           >> 0x0000001bU)))) 
                                                 | ((6U 
                                                     & (__Vfunc_extract_d2h_rsp_intg__54__tl[1U] 
                                                        >> 0x00000018U)) 
                                                    | (1U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__54__tl[0U] 
                                                          >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__54__Vfuncout = __Vfunc_extract_d2h_rsp_intg__54__payload;
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__54__Vfuncout;
}

void Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_sba__1(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_sba__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__49__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__49__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__49__val;
    __Vfunc_lc_tx_test_false_strict__49__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__50__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__50__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__50__val;
    __Vfunc_lc_tx_test_false_strict__50__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__51__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__51__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__51__val;
    __Vfunc_lc_tx_test_false_strict__51__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__52__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__52__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__52__val;
    __Vfunc_lc_tx_test_false_strict__52__val = 0;
    // Body
    vlSelfRef.__PVT__block_cmd = 0U;
    vlSelfRef.__PVT__state_d = vlSelfRef.__PVT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__err_en = 0x0aU;
    vlSelfRef.err_o = 0U;
    vlSelfRef.flush_ack_o = 0U;
    vlSelfRef.resp_pending_o = 0U;
    if ((0x0121U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__44__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__lc_hw_debug_en_gated_raw;
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__44__Vfuncout 
                        = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__44__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__44__Vfuncout))) {
            vlSelfRef.__PVT__state_d = 0x00e7U;
        }
        if ((0U != (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.resp_pending_o = 1U;
        }
    } else if ((0x00e7U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__block_cmd = 1U;
        if ((0U == (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.__PVT__state_d = (([&]() {
                        vlSelfRef.__Vfunc_lc_tx_test_false_loose__45__val 
                            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__lc_hw_debug_en_gated_raw;
                        vlSelfRef.__Vfunc_lc_tx_test_false_loose__45__Vfuncout 
                            = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__45__val));
                    }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__45__Vfuncout))
                                         ? 0x00baU : 0x004cU);
        } else {
            vlSelfRef.resp_pending_o = 1U;
        }
    } else if ((0x004cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__block_cmd = 1U;
        vlSelfRef.flush_ack_o = 1U;
        vlSelfRef.__PVT__state_d = (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__46__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__lc_hw_debug_en_gated_raw;
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__46__Vfuncout 
                        = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__46__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__46__Vfuncout))
                                     ? 0x00baU : 0x0121U);
    } else if ((0x00baU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__err_en = 5U;
        if (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_true_strict__47__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__lc_hw_debug_en_gated_raw;
                    vlSelfRef.__Vfunc_lc_tx_test_true_strict__47__Vfuncout 
                        = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__47__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__47__Vfuncout))) {
            vlSelfRef.__PVT__state_d = 0x0116U;
        }
    } else if ((0x0116U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__err_en = 5U;
        vlSelfRef.__PVT__block_cmd = 1U;
        if ((0U == (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.__PVT__state_d = 0x0121U;
        }
    } else {
        vlSelfRef.err_o = 1U;
        vlSelfRef.__PVT__err_en = 5U;
    }
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x0116U 
                                              == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                             << 4U) 
                                            | (((0x00baU 
                                                 == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                                << 3U) 
                                               | ((0x004cU 
                                                   == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                                  << 2U))) 
                                           | (((0x00e7U 
                                                == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                               << 1U) 
                                              | (0x0121U 
                                                 == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))))))) {
        if ((0U != ((((0x0116U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                      << 4U) | (((0x00baU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                 << 3U) | ((0x004cU 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                           << 2U))) 
                    | (((0x00e7U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                        << 1U) | (0x0121U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tlul_lc_gate.sv:179: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_dm.u_tlul_lc_gate_sba: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/tlul_lc_gate.sv", 179, "");
            }
        }
    }
    __Vfunc_lc_tx_test_false_strict__49__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__49__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__49__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i 
        = __Vfunc_lc_tx_test_false_strict__49__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__51__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__51__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__51__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i 
        = __Vfunc_lc_tx_test_false_strict__51__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__50__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__50__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__50__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i 
        = __Vfunc_lc_tx_test_false_strict__50__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__52__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__52__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__52__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i 
        = __Vfunc_lc_tx_test_false_strict__52__Vfuncout;
}

void Vsim_tlul_lc_gate___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_sba__1(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_sba__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = (((IData)((((QData)((IData)(((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                        ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U]
                                        : 0U))) << 0x0000003fU) 
                     | (((QData)((IData)(((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                           ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]
                                           : 0U))) 
                         << 0x0000001fU) | ((QData)((IData)(
                                                            ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                              ? 
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U]
                                                              : 0U))) 
                                            >> 1U)))) 
            << 1U) | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = (((IData)((((QData)((IData)(((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                        ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U]
                                        : 0U))) << 0x0000003fU) 
                     | (((QData)((IData)(((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                           ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]
                                           : 0U))) 
                         << 0x0000001fU) | ((QData)((IData)(
                                                            ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                              ? 
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U]
                                                              : 0U))) 
                                            >> 1U)))) 
            >> 0x0000001fU) | ((IData)(((((QData)((IData)(
                                                          ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                            ? 
                                                           vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U]
                                                            : 0U))) 
                                          << 0x0000003fU) 
                                         | (((QData)((IData)(
                                                             ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                               ? 
                                                              vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]
                                                               : 0U))) 
                                             << 0x0000001fU) 
                                            | ((QData)((IData)(
                                                               ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                                 ? 
                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U]
                                                                 : 0U))) 
                                               >> 1U))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = ((2U & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U]) 
           | (3U & ((IData)(((((QData)((IData)(((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                 ? 
                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U]
                                                 : 0U))) 
                               << 0x0000003fU) | (((QData)((IData)(
                                                                   ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                                     ? 
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]
                                                                     : 0U))) 
                                                   << 0x0000001fU) 
                                                  | ((QData)((IData)(
                                                                     ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                                       ? 
                                                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U]
                                                                       : 0U))) 
                                                     >> 1U))) 
                             >> 0x00000020U)) >> 0x0000001fU)));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = ((1U & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U]) 
           | (3U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                    << 1U)));
    vlSelfRef.__PVT__tl_d2h_int[2U][0U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U];
    vlSelfRef.__PVT__tl_d2h_int[2U][1U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U];
    vlSelfRef.__PVT__tl_d2h_int[2U][2U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U];
}

void Vsim_tlul_lc_gate___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_sba__2(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_sba__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[1U][0U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U];
    vlSelfRef.__PVT__tl_d2h_int[1U][1U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U];
    vlSelfRef.__PVT__tl_d2h_int[1U][2U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U];
    vlSelfRef.__PVT__tl_d2h_int[0U][0U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[0U][1U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[0U][2U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_h2d_int[0U][0U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__tl_adapter_host_sba__DOT__u_cmd_intg_gen__DOT__tl_o[0U];
    vlSelfRef.__PVT__tl_h2d_int[0U][1U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__tl_adapter_host_sba__DOT__u_cmd_intg_gen__DOT__tl_o[1U];
    vlSelfRef.__PVT__tl_h2d_int[0U][2U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__tl_adapter_host_sba__DOT__u_cmd_intg_gen__DOT__tl_o[2U];
    vlSelfRef.__PVT__tl_h2d_int[0U][3U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__tl_adapter_host_sba__DOT__u_cmd_intg_gen__DOT__tl_o[3U];
    vlSelfRef.tl_d2h_o[0U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][0U];
    vlSelfRef.tl_d2h_o[1U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][1U];
    vlSelfRef.tl_d2h_o[2U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][2U];
    vlSelfRef.__PVT__tl_h2d_error[0U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[1U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[2U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[3U] = 0U;
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__48__val 
                    = vlSelfRef.__PVT__err_en;
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__48__Vfuncout 
                    = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__48__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__48__Vfuncout))) {
        vlSelfRef.__PVT__tl_h2d_error[0U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__tl_adapter_host_sba__DOT__u_cmd_intg_gen__DOT__tl_o[0U];
        vlSelfRef.__PVT__tl_h2d_error[1U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__tl_adapter_host_sba__DOT__u_cmd_intg_gen__DOT__tl_o[1U];
        vlSelfRef.__PVT__tl_h2d_error[2U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__tl_adapter_host_sba__DOT__u_cmd_intg_gen__DOT__tl_o[2U];
        vlSelfRef.__PVT__tl_h2d_error[3U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__tl_adapter_host_sba__DOT__u_cmd_intg_gen__DOT__tl_o[3U];
        vlSelfRef.tl_d2h_o[0U] = ((0xffff0000U & vlSelfRef.tl_d2h_o[0U]) 
                                  | (((((((2U & (VL_REDXOR_32(
                                                              (0x10U 
                                                               & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   VL_REDXOR_32(
                                                                (8U 
                                                                 & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                         << 6U) | (
                                                   ((2U 
                                                     & (VL_REDXOR_32(
                                                                     (4U 
                                                                      & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ 
                                                          VL_REDXOR_32(
                                                                       (0x22U 
                                                                        & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                   << 4U)) 
                                       | ((((2U & (
                                                   VL_REDXOR_32(
                                                                (0x21U 
                                                                 & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ VL_REDXOR_32(
                                                               (0x1fU 
                                                                & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                           << 2U) | 
                                          ((2U & (VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_32(
                                                           (0x98505586U 
                                                            & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                << 0x00000010U) 
                                                               | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                  >> 0x00000010U)))))))) 
                                      << 8U) | ((((
                                                   (2U 
                                                    & ((~ 
                                                        VL_REDXOR_32(
                                                                     (0x2dcc624cU 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U))))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & VL_REDXOR_32(
                                                                     (0xc2c1323bU 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U)))))) 
                                                  << 6U) 
                                                 | (((2U 
                                                      & ((~ 
                                                          VL_REDXOR_32(
                                                                       (0x31234ed1U 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U))))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_32(
                                                                       (0x413d89aaU 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U)))))) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & ((~ 
                                                        VL_REDXOR_32(
                                                                     (0xdeba8050U 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U))))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_32(
                                                                       (0x2606bd25U 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U)))) 
                                                          << 2U)) 
                                                      | (3U 
                                                         & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]))))));
        vlSelfRef.tl_d2h_o[0U] = ((0x0000ffffU & vlSelfRef.tl_d2h_o[0U]) 
                                  | ((IData)((0x0003ffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                  << 0x00000030U) 
                                                 | (((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                     << 0x00000010U) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                       >> 0x00000010U))))) 
                                     << 0x00000010U));
        vlSelfRef.tl_d2h_o[1U] = (((IData)((0x0003ffffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                << 0x00000030U) 
                                               | (((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                   << 0x00000010U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                     >> 0x00000010U))))) 
                                   >> 0x00000010U) 
                                  | ((IData)(((0x0003ffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                   << 0x00000030U) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                      << 0x00000010U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                        >> 0x00000010U)))) 
                                              >> 0x00000020U)) 
                                     << 0x00000010U));
        vlSelfRef.tl_d2h_o[2U] = (3U & ((IData)(((0x0003ffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                      << 0x00000030U) 
                                                     | (((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                         << 0x00000010U) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                           >> 0x00000010U)))) 
                                                 >> 0x00000020U)) 
                                        >> 0x00000010U));
    }
    if (vlSelfRef.__PVT__block_cmd) {
        vlSelfRef.tl_d2h_o[0U] = (0xfffffffeU & vlSelfRef.tl_d2h_o[0U]);
        vlSelfRef.__PVT__tl_h2d_int[0U][3U] = (0x00000fffU 
                                               & vlSelfRef.__PVT__tl_h2d_int
                                               [0U][3U]);
        vlSelfRef.__PVT__tl_h2d_error[3U] = (0x00000fffU 
                                             & vlSelfRef.__PVT__tl_h2d_error[3U]);
    }
    vlSelfRef.__PVT__a_ack = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_sba__DOT__req) 
                              & vlSelfRef.tl_d2h_o[0U]);
}

void Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom__0(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__65__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__65__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__65__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__65__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__65__payload;
    __Vfunc_extract_d2h_rsp_intg__65__payload = 0;
    CData/*1:0*/ __Vdly__outstanding_txn;
    __Vdly__outstanding_txn = 0;
    // Body
    __Vdly__outstanding_txn = vlSelfRef.__PVT__outstanding_txn;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__a_ack) & (~ (IData)(vlSelfRef.__PVT__d_ack)))) {
            __Vdly__outstanding_txn = (3U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__outstanding_txn)));
        } else if (((IData)(vlSelfRef.__PVT__d_ack) 
                    & (~ (IData)(vlSelfRef.__PVT__a_ack)))) {
            __Vdly__outstanding_txn = (3U & ((IData)(vlSelfRef.__PVT__outstanding_txn) 
                                             - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending) 
             & vlSelfRef.__PVT__tl_h2d_error[0U])) {
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending = 0U;
        } else if ((IData)(((vlSelfRef.__PVT__tl_h2d_error[3U] 
                             >> 0x0000000cU) & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]))) {
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending = 1U;
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source 
                = (0x000000ffU & ((vlSelfRef.__PVT__tl_h2d_error[3U] 
                                   << 4U) | (vlSelfRef.__PVT__tl_h2d_error[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode 
                = (7U & (vlSelfRef.__PVT__tl_h2d_error[3U] 
                         >> 9U));
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size 
                = (3U & (vlSelfRef.__PVT__tl_h2d_error[3U] 
                         >> 4U));
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type 
                = (0x0000000fU & (vlSelfRef.__PVT__tl_h2d_error[0U] 
                                  >> 0x0000000fU));
        }
        vlSelfRef.__PVT__u_err_en_sync__DOT__gen_no_flops__DOT__unused_logic 
            = vlSelfRef.__PVT__err_en;
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__state_d;
    } else {
        __Vdly__outstanding_txn = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode = 4U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type = 9U;
        vlSelfRef.__PVT__u_err_en_sync__DOT__gen_no_flops__DOT__unused_logic = 0x0aU;
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw = 0x00baU;
    }
    vlSelfRef.__PVT__outstanding_txn = __Vdly__outstanding_txn;
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
        = ((0xfe00ffffU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source) 
                             << 0x00000011U)));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
        = ((0x01ffffffU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U]) 
           | (0xfe000000U & ((((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                                << 0x00000019U))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((0x01ffffffU & (((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                                      ? 1U : 0U) >> 2U)) 
                    | ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                       >> 7U))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__64__val 
                        = vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__64__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__64__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__64__Vfuncout))
                      ? 0U : 0xffffffffU));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    __Vfunc_extract_d2h_rsp_intg__65__tl[0U] = vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U];
    __Vfunc_extract_d2h_rsp_intg__65__tl[1U] = vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U];
    __Vfunc_extract_d2h_rsp_intg__65__tl[2U] = vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U];
    __Vfunc_extract_d2h_rsp_intg__65__payload = ((0x00000038U 
                                                  & ((__Vfunc_extract_d2h_rsp_intg__65__tl[2U] 
                                                      << 5U) 
                                                     | (0x00000018U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__65__tl[1U] 
                                                           >> 0x0000001bU)))) 
                                                 | ((6U 
                                                     & (__Vfunc_extract_d2h_rsp_intg__65__tl[1U] 
                                                        >> 0x00000018U)) 
                                                    | (1U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__65__tl[0U] 
                                                          >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__65__Vfuncout = __Vfunc_extract_d2h_rsp_intg__65__payload;
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__65__Vfuncout;
}

void Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom__1(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = ((0xffff0000U & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U]) 
           | (((((((2U & (VL_REDXOR_32((0x10U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                          << 1U)) | (1U & (~ VL_REDXOR_32(
                                                          (8U 
                                                           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                  << 6U) | (((2U & (VL_REDXOR_32((4U 
                                                  & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                    << 1U)) | (1U & 
                                               (~ VL_REDXOR_32(
                                                               (0x22U 
                                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                            << 4U)) | ((((2U & (VL_REDXOR_32(
                                                             (0x21U 
                                                              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                << 1U)) 
                                         | (1U & (~ 
                                                  VL_REDXOR_32(
                                                               (0x1fU 
                                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                        << 2U) | ((2U 
                                                   & (VL_REDXOR_8(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_32(
                                                                    (0x98505586U 
                                                                     & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))))) 
               << 8U) | (((((2U & ((~ VL_REDXOR_32(
                                                   (0x2dcc624cU 
                                                    & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                   << 1U)) | (1U & 
                                              VL_REDXOR_32(
                                                           (0xc2c1323bU 
                                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))) 
                           << 6U) | (((2U & ((~ VL_REDXOR_32(
                                                             (0x31234ed1U 
                                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                             << 1U)) 
                                      | (1U & VL_REDXOR_32(
                                                           (0x413d89aaU 
                                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))) 
                                     << 4U)) | ((8U 
                                                 & ((~ 
                                                     VL_REDXOR_32(
                                                                  (0xdeba8050U 
                                                                   & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                    << 3U)) 
                                                | ((4U 
                                                    & (VL_REDXOR_32(
                                                                    (0x2606bd25U 
                                                                     & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                       << 2U)) 
                                                   | (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_975))))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = ((0x0000ffffU & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U]) 
           | ((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                                 << 0x00000030U) 
                                                | (((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                    << 0x00000010U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                      >> 0x00000010U))))) 
              << 0x00000010U));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.__PVT__tl_d2h_int[2U][0U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U];
    vlSelfRef.__PVT__tl_d2h_int[2U][1U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U];
    vlSelfRef.__PVT__tl_d2h_int[2U][2U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U];
}

void Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom__2(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__60__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__60__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__60__val;
    __Vfunc_lc_tx_test_false_strict__60__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__61__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__61__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__61__val;
    __Vfunc_lc_tx_test_false_strict__61__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__62__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__62__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__62__val;
    __Vfunc_lc_tx_test_false_strict__62__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__63__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__63__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__63__val;
    __Vfunc_lc_tx_test_false_strict__63__val = 0;
    // Body
    vlSelfRef.__PVT__block_cmd = 0U;
    vlSelfRef.__PVT__state_d = vlSelfRef.__PVT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__err_en = 0x0aU;
    vlSelfRef.err_o = 0U;
    vlSelfRef.flush_ack_o = 0U;
    vlSelfRef.resp_pending_o = 0U;
    if ((0x0121U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((1U & (([&]() {
                            vlSelfRef.__Vfunc_lc_tx_test_false_loose__55__val 
                                = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__lc_hw_debug_en_gated_raw;
                            vlSelfRef.__Vfunc_lc_tx_test_false_loose__55__Vfuncout 
                                = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__55__val));
                        }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__55__Vfuncout)) 
                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                      >> 1U)))) {
            vlSelfRef.__PVT__state_d = 0x00e7U;
        }
        if ((0U != (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.resp_pending_o = 1U;
        }
    } else if ((0x00e7U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__block_cmd = 1U;
        if ((0U == (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.__PVT__state_d = (([&]() {
                        vlSelfRef.__Vfunc_lc_tx_test_false_loose__56__val 
                            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__lc_hw_debug_en_gated_raw;
                        vlSelfRef.__Vfunc_lc_tx_test_false_loose__56__Vfuncout 
                            = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__56__val));
                    }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__56__Vfuncout))
                                         ? 0x00baU : 0x004cU);
        } else {
            vlSelfRef.resp_pending_o = 1U;
        }
    } else if ((0x004cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__block_cmd = 1U;
        vlSelfRef.flush_ack_o = 1U;
        if (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__57__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__lc_hw_debug_en_gated_raw;
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__57__Vfuncout 
                        = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__57__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__57__Vfuncout))) {
            vlSelfRef.__PVT__state_d = 0x00baU;
        } else if ((1U & (~ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                             >> 1U)))) {
            vlSelfRef.__PVT__state_d = 0x0121U;
        }
    } else if ((0x00baU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__err_en = 5U;
        if (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_true_strict__58__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__lc_hw_debug_en_gated_raw;
                    vlSelfRef.__Vfunc_lc_tx_test_true_strict__58__Vfuncout 
                        = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__58__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__58__Vfuncout))) {
            vlSelfRef.__PVT__state_d = 0x0116U;
        }
    } else if ((0x0116U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__err_en = 5U;
        vlSelfRef.__PVT__block_cmd = 1U;
        if ((0U == (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.__PVT__state_d = 0x0121U;
        }
    } else {
        vlSelfRef.err_o = 1U;
        vlSelfRef.__PVT__err_en = 5U;
    }
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x0116U 
                                              == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                             << 4U) 
                                            | (((0x00baU 
                                                 == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                                << 3U) 
                                               | ((0x004cU 
                                                   == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                                  << 2U))) 
                                           | (((0x00e7U 
                                                == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                               << 1U) 
                                              | (0x0121U 
                                                 == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))))))) {
        if ((0U != ((((0x0116U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                      << 4U) | (((0x00baU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                 << 3U) | ((0x004cU 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                           << 2U))) 
                    | (((0x00e7U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                        << 1U) | (0x0121U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tlul_lc_gate.sv:179: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_dm.u_tlul_lc_gate_rom: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/tlul_lc_gate.sv", 179, "");
            }
        }
    }
    __Vfunc_lc_tx_test_false_strict__60__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__60__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__60__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i 
        = __Vfunc_lc_tx_test_false_strict__60__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__61__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__61__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__61__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i 
        = __Vfunc_lc_tx_test_false_strict__61__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__63__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__63__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__63__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i 
        = __Vfunc_lc_tx_test_false_strict__63__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__62__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__62__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__62__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i 
        = __Vfunc_lc_tx_test_false_strict__62__Vfuncout;
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[1U][0U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U];
    vlSelfRef.__PVT__tl_d2h_int[1U][1U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U];
    vlSelfRef.__PVT__tl_d2h_int[1U][2U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U];
    vlSelfRef.__PVT__tl_d2h_int[0U][0U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[0U][1U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[0U][2U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
}

void Vsim_tlul_lc_gate___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom__1(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tl_h2d_int[0U][0U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__tl_d_o[0U];
    vlSelfRef.__PVT__tl_h2d_int[0U][1U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__tl_d_o[1U];
    vlSelfRef.__PVT__tl_h2d_int[0U][2U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__tl_d_o[2U];
    vlSelfRef.__PVT__tl_h2d_int[0U][3U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__tl_d_o[3U];
    vlSelfRef.tl_d2h_o[0U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][0U];
    vlSelfRef.tl_d2h_o[1U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][1U];
    vlSelfRef.tl_d2h_o[2U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][2U];
    vlSelfRef.__PVT__tl_h2d_error[0U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[1U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[2U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[3U] = 0U;
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__59__val 
                    = vlSelfRef.__PVT__err_en;
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__59__Vfuncout 
                    = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__59__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__59__Vfuncout))) {
        vlSelfRef.__PVT__tl_h2d_error[0U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__tl_d_o[0U];
        vlSelfRef.__PVT__tl_h2d_error[1U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__tl_d_o[1U];
        vlSelfRef.__PVT__tl_h2d_error[2U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__tl_d_o[2U];
        vlSelfRef.__PVT__tl_h2d_error[3U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__tl_d_o[3U];
        vlSelfRef.tl_d2h_o[0U] = ((0xffff0000U & vlSelfRef.tl_d2h_o[0U]) 
                                  | (((((((2U & (VL_REDXOR_32(
                                                              (0x10U 
                                                               & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   VL_REDXOR_32(
                                                                (8U 
                                                                 & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                         << 6U) | (
                                                   ((2U 
                                                     & (VL_REDXOR_32(
                                                                     (4U 
                                                                      & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ 
                                                          VL_REDXOR_32(
                                                                       (0x22U 
                                                                        & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                   << 4U)) 
                                       | ((((2U & (
                                                   VL_REDXOR_32(
                                                                (0x21U 
                                                                 & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ VL_REDXOR_32(
                                                               (0x1fU 
                                                                & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                           << 2U) | 
                                          ((2U & (VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_32(
                                                           (0x98505586U 
                                                            & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                << 0x00000010U) 
                                                               | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                  >> 0x00000010U)))))))) 
                                      << 8U) | ((((
                                                   (2U 
                                                    & ((~ 
                                                        VL_REDXOR_32(
                                                                     (0x2dcc624cU 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U))))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & VL_REDXOR_32(
                                                                     (0xc2c1323bU 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U)))))) 
                                                  << 6U) 
                                                 | (((2U 
                                                      & ((~ 
                                                          VL_REDXOR_32(
                                                                       (0x31234ed1U 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U))))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_32(
                                                                       (0x413d89aaU 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U)))))) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & ((~ 
                                                        VL_REDXOR_32(
                                                                     (0xdeba8050U 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U))))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_32(
                                                                       (0x2606bd25U 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U)))) 
                                                          << 2U)) 
                                                      | (3U 
                                                         & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]))))));
        vlSelfRef.tl_d2h_o[0U] = ((0x0000ffffU & vlSelfRef.tl_d2h_o[0U]) 
                                  | ((IData)((0x0003ffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                  << 0x00000030U) 
                                                 | (((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                     << 0x00000010U) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                       >> 0x00000010U))))) 
                                     << 0x00000010U));
        vlSelfRef.tl_d2h_o[1U] = (((IData)((0x0003ffffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                << 0x00000030U) 
                                               | (((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                   << 0x00000010U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                     >> 0x00000010U))))) 
                                   >> 0x00000010U) 
                                  | ((IData)(((0x0003ffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                   << 0x00000030U) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                      << 0x00000010U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                        >> 0x00000010U)))) 
                                              >> 0x00000020U)) 
                                     << 0x00000010U));
        vlSelfRef.tl_d2h_o[2U] = (3U & ((IData)(((0x0003ffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                      << 0x00000030U) 
                                                     | (((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                         << 0x00000010U) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                           >> 0x00000010U)))) 
                                                 >> 0x00000020U)) 
                                        >> 0x00000010U));
    }
    if (vlSelfRef.__PVT__block_cmd) {
        vlSelfRef.tl_d2h_o[0U] = (0xfffffffeU & vlSelfRef.tl_d2h_o[0U]);
        vlSelfRef.__PVT__tl_h2d_int[0U][3U] = (0x00000fffU 
                                               & vlSelfRef.__PVT__tl_h2d_int
                                               [0U][3U]);
        vlSelfRef.__PVT__tl_h2d_error[3U] = (0x00000fffU 
                                             & vlSelfRef.__PVT__tl_h2d_error[3U]);
    }
    vlSelfRef.__PVT__a_ack = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                              & vlSelfRef.tl_d2h_o[0U]);
    vlSelfRef.__PVT__d_ack = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
                              & (vlSelfRef.tl_d2h_o[2U] 
                                 >> 1U));
}

void Vsim_tlul_lc_gate___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate__1(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_221[0U] 
        = ((0xfffffffeU & vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U]) 
           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1699));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_221[1U] 
        = ((1U & vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U]) 
           | (0xfffffffeU & vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_221[2U] 
        = ((1U & vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U]) 
           | (0xfffffffeU & vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_221[3U] 
        = ((1U & vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U]) 
           | (0x00001ffeU & vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U]));
}

void Vsim_tlul_lc_gate___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate__0(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_222[0U] 
        = (IData)((0x0fffffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.__VdfgRegularize_h6e95ff9d_0_221[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.__VdfgRegularize_h6e95ff9d_0_221[0U])))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_222[1U] 
        = (((IData)((0x00007fffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) 
                                                    >> 0x0000001eU))))) 
            << 0x0000001eU) | (IData)(((0x0fffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_221[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.__VdfgRegularize_h6e95ff9d_0_221[0U])))) 
                                       >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_222[2U] 
        = (((IData)((0x00007fffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) 
                                                    >> 0x0000001eU))))) 
            >> 2U) | ((IData)(((0x00007fffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U])) 
                                    << 0x00000022U) 
                                   | (((QData)((IData)(
                                                       vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U])) 
                                       << 2U) | ((QData)((IData)(
                                                                 vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) 
                                                 >> 0x0000001eU)))) 
                               >> 0x00000020U)) << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_222[3U] 
        = ((IData)(((0x00007fffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) 
                                                    >> 0x0000001eU)))) 
                    >> 0x00000020U)) >> 2U);
}

void Vsim_tlul_lc_gate___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate__1(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = ((0xffff0000U & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U]) 
           | (((((2U & (VL_REDXOR_32((0x10U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                        << 1U)) | (1U & (~ VL_REDXOR_32(
                                                        (8U 
                                                         & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                << 0x0000000eU) | (((2U & (VL_REDXOR_32(
                                                        (4U 
                                                         & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                           << 1U)) 
                                    | (1U & (~ VL_REDXOR_32(
                                                            (0x22U 
                                                             & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                   << 0x0000000cU)) 
              | ((0x00000800U & (VL_REDXOR_32((0x21U 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                 << 0x0000000bU)) | 
                 ((0x00000400U & ((~ VL_REDXOR_32((0x1fU 
                                                   & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp)))) 
                                  << 0x0000000aU)) 
                  | ((0x00000200U & (VL_REDXOR_8(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                     << 9U)) | (0x000001ffU 
                                                & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT____VdfgRegularize_hb672d1f3_0_1[0U]))))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = ((0x0000ffffU & vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U]) 
           | ((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U])) 
                                                 << 0x00000030U) 
                                                | (((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U])) 
                                                    << 0x00000010U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U])) 
                                                      >> 0x00000010U))))) 
              << 0x00000010U));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.__PVT__tl_d2h_int[2U][0U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U];
    vlSelfRef.__PVT__tl_d2h_int[2U][1U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U];
    vlSelfRef.__PVT__tl_d2h_int[2U][2U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U];
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[1U][0U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U];
    vlSelfRef.__PVT__tl_d2h_int[1U][1U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U];
    vlSelfRef.__PVT__tl_d2h_int[1U][2U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U];
    vlSelfRef.__PVT__tl_d2h_int[0U][0U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[0U][1U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
    vlSelfRef.__PVT__tl_d2h_int[0U][2U] = (vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
                                           & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i))));
}

void Vsim_tlul_lc_gate___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate__2(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1699 = (1U 
                                                   & (vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                      | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_313)));
}

void Vsim_tlul_lc_gate___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate__3(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tl_h2d_int[0U][0U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__u_devicefifo__DOT__tl_h_i[0U];
    vlSelfRef.__PVT__tl_h2d_int[0U][1U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__u_devicefifo__DOT__tl_h_i[1U];
    vlSelfRef.__PVT__tl_h2d_int[0U][2U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__u_devicefifo__DOT__tl_h_i[2U];
    vlSelfRef.__PVT__tl_h2d_int[0U][3U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__u_devicefifo__DOT__tl_h_i[3U];
    vlSelfRef.tl_d2h_o[0U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][0U];
    vlSelfRef.tl_d2h_o[1U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][1U];
    vlSelfRef.tl_d2h_o[2U] = vlSelfRef.__PVT__tl_d2h_int
        [0U][2U];
    vlSelfRef.__PVT__tl_h2d_error[0U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[1U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[2U] = 0U;
    vlSelfRef.__PVT__tl_h2d_error[3U] = 0U;
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__70__val 
                    = vlSelfRef.__PVT__err_en;
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__70__Vfuncout 
                    = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__70__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__70__Vfuncout))) {
        vlSelfRef.__PVT__tl_h2d_error[0U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__u_devicefifo__DOT__tl_h_i[0U];
        vlSelfRef.__PVT__tl_h2d_error[1U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__u_devicefifo__DOT__tl_h_i[1U];
        vlSelfRef.__PVT__tl_h2d_error[2U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__u_devicefifo__DOT__tl_h_i[2U];
        vlSelfRef.__PVT__tl_h2d_error[3U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__u_devicefifo__DOT__tl_h_i[3U];
        vlSelfRef.tl_d2h_o[0U] = ((0xffff0000U & vlSelfRef.tl_d2h_o[0U]) 
                                  | (((((((2U & (VL_REDXOR_32(
                                                              (0x10U 
                                                               & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   VL_REDXOR_32(
                                                                (8U 
                                                                 & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                         << 6U) | (
                                                   ((2U 
                                                     & (VL_REDXOR_32(
                                                                     (4U 
                                                                      & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ 
                                                          VL_REDXOR_32(
                                                                       (0x22U 
                                                                        & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                   << 4U)) 
                                       | ((((2U & (
                                                   VL_REDXOR_32(
                                                                (0x21U 
                                                                 & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ VL_REDXOR_32(
                                                               (0x1fU 
                                                                & (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                           << 2U) | 
                                          ((2U & (VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_32(
                                                           (0x98505586U 
                                                            & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                << 0x00000010U) 
                                                               | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                  >> 0x00000010U)))))))) 
                                      << 8U) | ((((
                                                   (2U 
                                                    & ((~ 
                                                        VL_REDXOR_32(
                                                                     (0x2dcc624cU 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U))))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & VL_REDXOR_32(
                                                                     (0xc2c1323bU 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U)))))) 
                                                  << 6U) 
                                                 | (((2U 
                                                      & ((~ 
                                                          VL_REDXOR_32(
                                                                       (0x31234ed1U 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U))))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_32(
                                                                       (0x413d89aaU 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U)))))) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & ((~ 
                                                        VL_REDXOR_32(
                                                                     (0xdeba8050U 
                                                                      & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                          << 0x00000010U) 
                                                                         | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                            >> 0x00000010U))))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_32(
                                                                       (0x2606bd25U 
                                                                        & ((vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
                                                                            << 0x00000010U) 
                                                                           | (vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
                                                                              >> 0x00000010U)))) 
                                                          << 2U)) 
                                                      | (3U 
                                                         & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]))))));
        vlSelfRef.tl_d2h_o[0U] = ((0x0000ffffU & vlSelfRef.tl_d2h_o[0U]) 
                                  | ((IData)((0x0003ffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                  << 0x00000030U) 
                                                 | (((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                     << 0x00000010U) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                       >> 0x00000010U))))) 
                                     << 0x00000010U));
        vlSelfRef.tl_d2h_o[1U] = (((IData)((0x0003ffffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                << 0x00000030U) 
                                               | (((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                   << 0x00000010U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                     >> 0x00000010U))))) 
                                   >> 0x00000010U) 
                                  | ((IData)(((0x0003ffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                   << 0x00000030U) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                      << 0x00000010U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                        >> 0x00000010U)))) 
                                              >> 0x00000020U)) 
                                     << 0x00000010U));
        vlSelfRef.tl_d2h_o[2U] = (3U & ((IData)(((0x0003ffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U])) 
                                                      << 0x00000030U) 
                                                     | (((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U])) 
                                                         << 0x00000010U) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U])) 
                                                           >> 0x00000010U)))) 
                                                 >> 0x00000020U)) 
                                        >> 0x00000010U));
    }
    if (vlSelfRef.__PVT__block_cmd) {
        vlSelfRef.tl_d2h_o[0U] = (0xfffffffeU & vlSelfRef.tl_d2h_o[0U]);
        vlSelfRef.__PVT__tl_h2d_int[0U][3U] = (0x00000fffU 
                                               & vlSelfRef.__PVT__tl_h2d_int
                                               [0U][3U]);
        vlSelfRef.__PVT__tl_h2d_error[3U] = (0x00000fffU 
                                             & vlSelfRef.__PVT__tl_h2d_error[3U]);
    }
    vlSelfRef.__PVT__a_ack = ((0U != (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i)) 
                              & vlSelfRef.tl_d2h_o[0U]);
    if ((1U == (7U & ((vlSelfRef.tl_d2h_o[2U] << 2U) 
                      | (vlSelfRef.tl_d2h_o[1U] >> 0x0000001eU))))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_354 
            = ((vlSelfRef.tl_d2h_o[1U] << 0x00000010U) 
               | (vlSelfRef.tl_d2h_o[0U] >> 0x00000010U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_522 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_354;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_517 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_522;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_354 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_522 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_517 = 0U;
    }
}

void Vsim_tlul_lc_gate___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate__4(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_ack = ((0U != (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__dfifo_rspready)) 
                              & (vlSelfRef.tl_d2h_o[2U] 
                                 >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1294[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____VdfgRegularize_he8dc8671_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.tl_d2h_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1294[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____VdfgRegularize_he8dc8671_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.tl_d2h_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____VdfgRegularize_he8dc8671_0_3 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.tl_d2h_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1294[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____VdfgRegularize_he8dc8671_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.tl_d2h_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1292[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____VdfgRegularize_he8dc8671_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.tl_d2h_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1292[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____VdfgRegularize_he8dc8671_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.tl_d2h_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____VdfgRegularize_he8dc8671_0_3 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.tl_d2h_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1292[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____VdfgRegularize_he8dc8671_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.tl_d2h_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1293[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____VdfgRegularize_he8dc8671_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.tl_d2h_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1293[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____VdfgRegularize_he8dc8671_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.tl_d2h_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____VdfgRegularize_he8dc8671_0_3 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.tl_d2h_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1293[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____VdfgRegularize_he8dc8671_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.tl_d2h_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate__0(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__76__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__76__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__76__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__76__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__76__payload;
    __Vfunc_extract_d2h_rsp_intg__76__payload = 0;
    CData/*1:0*/ __Vdly__outstanding_txn;
    __Vdly__outstanding_txn = 0;
    // Body
    __Vdly__outstanding_txn = vlSelfRef.__PVT__outstanding_txn;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__a_ack) & (~ (IData)(vlSelfRef.__PVT__d_ack)))) {
            __Vdly__outstanding_txn = (3U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__outstanding_txn)));
        } else if (((IData)(vlSelfRef.__PVT__d_ack) 
                    & (~ (IData)(vlSelfRef.__PVT__a_ack)))) {
            __Vdly__outstanding_txn = (3U & ((IData)(vlSelfRef.__PVT__outstanding_txn) 
                                             - (IData)(1U)));
        }
        vlSelfRef.__PVT__u_err_en_sync__DOT__gen_no_flops__DOT__unused_logic 
            = vlSelfRef.__PVT__err_en;
        if (((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending) 
             & vlSelfRef.__PVT__tl_h2d_error[0U])) {
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending = 0U;
        } else if ((IData)(((vlSelfRef.__PVT__tl_h2d_error[3U] 
                             >> 0x0000000cU) & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]))) {
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending = 1U;
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source 
                = (0x000000ffU & ((vlSelfRef.__PVT__tl_h2d_error[3U] 
                                   << 4U) | (vlSelfRef.__PVT__tl_h2d_error[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode 
                = (7U & (vlSelfRef.__PVT__tl_h2d_error[3U] 
                         >> 9U));
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size 
                = (3U & (vlSelfRef.__PVT__tl_h2d_error[3U] 
                         >> 4U));
            vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type 
                = (0x0000000fU & (vlSelfRef.__PVT__tl_h2d_error[0U] 
                                  >> 0x0000000fU));
        }
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__state_d;
    } else {
        __Vdly__outstanding_txn = 0U;
        vlSelfRef.__PVT__u_err_en_sync__DOT__gen_no_flops__DOT__unused_logic = 0x0aU;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode = 4U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size = 0U;
        vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type = 9U;
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw = 0x00baU;
    }
    vlSelfRef.__PVT__outstanding_txn = __Vdly__outstanding_txn;
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
        = ((0xfe00ffffU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source) 
                             << 0x00000011U)));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
        = ((0x01ffffffU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U]) 
           | (0xfe000000U & ((((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                                << 0x00000019U))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((0x01ffffffU & (((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                                      ? 1U : 0U) >> 2U)) 
                    | ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                       >> 7U))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__75__val 
                        = vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__75__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__75__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__75__Vfuncout))
                      ? 0U : 0xffffffffU));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    __Vfunc_extract_d2h_rsp_intg__76__tl[0U] = vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U];
    __Vfunc_extract_d2h_rsp_intg__76__tl[1U] = vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U];
    __Vfunc_extract_d2h_rsp_intg__76__tl[2U] = vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U];
    __Vfunc_extract_d2h_rsp_intg__76__payload = ((0x00000038U 
                                                  & ((__Vfunc_extract_d2h_rsp_intg__76__tl[2U] 
                                                      << 5U) 
                                                     | (0x00000018U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__76__tl[1U] 
                                                           >> 0x0000001bU)))) 
                                                 | ((6U 
                                                     & (__Vfunc_extract_d2h_rsp_intg__76__tl[1U] 
                                                        >> 0x00000018U)) 
                                                    | (1U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__76__tl[0U] 
                                                          >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__76__Vfuncout = __Vfunc_extract_d2h_rsp_intg__76__payload;
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__76__Vfuncout;
}

void Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate__1(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__71__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__71__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__71__val;
    __Vfunc_lc_tx_test_false_strict__71__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__72__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__72__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__72__val;
    __Vfunc_lc_tx_test_false_strict__72__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__73__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__73__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__73__val;
    __Vfunc_lc_tx_test_false_strict__73__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_false_strict__74__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__74__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_false_strict__74__val;
    __Vfunc_lc_tx_test_false_strict__74__val = 0;
    // Body
    vlSelfRef.__PVT__block_cmd = 0U;
    vlSelfRef.__PVT__state_d = vlSelfRef.__PVT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__err_en = 0x0aU;
    vlSelfRef.err_o = 0U;
    vlSelfRef.flush_ack_o = 0U;
    vlSelfRef.resp_pending_o = 0U;
    if ((0x0121U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__66__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__lc_tlul_gate_en;
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__66__Vfuncout 
                        = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__66__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__66__Vfuncout))) {
            vlSelfRef.__PVT__state_d = 0x00e7U;
        }
        if ((0U != (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.resp_pending_o = 1U;
        }
    } else if ((0x00e7U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__block_cmd = 1U;
        if ((0U == (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.__PVT__state_d = (([&]() {
                        vlSelfRef.__Vfunc_lc_tx_test_false_loose__67__val 
                            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__lc_tlul_gate_en;
                        vlSelfRef.__Vfunc_lc_tx_test_false_loose__67__Vfuncout 
                            = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__67__val));
                    }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__67__Vfuncout))
                                         ? 0x00baU : 0x004cU);
        } else {
            vlSelfRef.resp_pending_o = 1U;
        }
    } else if ((0x004cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__block_cmd = 1U;
        vlSelfRef.flush_ack_o = 1U;
        vlSelfRef.__PVT__state_d = (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__68__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__lc_tlul_gate_en;
                    vlSelfRef.__Vfunc_lc_tx_test_false_loose__68__Vfuncout 
                        = (5U != (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__68__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_loose__68__Vfuncout))
                                     ? 0x00baU : 0x0121U);
    } else if ((0x00baU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__err_en = 5U;
        if (([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_true_strict__69__val 
                        = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__lc_tlul_gate_en;
                    vlSelfRef.__Vfunc_lc_tx_test_true_strict__69__Vfuncout 
                        = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__69__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__69__Vfuncout))) {
            vlSelfRef.__PVT__state_d = 0x0116U;
        }
    } else if ((0x0116U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__err_en = 5U;
        vlSelfRef.__PVT__block_cmd = 1U;
        if ((0U == (IData)(vlSelfRef.__PVT__outstanding_txn))) {
            vlSelfRef.__PVT__state_d = 0x0121U;
        }
    } else {
        vlSelfRef.err_o = 1U;
        vlSelfRef.__PVT__err_en = 5U;
    }
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x0116U 
                                              == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                             << 4U) 
                                            | (((0x00baU 
                                                 == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                                << 3U) 
                                               | ((0x004cU 
                                                   == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                                  << 2U))) 
                                           | (((0x00e7U 
                                                == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                               << 1U) 
                                              | (0x0121U 
                                                 == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))))))) {
        if ((0U != ((((0x0116U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                      << 4U) | (((0x00baU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                 << 3U) | ((0x004cU 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                           << 2U))) 
                    | (((0x00e7U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                        << 1U) | (0x0121U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tlul_lc_gate.sv:179: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sram_ctrl_main.u_tlul_lc_gate: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/tlul_lc_gate.sv", 179, "");
            }
        }
    }
    __Vfunc_lc_tx_test_false_strict__73__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__73__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__73__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i 
        = __Vfunc_lc_tx_test_false_strict__73__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__71__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__71__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__71__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i 
        = __Vfunc_lc_tx_test_false_strict__71__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__72__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__72__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__72__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i 
        = __Vfunc_lc_tx_test_false_strict__72__Vfuncout;
    __Vfunc_lc_tx_test_false_strict__74__val = vlSelfRef.__PVT__err_en;
    __Vfunc_lc_tx_test_false_strict__74__Vfuncout = 
        (0x0aU == (IData)(__Vfunc_lc_tx_test_false_strict__74__val));
    vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i 
        = __Vfunc_lc_tx_test_false_strict__74__Vfuncout;
}
