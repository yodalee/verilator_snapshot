// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_fifo_sync_cnt__D2_Sz5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = (1U & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_main_sm__DOT__enable_i) 
            & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__es_enable_fo__BRA__5__KET__) 
               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__rng_val_o) 
                  & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__rng_enable_q)))) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__full_o)) 
              & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_main_sm__DOT__enable_i) {
        if (vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i) {
            vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (3U & (2U & ((~ ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                   >> 1U)) << 1U)));
            vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (3U & ((IData)(3U) - (2U & ((~ ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                  >> 1U)) 
                                              << 1U))));
        } else {
            vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (3U & (((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                          & (~ (3U == (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                          ? (((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                              & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                 >> 2U)) ? 3U : (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                          : (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
            vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (3U & (((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                          & (0U != (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                          ? (((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                              & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                 >> 2U)) ? 0U : (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                          : (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        }
        if (vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i) {
            vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (3U & (2U & ((~ ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                   >> 1U)) << 1U)));
            vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (3U & ((IData)(3U) - (2U & ((~ ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                  >> 1U)) 
                                              << 1U))));
        } else {
            vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (3U & (((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                          & (~ (3U == (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                          ? (((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                              & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                 >> 2U)) ? 3U : (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                          : (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
            vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (3U & (((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                          & (0U != (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                          ? (((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                              & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                 >> 2U)) ? 0U : (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                          : (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        }
    } else {
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 3U;
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 3U;
    }
}

VL_ATTR_COLD void Vsim_prim_fifo_sync_cnt__D2_Sz5___ctor_var_reset(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->clr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4950173694017053554ull);
    vlSelf->incr_wptr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9005330559950435707ull);
    vlSelf->incr_rptr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17130767068144865125ull);
    vlSelf->wptr_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9559563724734059750ull);
    vlSelf->rptr_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2394889632709407491ull);
    vlSelf->full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6064445919729732869ull);
    vlSelf->empty_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 123340495795469900ull);
    vlSelf->depth_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15451227973110866376ull);
    vlSelf->err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11052201151567880375ull);
    vlSelf->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1144760230765146391ull);
    vlSelf->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13030539412986164854ull);
    vlSelf->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8211177112314415974ull);
    vlSelf->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4675982277701480512ull);
    vlSelf->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17296198760900854911ull);
    vlSelf->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16557009147220498604ull);
    vlSelf->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15090530540071655289ull);
    vlSelf->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14063659727835534613ull);
    vlSelf->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9476931427864983133ull);
    vlSelf->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__clr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2534513942323913607ull);
    vlSelf->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5628739892162284330ull);
    vlSelf->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9855288863283610520ull);
    vlSelf->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8993222681644413902ull);
    vlSelf->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14681052292530729224ull);
    vlSelf->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15448224844750865916ull);
    vlSelf->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4237349975725188717ull);
    vlSelf->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1497950273631037856ull);
    vlSelf->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 336080330686589819ull);
    vlSelf->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11542593998777922395ull);
}
