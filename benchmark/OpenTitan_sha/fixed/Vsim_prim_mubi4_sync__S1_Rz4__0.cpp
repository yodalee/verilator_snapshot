// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_mubi4_sync__S1_Rz4___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_jitter_en_sync__0(Vsim_prim_mubi4_sync__S1_Rz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__S1_Rz4___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_jitter_en_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clk_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__u_clk_byp_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__clk_o) 
                       | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__clk_o));
}

void Vsim_prim_mubi4_sync__S1_Rz4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_jitter_en_sync__0(Vsim_prim_mubi4_sync__S1_Rz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__S1_Rz4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_jitter_en_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rst_sys_dasrt.q_o) {
        vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q 
            = vlSelfRef.__PVT__gen_flops__DOT__mubi_sync;
        vlSelfRef.__PVT__gen_flops__DOT__mubi_sync 
            = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = (1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT____Vcellout__u_jitter_enable__q));
    } else {
        vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q = 9U;
        vlSelfRef.__PVT__gen_flops__DOT__mubi_sync = 9U;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 9U;
    }
    vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
           ^ (IData)(vlSelfRef.__PVT__gen_flops__DOT__mubi_sync));
    vlSelfRef.mubi_o = ((((IData)(((0U != (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                   | ((IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
                                      >> 3U))) << 3U) 
                         | (4U & (((~ (0U != (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                                   << 2U) & (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q)))) 
                        | ((2U & (((~ (0U != (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                                   << 1U) & (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q))) 
                           | (1U & ((0U != (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                    | (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q)))));
}

void Vsim_prim_mubi4_sync__S1_Rz4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_byp_req__0(Vsim_prim_mubi4_sync__S1_Rz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__S1_Rz4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_byp_req__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) {
        vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q 
            = vlSelfRef.__PVT__gen_flops__DOT__mubi_sync;
        vlSelfRef.__PVT__gen_flops__DOT__mubi_sync 
            = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clkmgr_byp__DOT__u_io_byp_req__DOT__mubi_int;
    } else {
        vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q = 9U;
        vlSelfRef.__PVT__gen_flops__DOT__mubi_sync = 9U;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 9U;
    }
    vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
           ^ (IData)(vlSelfRef.__PVT__gen_flops__DOT__mubi_sync));
}

void Vsim_prim_mubi4_sync__S1_Rz4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req__0(Vsim_prim_mubi4_sync__S1_Rz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__S1_Rz4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_ni) {
        vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q 
            = vlSelfRef.__PVT__gen_flops__DOT__mubi_sync;
        vlSelfRef.__PVT__gen_flops__DOT__mubi_sync 
            = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__ast_clk_byp_req;
    } else {
        vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q = 9U;
        vlSelfRef.__PVT__gen_flops__DOT__mubi_sync = 9U;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 9U;
    }
    vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
           ^ (IData)(vlSelfRef.__PVT__gen_flops__DOT__mubi_sync));
    vlSelfRef.mubi_o = ((((IData)(((0U != (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                   | ((IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
                                      >> 3U))) << 3U) 
                         | (4U & (((~ (0U != (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                                   << 2U) & (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q)))) 
                        | ((2U & (((~ (0U != (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                                   << 1U) & (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q))) 
                           | (1U & ((0U != (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                    | (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q)))));
}

void Vsim_prim_mubi4_sync__S1_Rz4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req__1(Vsim_prim_mubi4_sync__S1_Rz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__S1_Rz4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__vcc_pok_int) 
                        & ((4U <= (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__cnt)) 
                           & ((8U > (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__cnt)) 
                              | (0x0cU <= (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__cnt)))));
}

void Vsim_prim_mubi4_sync__S1_Rz4___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req__0(Vsim_prim_mubi4_sync__S1_Rz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__S1_Rz4___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clk_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__u_clk_byp_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__clk_o) 
                       | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__clk_o));
}

void Vsim_prim_mubi4_sync__S1_Rz4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_ext_freq_is_96m__0(Vsim_prim_mubi4_sync__S1_Rz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__S1_Rz4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_ext_freq_is_96m__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) {
        vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q 
            = vlSelfRef.__PVT__gen_flops__DOT__mubi_sync;
        vlSelfRef.__PVT__gen_flops__DOT__mubi_sync 
            = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = (1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clkmgr_byp__DOT__u_hi_speed_sel__DOT__mubi_int));
    } else {
        vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q = 9U;
        vlSelfRef.__PVT__gen_flops__DOT__mubi_sync = 9U;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 9U;
    }
    vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
           ^ (IData)(vlSelfRef.__PVT__gen_flops__DOT__mubi_sync));
}

void Vsim_prim_mubi4_sync__S1_Rz4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_step_down_req_sync__0(Vsim_prim_mubi4_sync__S1_Rz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__S1_Rz4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_step_down_req_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_ni) {
        vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q 
            = vlSelfRef.__PVT__gen_flops__DOT__mubi_sync;
        vlSelfRef.__PVT__gen_flops__DOT__mubi_sync 
            = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_48m_sync__DOT__mubi_int;
    } else {
        vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q = 9U;
        vlSelfRef.__PVT__gen_flops__DOT__mubi_sync = 9U;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 9U;
    }
    vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
           ^ (IData)(vlSelfRef.__PVT__gen_flops__DOT__mubi_sync));
    vlSelfRef.mubi_o = ((((IData)(((0U != (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                   | ((IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
                                      >> 3U))) << 3U) 
                         | (4U & (((~ (0U != (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                                   << 2U) & (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q)))) 
                        | ((2U & (((~ (0U != (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                                   << 1U) & (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q))) 
                           | (1U & ((0U != (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                    | (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q)))));
}

void Vsim_prim_mubi4_sync__S1_Rz4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_step_down_req_sync__1(Vsim_prim_mubi4_sync__S1_Rz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__S1_Rz4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_step_down_req_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io.__Vcellinp__u_rst_mux__sel_i) 
                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io__u_rst_sync.q_o));
}

void Vsim_prim_mubi4_sync__S1_Rz4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clkmgr_byp__DOT__u_io_ack_sync__0(Vsim_prim_mubi4_sync__S1_Rz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__S1_Rz4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clkmgr_byp__DOT__u_io_ack_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q 
            = vlSelfRef.__PVT__gen_flops__DOT__mubi_sync;
        vlSelfRef.__PVT__gen_flops__DOT__mubi_sync 
            = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_byp_ack__DOT__mubi_int;
    } else {
        vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q = 9U;
        vlSelfRef.__PVT__gen_flops__DOT__mubi_sync = 9U;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 9U;
    }
    vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
           ^ (IData)(vlSelfRef.__PVT__gen_flops__DOT__mubi_sync));
}

void Vsim_prim_mubi4_sync__S1_Rz4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clkmgr_byp__DOT__u_all_ack_sync__0(Vsim_prim_mubi4_sync__S1_Rz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__S1_Rz4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clkmgr_byp__DOT__u_all_ack_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q 
            = vlSelfRef.__PVT__gen_flops__DOT__mubi_sync;
        vlSelfRef.__PVT__gen_flops__DOT__mubi_sync 
            = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__all_clk_byp_ack;
    } else {
        vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q = 9U;
        vlSelfRef.__PVT__gen_flops__DOT__mubi_sync = 9U;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 9U;
    }
    vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
           ^ (IData)(vlSelfRef.__PVT__gen_flops__DOT__mubi_sync));
    vlSelfRef.mubi_o = ((((IData)(((0U != (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                   | ((IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
                                      >> 3U))) << 3U) 
                         | (4U & (((~ (0U != (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                                   << 2U) & (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q)))) 
                        | ((2U & (((~ (0U != (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                                   << 1U) & (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q))) 
                           | (1U & ((0U != (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                    | (IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q)))));
}
