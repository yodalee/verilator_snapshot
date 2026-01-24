// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_count__W10___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reseed_ctrl__DOT__u_reseed_cnt__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reseed_ctrl__DOT__u_reseed_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reseed_ctrl__DOT__cnt_en) 
                           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_lfsr__DOT__lfsr_en_i));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSelfRef.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reseed_ctrl__DOT__u_reseed_cnt__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reseed_ctrl__DOT__u_reseed_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clr_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_lfsr__DOT__seed_en_i) 
                       & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reseed_ctrl__DOT__edn_req));
    vlSelfRef.__PVT__err_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                              && (0x0000ffffU != (0x0001ffffU 
                                                  & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                     + (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0xffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0U;
    }
}

void Vsim_prim_count__W10___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnt_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_rep_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnt_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_rep_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__err_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                              && (0x0000ffffU != (0x0001ffffU 
                                                  & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                     + (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0xffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0U;
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnt_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_rep_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnt_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_rep_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                           & ((1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnt_ht__DOT__prev_sample_q)) 
                              == (1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o))));
    vlSelfRef.set_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) 
                       | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnt_ht__DOT__samples_no_match_pulse__BRA__0__KET__));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSelfRef.set_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000fffeU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 1U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnt_ht__DOT__gen_cntrs__BRA__1__KET____DOT__u_prim_count_rep_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnt_ht__DOT__gen_cntrs__BRA__1__KET____DOT__u_prim_count_rep_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                           & ((1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnt_ht__DOT__prev_sample_q) 
                                     >> 1U)) == (1U 
                                                 & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o) 
                                                    >> 1U))));
    vlSelfRef.set_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) 
                       | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnt_ht__DOT__samples_no_match_pulse__BRA__1__KET__));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSelfRef.set_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000fffeU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 1U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnt_ht__DOT__gen_cntrs__BRA__2__KET____DOT__u_prim_count_rep_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnt_ht__DOT__gen_cntrs__BRA__2__KET____DOT__u_prim_count_rep_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                           & ((1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnt_ht__DOT__prev_sample_q) 
                                     >> 2U)) == (1U 
                                                 & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o) 
                                                    >> 2U))));
    vlSelfRef.set_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) 
                       | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnt_ht__DOT__samples_no_match_pulse__BRA__2__KET__));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSelfRef.set_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000fffeU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 1U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnt_ht__DOT__gen_cntrs__BRA__3__KET____DOT__u_prim_count_rep_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnt_ht__DOT__gen_cntrs__BRA__3__KET____DOT__u_prim_count_rep_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                           & ((1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnt_ht__DOT__prev_sample_q) 
                                     >> 3U)) == (1U 
                                                 & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o) 
                                                    >> 3U))));
    vlSelfRef.set_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) 
                       | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnt_ht__DOT__samples_no_match_pulse__BRA__3__KET__));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSelfRef.set_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000fffeU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 1U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnts_ht__DOT__u_prim_count_rep_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnts_ht__DOT__u_prim_count_rep_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.set_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) 
                       | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                          & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnts_ht__DOT__prev_sample_q) 
                             != (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o))));
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                           & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o) 
                              == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_repcnts_ht__DOT__prev_sample_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSelfRef.set_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000fffeU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 1U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__err_q = ((IData)(vlSelfRef.rst_ni) 
                              && (0x0000ffffU != (0x0001ffffU 
                                                  & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                     + (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))));
    if (vlSelfRef.rst_ni) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0xffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0U;
    }
}

