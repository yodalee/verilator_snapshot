// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_tlul_lc_gate___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate__0(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate__0\n"); );
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
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__10__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__10__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__10__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__10__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__10__payload;
    __Vfunc_extract_d2h_rsp_intg__10__payload = 0;
    // Body
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
        = ((0x0000ffffU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | (((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                                 << 0x00000019U) | 
                                ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source) 
                                 << 0x00000011U)))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                       ? 1U : 0U) >> 2U) | (((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                                             >> 7U) 
                                            | ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source) 
                                               >> 0x0000000fU)))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__9__val 
                        = vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__9__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__9__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__9__Vfuncout))
                      ? 0U : 0xffffffffU));
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

VL_ATTR_COLD void Vsim_tlul_lc_gate___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate__2(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tl_h2d_int[1U][0U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[0U];
    vlSelfRef.__PVT__tl_h2d_int[1U][1U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[1U];
    vlSelfRef.__PVT__tl_h2d_int[1U][2U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[2U];
    vlSelfRef.__PVT__tl_h2d_int[1U][3U] = vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[3U];
}

VL_ATTR_COLD void Vsim_tlul_lc_gate___stl_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate__0(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___stl_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate__0\n"); );
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
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
        = (vlSelfRef.__PVT__tl_h2d_int[0U][0U] & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
        = (vlSelfRef.__PVT__tl_h2d_int[0U][1U] & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
        = (vlSelfRef.__PVT__tl_h2d_int[0U][2U] & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i))));
    vlSelfRef.__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
        = (vlSelfRef.__PVT__tl_h2d_int[0U][3U] & (- (IData)((IData)(vlSelfRef.__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i))));
}

VL_ATTR_COLD void Vsim_tlul_lc_gate___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__0(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate__0\n"); );
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
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__21__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__21__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__21__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__21__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__21__payload;
    __Vfunc_extract_d2h_rsp_intg__21__payload = 0;
    // Body
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
        = ((0x0000ffffU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | (((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                                 << 0x00000019U) | 
                                ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source) 
                                 << 0x00000011U)))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                       ? 1U : 0U) >> 2U) | (((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                                             >> 7U) 
                                            | ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source) 
                                               >> 0x0000000fU)))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__20__val 
                        = vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__20__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__20__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__20__Vfuncout))
                      ? 0U : 0xffffffffU));
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

VL_ATTR_COLD void Vsim_tlul_lc_gate___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate__0(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__32__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__32__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__32__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__32__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__32__payload;
    __Vfunc_extract_d2h_rsp_intg__32__payload = 0;
    // Body
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
        = ((0x0000ffffU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | (((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                                 << 0x00000019U) | 
                                ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source) 
                                 << 0x00000011U)))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                       ? 1U : 0U) >> 2U) | (((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                                             >> 7U) 
                                            | ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source) 
                                               >> 0x0000000fU)))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__31__val 
                        = vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__31__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__31__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__31__Vfuncout))
                      ? 0U : 0xffffffffU));
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

VL_ATTR_COLD void Vsim_tlul_lc_gate___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate__0(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__43__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__43__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__43__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__43__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__43__payload;
    __Vfunc_extract_d2h_rsp_intg__43__payload = 0;
    // Body
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
        = ((0x0000ffffU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | (((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                                 << 0x00000019U) | 
                                ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source) 
                                 << 0x00000011U)))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                       ? 1U : 0U) >> 2U) | (((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                                             >> 7U) 
                                            | ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source) 
                                               >> 0x0000000fU)))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__42__val 
                        = vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__42__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__42__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__42__Vfuncout))
                      ? 0U : 0xffffffffU));
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
}

VL_ATTR_COLD void Vsim_tlul_lc_gate___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_sba__0(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_sba__0\n"); );
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
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__54__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__54__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__54__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__54__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__54__payload;
    __Vfunc_extract_d2h_rsp_intg__54__payload = 0;
    // Body
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
        = ((0x0000ffffU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | (((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                                 << 0x00000019U) | 
                                ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source) 
                                 << 0x00000011U)))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                       ? 1U : 0U) >> 2U) | (((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                                             >> 7U) 
                                            | ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source) 
                                               >> 0x0000000fU)))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__53__val 
                        = vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__53__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__53__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__53__Vfuncout))
                      ? 0U : 0xffffffffU));
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
    vlSelfRef.__PVT__tl_d2h_int[2U][0U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U];
    vlSelfRef.__PVT__tl_d2h_int[2U][1U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U];
    vlSelfRef.__PVT__tl_d2h_int[2U][2U] = vlSelfRef.__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U];
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

