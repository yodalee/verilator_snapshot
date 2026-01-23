// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_clkmgr_trans__Fz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans(Vsim_clkmgr_trans__Fz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_clkmgr_trans__Fz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__2__Vfuncout;
    __Vfunc_mubi4_test_true_strict__2__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__2__val;
    __Vfunc_mubi4_test_true_strict__2__val = 0;
    // Body
    __Vfunc_mubi4_test_true_strict__2__val = 1U;
    __Vfunc_mubi4_test_true_strict__2__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__2__val));
    vlSelfRef.__Vcellinp__u_cg__test_en_i = __Vfunc_mubi4_test_true_strict__2__Vfuncout;
}

void Vsim_clkmgr_trans__Fz3___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__0(Vsim_clkmgr_trans__Fz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_clkmgr_trans__Fz3___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_sw_test_status_if.clk_i)))) {
        vlSelfRef.__PVT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = ((IData)(vlSelfRef.__PVT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) 
               | (IData)(vlSelfRef.__Vcellinp__u_cg__test_en_i));
    }
}

void Vsim_clkmgr_trans__Fz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__0(Vsim_clkmgr_trans__Fz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_clkmgr_trans__Fz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_false_loose__1__Vfuncout;
    __Vfunc_mubi4_test_false_loose__1__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_false_loose__1__val;
    __Vfunc_mubi4_test_false_loose__1__val = 0;
    // Body
    if (vlSelf->__PVT__u_scanmode_sync->rst_ni) {
        vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q 
            = vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__mubi_sync;
        vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__mubi_sync 
            = vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellout__u_aes__idle_o;
    } else {
        vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q = 9U;
        vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__mubi_sync = 9U;
        vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 9U;
    }
    vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
           ^ (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__mubi_sync));
    vlSelfRef.__PVT__u_idle_sync__DOT__mubi_o = ((((IData)(
                                                           ((0U 
                                                             != (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                                            | ((IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
                                                               >> 3U))) 
                                                   << 3U) 
                                                  | (4U 
                                                     & (((~ 
                                                          (0U 
                                                           != (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                                                         << 2U) 
                                                        & (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q)))) 
                                                 | ((2U 
                                                     & (((~ 
                                                          (0U 
                                                           != (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                                                         << 1U) 
                                                        & (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q))) 
                                                    | (1U 
                                                       & ((0U 
                                                           != (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                                          | (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q)))));
    __Vfunc_mubi4_test_false_loose__1__val = vlSelfRef.__PVT__u_idle_sync__DOT__mubi_o;
    __Vfunc_mubi4_test_false_loose__1__Vfuncout = (6U 
                                                   != (IData)(__Vfunc_mubi4_test_false_loose__1__val));
    vlSelfRef.__Vcellinp__u_idle_cnt__clr_i = __Vfunc_mubi4_test_false_loose__1__Vfuncout;
}

void Vsim_clkmgr_trans__Fz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__1(Vsim_clkmgr_trans__Fz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_clkmgr_trans__Fz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__combined_en_q = ((IData)(vlSelf->__PVT__u_scanmode_sync->rst_ni) 
                                      && (IData)(vlSelfRef.__PVT__u_prim_buf_en__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i));
    if (vlSelf->__PVT__u_scanmode_sync->rst_ni) {
        if (vlSelfRef.__PVT__u_idle_cnt__DOT__err_q) {
            vlSelfRef.__PVT__hold_err = 1U;
        }
    } else {
        vlSelfRef.__PVT__hold_err = 0U;
    }
    vlSelfRef.__PVT__u_idle_cnt__DOT__err_q = ((IData)(vlSelf->__PVT__u_scanmode_sync->rst_ni) 
                                               && (0x0fU 
                                                   != 
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                       + (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))));
    if (vlSelf->__PVT__u_scanmode_sync->rst_ni) {
        vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
            = ((IData)(vlSelfRef.__PVT__u_prim_buf_en__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)
                ? 9U : 6U);
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    } else {
        vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int = 6U;
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0x0fU;
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0U;
    }
    vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i = (
                                                   ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__0__val 
                    = vlSelfRef.__PVT__u_idle_sync__DOT__mubi_o;
                vlSelfRef.__Vfunc_mubi4_test_true_strict__0__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__0__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__0__Vfuncout)) 
                                                   & (0x0aU 
                                                      != (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((0x0aU != (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
           | (IData)(vlSelf->__PVT__u_hint_sync->q_o));
    vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0000001fU & ((IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i)));
    vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0000001fU & ((IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i)));
    if (vlSelfRef.__Vcellinp__u_idle_cnt__clr_i) {
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000000fU;
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000000fU & (((IData)(vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 4U)) ? 0U : (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000000fU & (((IData)(vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i) 
                               & (~ (0x0000000fU == (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                      >> 4U)) ? 0x0fU
                                   : (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_clkmgr_trans__Fz3___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__0(Vsim_clkmgr_trans__Fz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_clkmgr_trans__Fz3___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_buf_en__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_root_ctrl__DOT__u_cg__DOT__i_sync.q_o));
}

void Vsim_clkmgr_trans__Fz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_hmac_trans(Vsim_clkmgr_trans__Fz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_clkmgr_trans__Fz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_hmac_trans\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__5__Vfuncout;
    __Vfunc_mubi4_test_true_strict__5__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__5__val;
    __Vfunc_mubi4_test_true_strict__5__val = 0;
    // Body
    __Vfunc_mubi4_test_true_strict__5__val = 1U;
    __Vfunc_mubi4_test_true_strict__5__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__5__val));
    vlSelfRef.__Vcellinp__u_cg__test_en_i = __Vfunc_mubi4_test_true_strict__5__Vfuncout;
}

void Vsim_clkmgr_trans__Fz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_hmac_trans__0(Vsim_clkmgr_trans__Fz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_clkmgr_trans__Fz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_hmac_trans__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_false_loose__4__Vfuncout;
    __Vfunc_mubi4_test_false_loose__4__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_false_loose__4__val;
    __Vfunc_mubi4_test_false_loose__4__val = 0;
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync.rst_ni) {
        vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q 
            = vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__mubi_sync;
        vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__mubi_sync 
            = vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__idle_q;
    } else {
        vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q = 9U;
        vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__mubi_sync = 9U;
        vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 9U;
    }
    vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
           ^ (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__mubi_sync));
    vlSelfRef.__PVT__u_idle_sync__DOT__mubi_o = ((((IData)(
                                                           ((0U 
                                                             != (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                                            | ((IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
                                                               >> 3U))) 
                                                   << 3U) 
                                                  | (4U 
                                                     & (((~ 
                                                          (0U 
                                                           != (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                                                         << 2U) 
                                                        & (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q)))) 
                                                 | ((2U 
                                                     & (((~ 
                                                          (0U 
                                                           != (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                                                         << 1U) 
                                                        & (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q))) 
                                                    | (1U 
                                                       & ((0U 
                                                           != (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                                          | (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q)))));
    __Vfunc_mubi4_test_false_loose__4__val = vlSelfRef.__PVT__u_idle_sync__DOT__mubi_o;
    __Vfunc_mubi4_test_false_loose__4__Vfuncout = (6U 
                                                   != (IData)(__Vfunc_mubi4_test_false_loose__4__val));
    vlSelfRef.__Vcellinp__u_idle_cnt__clr_i = __Vfunc_mubi4_test_false_loose__4__Vfuncout;
}

void Vsim_clkmgr_trans__Fz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_hmac_trans__1(Vsim_clkmgr_trans__Fz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_clkmgr_trans__Fz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_hmac_trans__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__combined_en_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync.rst_ni) 
                                      && (IData)(vlSelfRef.__PVT__u_prim_buf_en__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync.rst_ni) {
        if (vlSelfRef.__PVT__u_idle_cnt__DOT__err_q) {
            vlSelfRef.__PVT__hold_err = 1U;
        }
    } else {
        vlSelfRef.__PVT__hold_err = 0U;
    }
    vlSelfRef.__PVT__u_idle_cnt__DOT__err_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync.rst_ni) 
                                               && (0x0fU 
                                                   != 
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                       + (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync.rst_ni) {
        vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
            = ((IData)(vlSelfRef.__PVT__u_prim_buf_en__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)
                ? 9U : 6U);
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    } else {
        vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int = 6U;
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0x0fU;
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0U;
    }
    vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i = (
                                                   ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__3__val 
                    = vlSelfRef.__PVT__u_idle_sync__DOT__mubi_o;
                vlSelfRef.__Vfunc_mubi4_test_true_strict__3__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__3__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__3__Vfuncout)) 
                                                   & (0x0aU 
                                                      != (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((0x0aU != (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
           | (IData)(vlSelf->__PVT__u_hint_sync->q_o));
    vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0000001fU & ((IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i)));
    vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0000001fU & ((IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i)));
    if (vlSelfRef.__Vcellinp__u_idle_cnt__clr_i) {
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000000fU;
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000000fU & (((IData)(vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 4U)) ? 0U : (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000000fU & (((IData)(vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i) 
                               & (~ (0x0000000fU == (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                      >> 4U)) ? 0x0fU
                                   : (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_clkmgr_trans__Fz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_otbn_trans(Vsim_clkmgr_trans__Fz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_clkmgr_trans__Fz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_otbn_trans\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__8__Vfuncout;
    __Vfunc_mubi4_test_true_strict__8__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__8__val;
    __Vfunc_mubi4_test_true_strict__8__val = 0;
    // Body
    __Vfunc_mubi4_test_true_strict__8__val = 1U;
    __Vfunc_mubi4_test_true_strict__8__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__8__val));
    vlSelfRef.__Vcellinp__u_cg__test_en_i = __Vfunc_mubi4_test_true_strict__8__Vfuncout;
}

void Vsim_clkmgr_trans__Fz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_otbn_trans__0(Vsim_clkmgr_trans__Fz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_clkmgr_trans__Fz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_otbn_trans__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_false_loose__7__Vfuncout;
    __Vfunc_mubi4_test_false_loose__7__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_false_loose__7__val;
    __Vfunc_mubi4_test_false_loose__7__val = 0;
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync.rst_ni) {
        vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q 
            = vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__mubi_sync;
        vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__mubi_sync 
            = vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_mubi4_sender__DOT__mubi_int;
    } else {
        vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q = 9U;
        vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__mubi_sync = 9U;
        vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 9U;
    }
    vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
           ^ (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__mubi_sync));
    vlSelfRef.__PVT__u_idle_sync__DOT__mubi_o = ((((IData)(
                                                           ((0U 
                                                             != (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                                            | ((IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
                                                               >> 3U))) 
                                                   << 3U) 
                                                  | (4U 
                                                     & (((~ 
                                                          (0U 
                                                           != (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                                                         << 2U) 
                                                        & (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q)))) 
                                                 | ((2U 
                                                     & (((~ 
                                                          (0U 
                                                           != (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                                                         << 1U) 
                                                        & (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q))) 
                                                    | (1U 
                                                       & ((0U 
                                                           != (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                                          | (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q)))));
    __Vfunc_mubi4_test_false_loose__7__val = vlSelfRef.__PVT__u_idle_sync__DOT__mubi_o;
    __Vfunc_mubi4_test_false_loose__7__Vfuncout = (6U 
                                                   != (IData)(__Vfunc_mubi4_test_false_loose__7__val));
    vlSelfRef.__Vcellinp__u_idle_cnt__clr_i = __Vfunc_mubi4_test_false_loose__7__Vfuncout;
}

void Vsim_clkmgr_trans__Fz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_otbn_trans__1(Vsim_clkmgr_trans__Fz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_clkmgr_trans__Fz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_otbn_trans__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__combined_en_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync.rst_ni) 
                                      && (IData)(vlSelfRef.__PVT__u_prim_buf_en__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync.rst_ni) {
        if (vlSelfRef.__PVT__u_idle_cnt__DOT__err_q) {
            vlSelfRef.__PVT__hold_err = 1U;
        }
    } else {
        vlSelfRef.__PVT__hold_err = 0U;
    }
    vlSelfRef.__PVT__u_idle_cnt__DOT__err_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync.rst_ni) 
                                               && (0x0fU 
                                                   != 
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                       + (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync.rst_ni) {
        vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
            = ((IData)(vlSelfRef.__PVT__u_prim_buf_en__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)
                ? 9U : 6U);
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    } else {
        vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int = 6U;
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0x0fU;
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0U;
    }
    vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i = (
                                                   ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__6__val 
                    = vlSelfRef.__PVT__u_idle_sync__DOT__mubi_o;
                vlSelfRef.__Vfunc_mubi4_test_true_strict__6__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__6__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__6__Vfuncout)) 
                                                   & (0x0aU 
                                                      != (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((0x0aU != (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
           | (IData)(vlSelf->__PVT__u_hint_sync->q_o));
    vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0000001fU & ((IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i)));
    vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0000001fU & ((IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i)));
    if (vlSelfRef.__Vcellinp__u_idle_cnt__clr_i) {
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000000fU;
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000000fU & (((IData)(vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 4U)) ? 0U : (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000000fU & (((IData)(vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i) 
                               & (~ (0x0000000fU == (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                      >> 4U)) ? 0x0fU
                                   : (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}