void Vsim_prim_count__W10___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt__1(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clr_i = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_count_window_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
                       >= vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__health_test_window_scaled);
    vlSelfRef.incr_en_i = (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__rng_bit_enable_pfe)
                                  ? ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                     & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_main_sm__DOT__enable_i))
                                  : ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_packer_fifo_postht__DOT__clr_i)) 
                                     & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__gen_normal_fifo__DOT__fifo_empty)))));
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.incr_en_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
            = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o))));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
            = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                              + (1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o))));
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
            = (0x0001ffffU & (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
            = (0x0001ffffU & (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    }
    if (vlSelfRef.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt__2(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc.__Vcellinp__u_rst_mux__sel_i) 
                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc__u_rst_sync.q_o));
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__1__KET____DOT__u_prim_count_test_cnt__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__1__KET____DOT__u_prim_count_test_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
            = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o) 
                                       >> 1U))));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
            = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                              + (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o) 
                                       >> 1U))));
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
            = (0x0001ffffU & (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
            = (0x0001ffffU & (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    }
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__2__KET____DOT__u_prim_count_test_cnt__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__2__KET____DOT__u_prim_count_test_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
            = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o) 
                                       >> 2U))));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
            = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                              + (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o) 
                                       >> 2U))));
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
            = (0x0001ffffU & (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
            = (0x0001ffffU & (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    }
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__3__KET____DOT__u_prim_count_test_cnt__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__3__KET____DOT__u_prim_count_test_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
            = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o) 
                                       >> 3U))));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
            = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                              + (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o) 
                                       >> 3U))));
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
            = (0x0001ffffU & (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
            = (0x0001ffffU & (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    }
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__0__KET____DOT__u_prim_count_bin_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__0__KET____DOT__u_prim_count_bin_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                           & (0U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o)));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__1__KET____DOT__u_prim_count_bin_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__1__KET____DOT__u_prim_count_bin_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                           & (1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o)));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__2__KET____DOT__u_prim_count_bin_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__2__KET____DOT__u_prim_count_bin_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                           & (2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o)));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__3__KET____DOT__u_prim_count_bin_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__3__KET____DOT__u_prim_count_bin_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                           & (3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o)));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__4__KET____DOT__u_prim_count_bin_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__4__KET____DOT__u_prim_count_bin_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                           & (4U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o)));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__5__KET____DOT__u_prim_count_bin_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__5__KET____DOT__u_prim_count_bin_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                           & (5U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o)));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__6__KET____DOT__u_prim_count_bin_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__6__KET____DOT__u_prim_count_bin_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                           & (6U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o)));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__7__KET____DOT__u_prim_count_bin_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__7__KET____DOT__u_prim_count_bin_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                           & (7U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o)));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__8__KET____DOT__u_prim_count_bin_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__8__KET____DOT__u_prim_count_bin_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                           & (8U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o)));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__9__KET____DOT__u_prim_count_bin_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__9__KET____DOT__u_prim_count_bin_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                           & (9U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o)));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__10__KET____DOT__u_prim_count_bin_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__10__KET____DOT__u_prim_count_bin_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                           & (0x0aU == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o)));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__11__KET____DOT__u_prim_count_bin_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__11__KET____DOT__u_prim_count_bin_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                           & (0x0bU == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o)));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__12__KET____DOT__u_prim_count_bin_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__12__KET____DOT__u_prim_count_bin_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                           & (0x0cU == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o)));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__13__KET____DOT__u_prim_count_bin_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__13__KET____DOT__u_prim_count_bin_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                           & (0x0dU == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o)));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__14__KET____DOT__u_prim_count_bin_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__14__KET____DOT__u_prim_count_bin_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                           & (0x0eU == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o)));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__15__KET____DOT__u_prim_count_bin_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_bucket_ht__DOT__gen_symbol_match__BRA__15__KET____DOT__u_prim_count_bin_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.incr_en_i) 
                           & (0x0fU == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o)));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_markov_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_pair_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_markov_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_pair_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_markov_ht__DOT____VdfgRegularize_h4e0b268d_0_2) 
                           & ((1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o))) 
                              == (1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_markov_ht__DOT__prev_sample_q))));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_markov_ht__DOT__gen_cntrs__BRA__1__KET____DOT__u_prim_count_pair_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_markov_ht__DOT__gen_cntrs__BRA__1__KET____DOT__u_prim_count_pair_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_markov_ht__DOT____VdfgRegularize_h4e0b268d_0_2) 
                           & ((1U & (~ ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o) 
                                        >> 1U))) == 
                              (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_markov_ht__DOT__prev_sample_q) 
                                     >> 1U))));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_markov_ht__DOT__gen_cntrs__BRA__2__KET____DOT__u_prim_count_pair_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_markov_ht__DOT__gen_cntrs__BRA__2__KET____DOT__u_prim_count_pair_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_markov_ht__DOT____VdfgRegularize_h4e0b268d_0_2) 
                           & ((1U & (~ ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o) 
                                        >> 2U))) == 
                              (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_markov_ht__DOT__prev_sample_q) 
                                     >> 2U))));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_markov_ht__DOT__gen_cntrs__BRA__3__KET____DOT__u_prim_count_pair_cntr__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_markov_ht__DOT__gen_cntrs__BRA__3__KET____DOT__u_prim_count_pair_cntr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_markov_ht__DOT____VdfgRegularize_h4e0b268d_0_2) 
                           & ((1U & (~ ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__rdata_o) 
                                        >> 3U))) == 
                              (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_markov_ht__DOT__prev_sample_q) 
                                     >> 3U))));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__module_en_pulse_fo) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}

void Vsim_prim_count__W10___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_cntr_reg_any_alert_fails__DOT__u_prim_count_cntr_reg__1(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_cntr_reg_any_alert_fails__DOT__u_prim_count_cntr_reg__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.incr_en_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_cntr_reg_any_alert_fails__DOT__event_i) 
                           & (0U != (0x0000ffffU & 
                                     (~ (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))));
    vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.incr_en_i)
                           ? ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                              - (IData)(1U)) : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0001ffffU & ((IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.incr_en_i)));
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_cntr_reg_adaptp_hi_alert_fails__DOT__u_prim_count_cntr_reg__DOT__clr_i) {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000ffffU;
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0U : vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000ffffU & (((IData)(vlSelfRef.incr_en_i) 
                               & (~ (0x0000ffffU == (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.incr_en_i) 
                                   & (vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                      >> 0x00000010U))
                                   ? 0xffffU : vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                               : (IData)(vlSelfRef.__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
}
