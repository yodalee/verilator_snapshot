// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_clkmgr_trans__Fz3___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__0(Vsim_clkmgr_trans__Fz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_clkmgr_trans__Fz3___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_false_loose__1__Vfuncout;
    __Vfunc_mubi4_test_false_loose__1__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_false_loose__1__val;
    __Vfunc_mubi4_test_false_loose__1__val = 0;
    // Body
    vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
           ^ (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__mubi_sync));
    vlSelfRef.__PVT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((0x0aU != (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
           | (IData)(vlSelf->__PVT__u_hint_sync->q_o));
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
    vlSelfRef.__PVT__u_prim_buf_en__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_root_ctrl__DOT__u_cg__DOT__i_sync.q_o));
    __Vfunc_mubi4_test_false_loose__1__val = vlSelfRef.__PVT__u_idle_sync__DOT__mubi_o;
    __Vfunc_mubi4_test_false_loose__1__Vfuncout = (6U 
                                                   != (IData)(__Vfunc_mubi4_test_false_loose__1__val));
    vlSelfRef.__Vcellinp__u_idle_cnt__clr_i = __Vfunc_mubi4_test_false_loose__1__Vfuncout;
    vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i = (
                                                   ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__0__val 
                    = vlSelfRef.__PVT__u_idle_sync__DOT__mubi_o;
                vlSelfRef.__Vfunc_mubi4_test_true_strict__0__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__0__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__0__Vfuncout)) 
                                                   & (0x0aU 
                                                      != (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
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

VL_ATTR_COLD void Vsim_clkmgr_trans__Fz3___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_hmac_trans__0(Vsim_clkmgr_trans__Fz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_clkmgr_trans__Fz3___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_hmac_trans__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_false_loose__4__Vfuncout;
    __Vfunc_mubi4_test_false_loose__4__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_false_loose__4__val;
    __Vfunc_mubi4_test_false_loose__4__val = 0;
    // Body
    vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
           ^ (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__mubi_sync));
    vlSelfRef.__PVT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((0x0aU != (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
           | (IData)(vlSelf->__PVT__u_hint_sync->q_o));
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
    vlSelfRef.__PVT__u_prim_buf_en__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_root_ctrl__DOT__u_cg__DOT__i_sync.q_o));
    __Vfunc_mubi4_test_false_loose__4__val = vlSelfRef.__PVT__u_idle_sync__DOT__mubi_o;
    __Vfunc_mubi4_test_false_loose__4__Vfuncout = (6U 
                                                   != (IData)(__Vfunc_mubi4_test_false_loose__4__val));
    vlSelfRef.__Vcellinp__u_idle_cnt__clr_i = __Vfunc_mubi4_test_false_loose__4__Vfuncout;
    vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i = (
                                                   ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__3__val 
                    = vlSelfRef.__PVT__u_idle_sync__DOT__mubi_o;
                vlSelfRef.__Vfunc_mubi4_test_true_strict__3__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__3__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__3__Vfuncout)) 
                                                   & (0x0aU 
                                                      != (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
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

VL_ATTR_COLD void Vsim_clkmgr_trans__Fz3___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_otbn_trans__0(Vsim_clkmgr_trans__Fz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_clkmgr_trans__Fz3___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_otbn_trans__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_false_loose__7__Vfuncout;
    __Vfunc_mubi4_test_false_loose__7__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_false_loose__7__val;
    __Vfunc_mubi4_test_false_loose__7__val = 0;
    // Body
    vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
           ^ (IData)(vlSelfRef.__PVT__u_idle_sync__DOT__gen_flops__DOT__mubi_sync));
    vlSelfRef.__PVT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((0x0aU != (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
           | (IData)(vlSelf->__PVT__u_hint_sync->q_o));
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
    vlSelfRef.__PVT__u_prim_buf_en__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_root_ctrl__DOT__u_cg__DOT__i_sync.q_o));
    __Vfunc_mubi4_test_false_loose__7__val = vlSelfRef.__PVT__u_idle_sync__DOT__mubi_o;
    __Vfunc_mubi4_test_false_loose__7__Vfuncout = (6U 
                                                   != (IData)(__Vfunc_mubi4_test_false_loose__7__val));
    vlSelfRef.__Vcellinp__u_idle_cnt__clr_i = __Vfunc_mubi4_test_false_loose__7__Vfuncout;
    vlSelfRef.__Vcellinp__u_idle_cnt__incr_en_i = (
                                                   ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__6__val 
                    = vlSelfRef.__PVT__u_idle_sync__DOT__mubi_o;
                vlSelfRef.__Vfunc_mubi4_test_true_strict__6__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__6__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__6__Vfuncout)) 
                                                   & (0x0aU 
                                                      != (IData)(vlSelfRef.__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
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

VL_ATTR_COLD void Vsim_clkmgr_trans__Fz3___ctor_var_reset(Vsim_clkmgr_trans__Fz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_clkmgr_trans__Fz3___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->clk_gated_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5895177019369259315ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2395839182665444169ull);
    vlSelf->idle_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16087176907329234729ull);
    vlSelf->sw_hint_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8664808258587899053ull);
    vlSelf->scanmode_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10199737842679129227ull);
    vlSelf->alert_cg_en_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14811864289877475294ull);
    vlSelf->clk_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12426932961961880139ull);
    vlSelf->clk_reg_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14507655861051492978ull);
    vlSelf->rst_reg_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5305195436656992058ull);
    vlSelf->reg_en_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14166018443130480607ull);
    vlSelf->reg_cnt_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5728916189005121615ull);
    vlSelf->__Vcellinp__u_idle_cnt__incr_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 974062993036840766ull);
    vlSelf->__Vcellinp__u_idle_cnt__clr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14086087899678711595ull);
    vlSelf->__PVT__combined_en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1363178466529711249ull);
    vlSelf->__Vcellinp__u_cg__test_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17485287792463026701ull);
    vlSelf->__PVT__hold_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14519044718595877014ull);
    vlSelf->__PVT__u_idle_sync__DOT__mubi_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12306394026944946422ull);
    vlSelf->__PVT__u_idle_sync__DOT__gen_flops__DOT__mubi_sync = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9405449957928270840ull);
    vlSelf->__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4759088074936204451ull);
    vlSelf->__PVT__u_idle_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13455219018195115586ull);
    vlSelf->__PVT__u_idle_sync__DOT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5139872508774277024ull);
    vlSelf->__PVT__u_idle_cnt__DOT__err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16172884113147863285ull);
    vlSelf->__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3005726026385052305ull);
    vlSelf->__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10668791105601260999ull);
    vlSelf->__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10751128261397442087ull);
    vlSelf->__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13694517134690939797ull);
    vlSelf->__PVT__u_idle_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1960295769893693535ull);
    vlSelf->__PVT__u_idle_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4555917826535609872ull);
    vlSelf->__PVT__u_prim_buf_en__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4845087519379704111ull);
    vlSelf->__PVT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16170858676640897532ull);
    vlSelf->__PVT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18205948153995953797ull);
    vlSelf->__PVT__u_prim_mubi4_sender__DOT__mubi_int = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4712372916131756482ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__0__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6372384945362029087ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__0__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10051259335923575018ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__3__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5443767646638904591ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__3__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10412255010806185859ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__6__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13490389477559648229ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__6__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16949656769346261169ull);
}