VL_ATTR_COLD void Vsim_tlul_lc_gate___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom__0(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom__0\n"); );
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
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__65__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__65__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__65__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__65__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__65__payload;
    __Vfunc_extract_d2h_rsp_intg__65__payload = 0;
    // Body
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
        = ((0x0000ffffU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | (((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                                 << 0x00000019U) | 
                                ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source) 
                                 << 0x00000011U)))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                       ? 1U : 0U) >> 2U) | (((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                                             >> 7U) 
                                            | ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source) 
                                               >> 0x0000000fU)))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__64__val 
                        = vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__64__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__64__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__64__Vfuncout))
                      ? 0U : 0xffffffffU));
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

VL_ATTR_COLD void Vsim_tlul_lc_gate___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate__0(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate__0\n"); );
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
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__76__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__76__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__76__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__76__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__76__payload;
    __Vfunc_extract_d2h_rsp_intg__76__payload = 0;
    // Body
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U] 
        = ((0x0000ffffU & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | (((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                                 << 0x00000019U) | 
                                ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source) 
                                 << 0x00000011U)))));
    vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((((4U == (IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_opcode))
                       ? 1U : 0U) >> 2U) | (((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_size) 
                                             >> 7U) 
                                            | ((IData)(vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_source) 
                                               >> 0x0000000fU)))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__u_tlul_err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__75__val 
                        = vlSelfRef.__PVT__u_tlul_err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__75__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__75__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__75__Vfuncout))
                      ? 0U : 0xffffffffU));
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

