// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_mubi4_sync__S1_Rz4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_jitter_en_sync__0(Vsim_prim_mubi4_sync__S1_Rz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__S1_Rz4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_jitter_en_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_mubi4_sync__S1_Rz4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_byp_req__0(Vsim_prim_mubi4_sync__S1_Rz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__S1_Rz4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_byp_req__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
           ^ (IData)(vlSelfRef.__PVT__gen_flops__DOT__mubi_sync));
}

VL_ATTR_COLD void Vsim_prim_mubi4_sync__S1_Rz4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req__0(Vsim_prim_mubi4_sync__S1_Rz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__S1_Rz4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
           ^ (IData)(vlSelfRef.__PVT__gen_flops__DOT__mubi_sync));
    vlSelfRef.rst_ni = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__vcc_pok_int) 
                        & ((4U <= (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__cnt)) 
                           & ((8U > (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__cnt)) 
                              | (0x0cU <= (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__cnt)))));
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

VL_ATTR_COLD void Vsim_prim_mubi4_sync__S1_Rz4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_step_down_req_sync__0(Vsim_prim_mubi4_sync__S1_Rz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__S1_Rz4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_step_down_req_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
           ^ (IData)(vlSelfRef.__PVT__gen_flops__DOT__mubi_sync));
    vlSelfRef.rst_ni = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io.__Vcellinp__u_rst_mux__sel_i) 
                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io__u_rst_sync.q_o));
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

VL_ATTR_COLD void Vsim_prim_mubi4_sync__S1_Rz4___ctor_var_reset(Vsim_prim_mubi4_sync__S1_Rz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__S1_Rz4___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->mubi_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9457581145832603685ull);
    vlSelf->mubi_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7877937283296971435ull);
    vlSelf->__PVT__gen_flops__DOT__mubi_sync = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7339850125848064099ull);
    vlSelf->__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10363865178685498419ull);
    vlSelf->__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4839573531641071855ull);
    vlSelf->__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4798722155471451169ull);
}
