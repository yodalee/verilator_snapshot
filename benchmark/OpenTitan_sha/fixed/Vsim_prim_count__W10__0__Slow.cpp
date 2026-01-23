// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_count__W10___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reseed_ctrl__DOT__u_reseed_cnt__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reseed_ctrl__DOT__u_reseed_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clr_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_lfsr__DOT__seed_en_i) 
                       & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reseed_ctrl__DOT__edn_req));
}

VL_ATTR_COLD void Vsim_prim_count__W10___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt__0(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc.__Vcellinp__u_rst_mux__sel_i) 
                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc__u_rst_sync.q_o));
    vlSelfRef.clr_i = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_count_window_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
                       >= vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__health_test_window_scaled);
    vlSelfRef.incr_en_i = (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__rng_bit_enable_pfe)
                                  ? ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                     & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_main_sm__DOT__enable_i))
                                  : ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_packer_fifo_postht__DOT__clr_i)) 
                                     & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__gen_normal_fifo__DOT__fifo_empty)))));
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

VL_ATTR_COLD void Vsim_prim_count__W10___ctor_var_reset(Vsim_prim_count__W10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsim_prim_count__W10___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->clr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4950173694017053554ull);
    vlSelf->set_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2909711447480794214ull);
    vlSelf->set_cnt_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13076314445341619143ull);
    vlSelf->incr_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11597835562523757203ull);
    vlSelf->decr_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5306532475269027120ull);
    vlSelf->step_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3336879808810971777ull);
    vlSelf->commit_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9686289162837265185ull);
    vlSelf->cnt_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11232571601937910021ull);
    vlSelf->__PVT__cnt_after_commit_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3873737214883203612ull);
    vlSelf->err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11052201151567880375ull);
    vlSelf->__PVT__err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17273344676821249686ull);
    vlSelf->__PVT__gen_cnts__BRA__0__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12342136090527077560ull);
    vlSelf->__PVT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10387758575881664457ull);
    vlSelf->__PVT__gen_cnts__BRA__1__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1095922219276201726ull);
    vlSelf->__PVT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9942121063575856487ull);
    vlSelf->__PVT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7971567308374460768ull);
    vlSelf->__PVT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10985168215214513752ull);
}