VL_ATTR_COLD void Vsim_tlul_lc_gate___ctor_var_reset(Vsim_tlul_lc_gate* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_lc_gate___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->tl_h2d_i, __VscopeHash, 17134657586906846239ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->tl_d2h_o, __VscopeHash, 5166399586324786120ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->tl_h2d_o, __VscopeHash, 6791538001699473228ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->tl_d2h_i, __VscopeHash, 2509218147298702019ull);
    vlSelf->flush_req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5305117189916920020ull);
    vlSelf->flush_ack_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13400608132213045880ull);
    vlSelf->resp_pending_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11173696640959789558ull);
    vlSelf->lc_en_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16406504534124540799ull);
    vlSelf->err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11052201151567880375ull);
    vlSelf->__PVT__err_en = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8493274839623159940ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(109, vlSelf->__PVT__tl_h2d_int[__Vi0], __VscopeHash, 14548284081572736259ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(66, vlSelf->__PVT__tl_d2h_int[__Vi0], __VscopeHash, 13016832477271862255ull);
    }
    vlSelf->__PVT__state_d = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14154348034863170373ull);
    vlSelf->__PVT__outstanding_txn = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9153396151176482864ull);
    vlSelf->__PVT__a_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5690855132947429504ull);
    vlSelf->__PVT__d_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5506795581426482756ull);
    vlSelf->__PVT__block_cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11105373793472699904ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__PVT__tl_h2d_error, __VscopeHash, 15688326611456456196ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vcellout__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__out_o, __VscopeHash, 1310947479215047771ull);
    vlSelf->__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_h2d__en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11745555442928774522ull);
    vlSelf->__Vcellinp__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16776978054748243748ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o, __VscopeHash, 9587417475002812254ull);
    vlSelf->__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17626013148923362073ull);
    vlSelf->__Vcellinp__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4064574050251773643ull);
    vlSelf->__PVT__u_err_en_sync__DOT__gen_no_flops__DOT__unused_logic = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7806305258198453860ull);
    vlSelf->__PVT__u_state_regs__DOT__state_raw = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7529622373113633306ull);
    vlSelf->__PVT__u_tlul_err_resp__DOT__err_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11870632677539027391ull);
    vlSelf->__PVT__u_tlul_err_resp__DOT__err_source = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4915341338789142225ull);
    vlSelf->__PVT__u_tlul_err_resp__DOT__err_size = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12180807330892826506ull);
    vlSelf->__PVT__u_tlul_err_resp__DOT__err_rsp_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13279403836709137528ull);
    vlSelf->__PVT__u_tlul_err_resp__DOT__err_instr_type = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6788821149343708306ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->__PVT__u_tlul_err_resp__DOT__tl_h_o_int, __VscopeHash, 16199663790309467393ull);
    vlSelf->__PVT__u_tlul_err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6410790051395849533ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->__PVT__gen_lc_gating_muxes__BRA__0__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i, __VscopeHash, 5804080688129388130ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->__PVT__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_d2h__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i, __VscopeHash, 14829220640058208943ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__0__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 186854572705467458ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__0__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9084730928044226215ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__1__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7760916341808473442ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__1__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4484126076835921982ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__2__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14310798293460713929ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__2__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14985192282439748952ull);
    vlSelf->__Vfunc_lc_tx_test_true_strict__3__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 410295633938403194ull);
    vlSelf->__Vfunc_lc_tx_test_true_strict__3__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12682100678785111763ull);
    vlSelf->__Vfunc_lc_tx_test_true_loose__4__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11168686323624074351ull);
    vlSelf->__Vfunc_lc_tx_test_true_loose__4__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3401470308401762766ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__9__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6690006483187658968ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__9__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 59903712678665540ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__11__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3215573908849712726ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__11__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9656518638174586932ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__12__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11272723132616079733ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__12__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15945779433412792119ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__13__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4750094702302263975ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__13__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2881130422830092112ull);
    vlSelf->__Vfunc_lc_tx_test_true_strict__14__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17432702311519011145ull);
    vlSelf->__Vfunc_lc_tx_test_true_strict__14__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14663227652066528222ull);
    vlSelf->__Vfunc_lc_tx_test_true_loose__15__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16438369525090465729ull);
    vlSelf->__Vfunc_lc_tx_test_true_loose__15__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5777703522621116026ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__20__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11729718696273944235ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__20__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4730436960731068038ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__22__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3151542930888570142ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__22__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4950056675187588286ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__23__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12350407221428930856ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__23__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14502782587733443041ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__24__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13461849192946373638ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__24__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18385894996266218372ull);
    vlSelf->__Vfunc_lc_tx_test_true_strict__25__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6934536598604713860ull);
    vlSelf->__Vfunc_lc_tx_test_true_strict__25__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3310727353322213476ull);
    vlSelf->__Vfunc_lc_tx_test_true_loose__26__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12868241547786108445ull);
    vlSelf->__Vfunc_lc_tx_test_true_loose__26__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10249150903731943248ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__31__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2570412785897866234ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__31__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9731750653778895334ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__33__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7441504032162864686ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__33__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11199134406241522933ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__34__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11833405571929991939ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__34__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4290753449571498746ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__35__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12569965372268270331ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__35__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1230338756564769147ull);
    vlSelf->__Vfunc_lc_tx_test_true_strict__36__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8144973976522768249ull);
    vlSelf->__Vfunc_lc_tx_test_true_strict__36__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 241171646472419930ull);
    vlSelf->__Vfunc_lc_tx_test_true_loose__37__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2392671948239025172ull);
    vlSelf->__Vfunc_lc_tx_test_true_loose__37__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1388098107750071255ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__42__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5671330854240746540ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__42__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8826968801556894993ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__44__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10332520800495985129ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__44__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5868432187495639164ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__45__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9670585916133881438ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__45__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5322531570315361954ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__46__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12409266133598059491ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__46__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10755621554445890927ull);
    vlSelf->__Vfunc_lc_tx_test_true_strict__47__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9469461906419927526ull);
    vlSelf->__Vfunc_lc_tx_test_true_strict__47__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6101535687605640956ull);
    vlSelf->__Vfunc_lc_tx_test_true_loose__48__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1173804845559738601ull);
    vlSelf->__Vfunc_lc_tx_test_true_loose__48__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12706954920503583589ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__53__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17730247896573424566ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__53__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5942476556672319190ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__55__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1452119120434233423ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__55__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14276013432977544782ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__56__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10491344645273970041ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__56__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13134994940992641461ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__57__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 93018050442547944ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__57__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13024124328889320020ull);
    vlSelf->__Vfunc_lc_tx_test_true_strict__58__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12757778041388118415ull);
    vlSelf->__Vfunc_lc_tx_test_true_strict__58__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4684209185041634491ull);
    vlSelf->__Vfunc_lc_tx_test_true_loose__59__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8624468856638942294ull);
    vlSelf->__Vfunc_lc_tx_test_true_loose__59__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4676918203524755531ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__64__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16459334744503853365ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__64__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10269554427580715461ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__66__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13091214598213012506ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__66__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12022751412193667090ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__67__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7856645732960822983ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__67__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2860294217291077356ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__68__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4941076192754176924ull);
    vlSelf->__Vfunc_lc_tx_test_false_loose__68__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10458658146081922417ull);
    vlSelf->__Vfunc_lc_tx_test_true_strict__69__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8582176596160812739ull);
    vlSelf->__Vfunc_lc_tx_test_true_strict__69__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2442913363884695412ull);
    vlSelf->__Vfunc_lc_tx_test_true_loose__70__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6692548766045410123ull);
    vlSelf->__Vfunc_lc_tx_test_true_loose__70__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1973903787967398492ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__75__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3644813020997624389ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__75__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13794417705915987961ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__VdfgRegularize_h6e95ff9d_0_40, __VscopeHash, 4189636563077644376ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__VdfgRegularize_h6e95ff9d_0_41, __VscopeHash, 2222120951367673326ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__VdfgRegularize_h6e95ff9d_0_221, __VscopeHash, 2675661009711544870ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__VdfgRegularize_h6e95ff9d_0_222, __VscopeHash, 17525223366543691572ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_354 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6948762143259819834ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_517 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8026593368405743708ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_522 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15623839465201438653ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1292, __VscopeHash, 4928977695978804174ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1293, __VscopeHash, 12488354501852645923ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1294, __VscopeHash, 3088914195137658740ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1699 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15569271436256184067ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1717 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 707264529820142738ull);
}
