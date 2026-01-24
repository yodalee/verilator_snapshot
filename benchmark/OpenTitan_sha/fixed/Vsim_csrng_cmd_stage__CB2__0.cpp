// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage__0(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__storage 
            = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                              & VL_SHIFTL_III(6,32,32, 
                                                              (1U 
                                                               & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)), 5U)))) 
                & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__storage) 
               | ((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_edn_core__DOT__cs_cmd_req_out_q)) 
                  << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                  (1U 
                                                   & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)), 5U))));
    }
    if (((IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i) 
         & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x0000000eU] 
                << 0x00000019U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x0000000dU] 
                                   >> 7U));
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x0000000fU] 
                << 0x00000019U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x0000000eU] 
                                   >> 7U));
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x00000010U] 
                << 0x00000019U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x0000000fU] 
                                   >> 7U));
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[3U] 
            = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x00000011U] 
                << 0x00000019U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x00000010U] 
                                   >> 7U));
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[4U] 
            = (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x00000011U] 
                     >> 7U));
    }
}

void Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage__1(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0;
    CData/*1:0*/ __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    // Body
    __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__PVT__cmd_gen_flag_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__cmd_gen_flag_d));
    vlSelfRef.__PVT__instantiated_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__instantiated_d));
    vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (0x0fffU != (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                          + (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) {
            if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
                __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (2U & ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                             << 1U));
            } else if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
            }
            if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
                __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (2U & ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                             << 1U));
            } else if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
            }
        } else {
            __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
            __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        }
        vlSelfRef.__PVT__cmd_gen_cmd_q = vlSelfRef.__PVT__cmd_gen_cmd_d;
        vlSelfRef.__PVT__cmd_len_q = vlSelfRef.__PVT__cmd_len_d;
        vlSelfRef.__PVT__cmd_ack_sts_q = vlSelfRef.__PVT__cmd_ack_sts_d;
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__state_d;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    } else {
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        vlSelfRef.__PVT__cmd_gen_cmd_q = 0U;
        vlSelfRef.__PVT__cmd_len_q = 0U;
        vlSelfRef.__PVT__cmd_ack_sts_q = 0U;
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw = 0xf5U;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0U;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0x0fffU;
    }
    vlSelfRef.__PVT__cmd_ack_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                  && ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
                                      & ((IData)(vlSelfRef.__PVT__cmd_err_ack) 
                                         | (IData)(vlSelfRef.__PVT__cmd_final_ack))));
    vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_d));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o = 
        ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
         == (2U ^ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_307 = ((IData)(vlSelfRef.__PVT__cmd_ack_q) 
                                                  & (0U 
                                                     != (IData)(vlSelfRef.__PVT__cmd_ack_sts_q)));
    if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_426 
            = vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty;
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o = 2U;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_426 = 0U;
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o 
            = (3U & (((1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                             >> 1U)) == (1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               >> 1U)))
                      ? ((1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                         - (1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                      : (((IData)(2U) - (1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                         + (1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))));
    }
}

void Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage__2(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmd_ack_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_state_db__DOT__state_db_sts_ack_q) 
                           & (0U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_state_db__DOT__state_db_sts_id_q)));
}

void Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage__3(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cmd_len_dec = 0U;
    vlSelfRef.__PVT__cmd_final_ack = 0U;
    vlSelfRef.__PVT__cmd_gen_cnt_dec = 0U;
    vlSelfRef.cmd_arb_sop_o = 0U;
    vlSelfRef.__PVT__cmd_gen_inc_req = 0U;
    vlSelfRef.cmd_arb_mop_o = 0U;
    vlSelfRef.__PVT__cmd_gen_1st_req = 0U;
    vlSelfRef.genbits_vld_o = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
                               & (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q));
    vlSelfRef.cmd_stage_sm_err_o = 0U;
    if ((0x67U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.cmd_stage_sm_err_o = 1U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
        if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                      & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                 | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                            | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                           | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                          | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                         | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
            if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                                    }
                                } else {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            }
        }
    }
    vlSelfRef.cmd_arb_req_o = 0U;
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                          & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                     | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                    | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                   | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                  | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                 | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                              >> 7U)))) {
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                    vlSelfRef.__PVT__cmd_len_dec = 1U;
                                                    vlSelfRef.cmd_arb_mop_o = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                vlSelfRef.__PVT__cmd_gen_1st_req = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                if (vlSelfRef.__PVT__cmd_gen_flag_q) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)))) {
                                                        if (
                                                            (0U 
                                                             == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
                                                            vlSelfRef.__PVT__cmd_final_ack = 1U;
                                                        }
                                                    }
                                                } else {
                                                    vlSelfRef.__PVT__cmd_final_ack = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                if (vlSelfRef.__PVT__cmd_gen_flag_q) {
                                                    vlSelfRef.__PVT__cmd_gen_cnt_dec = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                vlSelfRef.cmd_arb_sop_o = 1U;
                                                vlSelfRef.__PVT__cmd_gen_inc_req = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                vlSelfRef.cmd_arb_req_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                     >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            vlSelfRef.cmd_arb_sop_o = 1U;
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                            vlSelfRef.cmd_arb_req_o = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.genbits_rdy_i = ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_edn_core__DOT__reject_csrng_entropy)) 
                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__wready_o));
    vlSelfRef.cmd_stage_vld_i = (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_edn_core__DOT__reject_csrng_entropy)) 
                                  & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_edn_core__DOT__cs_cmd_req_vld_out_q)) 
                                 | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_edn_core__DOT__cs_cmd_req_vld_hold_q));
    vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec)));
    vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec)));
    vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__rready_i 
        = ((IData)(vlSelfRef.genbits_vld_o) & (IData)(vlSelfRef.genbits_rdy_i));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_427 = ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o)) 
                                                  & (IData)(vlSelfRef.cmd_stage_vld_i));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_429 = ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__rready_i));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__wvalid_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_427));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__wvalid_i) 
           & ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o)) 
              & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_424 = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__wvalid_i) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
}

void Vsim_csrng_cmd_stage__CB2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage__0(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
        = (IData)((vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__storage 
                   >> (0x0000003fU & VL_SHIFTL_III(6,6,32, 
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 5U))));
    vlSelfRef.__PVT__instantiated_d = vlSelfRef.__PVT__instantiated_q;
    vlSelfRef.cmd_arb_eop_o = 0U;
    vlSelfRef.__PVT__cmd_gen_cnt_last = 0U;
    vlSelfRef.__PVT__invalid_acmd = 0U;
    vlSelfRef.__PVT__invalid_cmd_seq = 0U;
    vlSelfRef.__PVT__reseed_cnt_exceeded = 0U;
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
            if (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                 & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                            | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                           | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                          | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                         | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                        | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                       | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                      | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                     | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                    | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))) {
                vlSelfRef.__PVT__instantiated_d = 0U;
            } else if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                if (
                                                    (1U 
                                                     == 
                                                     (7U 
                                                      & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                        vlSelfRef.__PVT__instantiated_d = 1U;
                                                    }
                                                } else if (
                                                           (2U 
                                                            != 
                                                            (7U 
                                                             & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                    if (
                                                        (3U 
                                                         != 
                                                         (7U 
                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (4U 
                                                             != 
                                                             (7U 
                                                              & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                            if (
                                                                (5U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                vlSelfRef.__PVT__instantiated_d = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                          & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                     | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                    | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                   | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                  | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                 | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                vlSelfRef.cmd_arb_eop_o = 1U;
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
                                                    vlSelfRef.__PVT__cmd_gen_cnt_last = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                    if (
                                                        (1U 
                                                         != 
                                                         (7U 
                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (2U 
                                                             != 
                                                             (7U 
                                                              & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                            if (
                                                                (3U 
                                                                 != 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                if (
                                                                    (4U 
                                                                     != 
                                                                     (7U 
                                                                      & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                    if (
                                                                        (5U 
                                                                         != 
                                                                         (7U 
                                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                        vlSelfRef.__PVT__invalid_acmd = 1U;
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (3U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                if (vlSelfRef.__PVT__instantiated_q) {
                                                                    if (
                                                                        ((3U 
                                                                          == 
                                                                          (7U 
                                                                           & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o)) 
                                                                         & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__reseed_cnt_reached_q))) {
                                                                        vlSelfRef.__PVT__reseed_cnt_exceeded = 1U;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (vlSelfRef.__PVT__instantiated_q) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    } else if (
                                                               (2U 
                                                                == 
                                                                (7U 
                                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    } else if (
                                                               (3U 
                                                                == 
                                                                (7U 
                                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    } else if (
                                                               (4U 
                                                                == 
                                                                (7U 
                                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                    if (
                                                        (1U 
                                                         == (IData)(vlSelfRef.__PVT__cmd_len_q))) {
                                                        vlSelfRef.cmd_arb_eop_o = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                         >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((0U 
                                                 == 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                                     >> 4U)))) {
                                                vlSelfRef.cmd_arb_eop_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                if (
                                                    (1U 
                                                     == 
                                                     (0x00000fffU 
                                                      & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                                         >> 0x0cU)))) {
                                                    vlSelfRef.__PVT__cmd_gen_cnt_last = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) {
        if (vlSelfRef.__PVT__cmd_gen_1st_req) {
            vlSelfRef.__PVT__cmd_gen_flag_d = (3U == 
                                               (7U 
                                                & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o));
            vlSelfRef.__PVT__cmd_gen_cmd_d = (0x00000fffU 
                                              & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o);
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                  >> 0x0000000cU));
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & ((IData)(0x0fffU) 
                                  - (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                     >> 0x0000000cU)));
        } else {
            vlSelfRef.__PVT__cmd_gen_flag_d = vlSelfRef.__PVT__cmd_gen_flag_q;
            vlSelfRef.__PVT__cmd_gen_cmd_d = (0x00000fffU 
                                              & (IData)(vlSelfRef.__PVT__cmd_gen_cmd_q));
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                   & (0U != (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))
                                   ? (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                       & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                          >> 0x0000000cU))
                                       ? 0U : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                                   : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                   & (~ (0x00000fffU 
                                         == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                                   ? (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                       & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                          >> 0x0000000cU))
                                       ? 0x0fffU : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                                   : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        }
        vlSelfRef.__PVT__cmd_len_d = (0x0000000fU & 
                                      ((IData)(vlSelfRef.cmd_arb_sop_o)
                                        ? (0x0000000fU 
                                           & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                              >> 4U))
                                        : ((IData)(vlSelfRef.__PVT__cmd_len_q) 
                                           - (IData)(vlSelfRef.__PVT__cmd_len_dec))));
    } else {
        vlSelfRef.__PVT__cmd_gen_flag_d = 0U;
        vlSelfRef.__PVT__cmd_gen_cmd_d = 0U;
        vlSelfRef.__PVT__cmd_len_d = 0U;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x00000fffU;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    }
}

void Vsim_csrng_cmd_stage__CB2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage__1(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.genbits_vld_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__rready_i) 
                               & (0U == (0x00000078U 
                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0U])));
    vlSelfRef.__PVT__state_d = vlSelfRef.__PVT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__cmd_fifo_pop = 0U;
    vlSelfRef.__PVT__cmd_err_ack = 0U;
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                    & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                               | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                            | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                           | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                          | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                         | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                        | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                       | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.__PVT__state_d = 0xf5U;
        } else if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.__PVT__state_d = 0x67U;
                            } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((0U != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                    if ((1U == (7U 
                                                & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__state_d = 0x1cU;
                                        }
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((2U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            vlSelfRef.__PVT__state_d = 0x1cU;
                                        }
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((3U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            if (((3U 
                                                  == 
                                                  (7U 
                                                   & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o)) 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__reseed_cnt_reached_q))) {
                                                vlSelfRef.__PVT__cmd_err_ack = 1U;
                                                vlSelfRef.__PVT__state_d = 0xf5U;
                                            } else {
                                                vlSelfRef.__PVT__state_d = 0x1cU;
                                            }
                                        }
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((4U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            vlSelfRef.__PVT__state_d = 0x1cU;
                                        }
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((5U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        vlSelfRef.__PVT__state_d = 0x1cU;
                                    } else {
                                        vlSelfRef.__PVT__cmd_err_ack = 1U;
                                        vlSelfRef.__PVT__state_d = 0xf5U;
                                    }
                                    if (vlSelfRef.__PVT__cmd_err_ack) {
                                        vlSelfRef.__PVT__cmd_fifo_pop = 1U;
                                        vlSelfRef.__PVT__state_d = 0x5bU;
                                    }
                                }
                            } else {
                                vlSelfRef.__PVT__state_d = 0x67U;
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        }
                    } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.__PVT__state_d = 0x67U;
                                } else if ((1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_arbiter_ppc_acmd__DOT__gnt_o))) {
                                    vlSelfRef.__PVT__state_d = 0xbaU;
                                }
                            } else {
                                vlSelfRef.__PVT__state_d = 0x67U;
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if (vlSelfRef.cmd_ack_i) {
                    vlSelfRef.__PVT__state_d = 0x93U;
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__state_d = ((0x00000010U 
                                             & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                  ? 0x67U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                    ? 0x67U
                                                    : 0x8dU)
                                                   : 0x67U))
                                                 : 0x67U)
                                             : 0x67U);
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if (vlSelfRef.__PVT__cmd_gen_flag_q) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)))) {
                                vlSelfRef.__PVT__state_d 
                                    = ((0U == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                                        ? 0xf5U : 0xeeU);
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0xf5U;
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else {
                    vlSelfRef.__PVT__state_d = 0x67U;
                }
            } else {
                vlSelfRef.__PVT__state_d = ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                             ? ((4U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                  ? 0x67U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                   ? 0xc0U
                                                   : 0x67U))
                                                 : 0x67U)
                                             : 0x67U);
            }
        } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__state_d = 0x67U;
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__cmd_fifo_pop 
                                = (1U & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty)));
                            if (((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                 & (~ (IData)(vlSelfRef.cmd_stage_vld_i)))) {
                                vlSelfRef.__PVT__state_d = 0xf5U;
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        } else if ((0U != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                            vlSelfRef.__PVT__cmd_fifo_pop = 1U;
                            if ((1U == (IData)(vlSelfRef.__PVT__cmd_len_q))) {
                                vlSelfRef.__PVT__state_d = 0x8dU;
                            }
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else {
                    vlSelfRef.__PVT__state_d = 0x67U;
                }
            } else {
                vlSelfRef.__PVT__state_d = 0x67U;
            }
        } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    } else if ((1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_arbiter_ppc_acmd__DOT__gnt_o))) {
                        vlSelfRef.__PVT__state_d = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__state_d = 0x67U;
                }
            } else {
                vlSelfRef.__PVT__state_d = 0x67U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__cmd_fifo_pop = 1U;
            vlSelfRef.__PVT__state_d = ((0U == (0x0000000fU 
                                                & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                                   >> 4U)))
                                         ? 0x8dU : 0x56U);
        } else {
            vlSelfRef.__PVT__state_d = 0x67U;
        }
    }
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) {
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i 
            = vlSelfRef.genbits_vld_i;
        vlSelfRef.__PVT__cmd_ack_sts_d = ((IData)(vlSelfRef.__PVT__cmd_err_ack)
                                           ? ((IData)(vlSelfRef.__PVT__reseed_cnt_exceeded)
                                               ? 4U
                                               : ((IData)(vlSelfRef.__PVT__invalid_cmd_seq)
                                                   ? 3U
                                                   : 1U))
                                           : ((IData)(vlSelfRef.__PVT__cmd_final_ack)
                                               ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_state_db__DOT__state_db_sts_sts_q)
                                               : (IData)(vlSelfRef.__PVT__cmd_ack_sts_q)));
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i 
            = vlSelfRef.__PVT__cmd_fifo_pop;
    } else {
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i = 0U;
        vlSelfRef.__PVT__cmd_ack_sts_d = 0U;
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_428 = ((IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q));
    vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_d 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
           & ((IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)
               ? (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__rready_i))
               : (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i)));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_425 = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i));
    vlSelfRef.cmd_stage_sfifo_genbits_err_o = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_428) 
                                                << 2U) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_429) 
                                                  << 1U));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.cmd_stage_sfifo_cmd_err_o = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_424) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_425) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_426)));
}

void Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage__0(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__storage 
            = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                              & VL_SHIFTL_III(6,32,32, 
                                                              (1U 
                                                               & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)), 5U)))) 
                & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__storage) 
               | ((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_edn_core__DOT__cs_cmd_req_out_q)) 
                  << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                  (1U 
                                                   & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)), 5U))));
    }
    if (((IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i) 
         & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x0000000eU] 
                << 0x00000019U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x0000000dU] 
                                   >> 7U));
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x0000000fU] 
                << 0x00000019U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x0000000eU] 
                                   >> 7U));
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x00000010U] 
                << 0x00000019U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x0000000fU] 
                                   >> 7U));
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[3U] 
            = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x00000011U] 
                << 0x00000019U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x00000010U] 
                                   >> 7U));
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[4U] 
            = (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x00000011U] 
                     >> 7U));
    }
}

void Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage__1(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0;
    CData/*1:0*/ __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    // Body
    __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__PVT__cmd_gen_flag_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__cmd_gen_flag_d));
    vlSelfRef.__PVT__instantiated_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__instantiated_d));
    vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (0x0fffU != (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                          + (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) {
            if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
                __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (2U & ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                             << 1U));
            } else if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
            }
            if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
                __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (2U & ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                             << 1U));
            } else if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
            }
        } else {
            __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
            __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        }
        vlSelfRef.__PVT__cmd_gen_cmd_q = vlSelfRef.__PVT__cmd_gen_cmd_d;
        vlSelfRef.__PVT__cmd_len_q = vlSelfRef.__PVT__cmd_len_d;
        vlSelfRef.__PVT__cmd_ack_sts_q = vlSelfRef.__PVT__cmd_ack_sts_d;
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__state_d;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    } else {
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        vlSelfRef.__PVT__cmd_gen_cmd_q = 0U;
        vlSelfRef.__PVT__cmd_len_q = 0U;
        vlSelfRef.__PVT__cmd_ack_sts_q = 0U;
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw = 0xf5U;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0U;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0x0fffU;
    }
    vlSelfRef.__PVT__cmd_ack_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                  && ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
                                      & ((IData)(vlSelfRef.__PVT__cmd_err_ack) 
                                         | (IData)(vlSelfRef.__PVT__cmd_final_ack))));
    vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_d));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o = 
        ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
         == (2U ^ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_306 = ((IData)(vlSelfRef.__PVT__cmd_ack_q) 
                                                  & (0U 
                                                     != (IData)(vlSelfRef.__PVT__cmd_ack_sts_q)));
    if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_432 
            = vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty;
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o = 2U;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_432 = 0U;
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o 
            = (3U & (((1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                             >> 1U)) == (1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               >> 1U)))
                      ? ((1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                         - (1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                      : (((IData)(2U) - (1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                         + (1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))));
    }
}

void Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage__2(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmd_ack_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_state_db__DOT__state_db_sts_ack_q) 
                           & (1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_state_db__DOT__state_db_sts_id_q)));
}

void Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage__3(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cmd_len_dec = 0U;
    vlSelfRef.__PVT__cmd_final_ack = 0U;
    vlSelfRef.__PVT__cmd_gen_cnt_dec = 0U;
    vlSelfRef.cmd_arb_sop_o = 0U;
    vlSelfRef.__PVT__cmd_gen_inc_req = 0U;
    vlSelfRef.cmd_arb_mop_o = 0U;
    vlSelfRef.__PVT__cmd_gen_1st_req = 0U;
    vlSelfRef.genbits_vld_o = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
                               & (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q));
    vlSelfRef.cmd_stage_sm_err_o = 0U;
    if ((0x67U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.cmd_stage_sm_err_o = 1U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
        if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                      & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                 | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                            | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                           | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                          | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                         | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
            if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                                    }
                                } else {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            }
        }
    }
    vlSelfRef.cmd_arb_req_o = 0U;
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                          & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                     | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                    | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                   | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                  | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                 | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                              >> 7U)))) {
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                    vlSelfRef.__PVT__cmd_len_dec = 1U;
                                                    vlSelfRef.cmd_arb_mop_o = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                vlSelfRef.__PVT__cmd_gen_1st_req = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                if (vlSelfRef.__PVT__cmd_gen_flag_q) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)))) {
                                                        if (
                                                            (0U 
                                                             == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
                                                            vlSelfRef.__PVT__cmd_final_ack = 1U;
                                                        }
                                                    }
                                                } else {
                                                    vlSelfRef.__PVT__cmd_final_ack = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                if (vlSelfRef.__PVT__cmd_gen_flag_q) {
                                                    vlSelfRef.__PVT__cmd_gen_cnt_dec = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                vlSelfRef.cmd_arb_sop_o = 1U;
                                                vlSelfRef.__PVT__cmd_gen_inc_req = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                vlSelfRef.cmd_arb_req_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                     >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            vlSelfRef.cmd_arb_sop_o = 1U;
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                            vlSelfRef.cmd_arb_req_o = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.genbits_rdy_i = ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_edn_core__DOT__reject_csrng_entropy)) 
                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__wready_o));
    vlSelfRef.cmd_stage_vld_i = (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_edn_core__DOT__reject_csrng_entropy)) 
                                  & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_edn_core__DOT__cs_cmd_req_vld_out_q)) 
                                 | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_edn_core__DOT__cs_cmd_req_vld_hold_q));
    vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec)));
    vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec)));
    vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__rready_i 
        = ((IData)(vlSelfRef.genbits_vld_o) & (IData)(vlSelfRef.genbits_rdy_i));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_433 = ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o)) 
                                                  & (IData)(vlSelfRef.cmd_stage_vld_i));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_435 = ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__rready_i));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__wvalid_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_433));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__wvalid_i) 
           & ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o)) 
              & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_430 = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__wvalid_i) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
}

void Vsim_csrng_cmd_stage__CB2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage__0(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
        = (IData)((vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__storage 
                   >> (0x0000003fU & VL_SHIFTL_III(6,6,32, 
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 5U))));
    vlSelfRef.__PVT__instantiated_d = vlSelfRef.__PVT__instantiated_q;
    vlSelfRef.cmd_arb_eop_o = 0U;
    vlSelfRef.__PVT__cmd_gen_cnt_last = 0U;
    vlSelfRef.__PVT__invalid_acmd = 0U;
    vlSelfRef.__PVT__invalid_cmd_seq = 0U;
    vlSelfRef.__PVT__reseed_cnt_exceeded = 0U;
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
            if (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                 & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                            | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                           | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                          | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                         | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                        | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                       | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                      | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                     | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                    | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))) {
                vlSelfRef.__PVT__instantiated_d = 0U;
            } else if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                if (
                                                    (1U 
                                                     == 
                                                     (7U 
                                                      & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                        vlSelfRef.__PVT__instantiated_d = 1U;
                                                    }
                                                } else if (
                                                           (2U 
                                                            != 
                                                            (7U 
                                                             & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                    if (
                                                        (3U 
                                                         != 
                                                         (7U 
                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (4U 
                                                             != 
                                                             (7U 
                                                              & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                            if (
                                                                (5U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                vlSelfRef.__PVT__instantiated_d = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                          & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                     | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                    | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                   | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                  | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                 | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                vlSelfRef.cmd_arb_eop_o = 1U;
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
                                                    vlSelfRef.__PVT__cmd_gen_cnt_last = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                    if (
                                                        (1U 
                                                         != 
                                                         (7U 
                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (2U 
                                                             != 
                                                             (7U 
                                                              & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                            if (
                                                                (3U 
                                                                 != 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                if (
                                                                    (4U 
                                                                     != 
                                                                     (7U 
                                                                      & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                    if (
                                                                        (5U 
                                                                         != 
                                                                         (7U 
                                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                        vlSelfRef.__PVT__invalid_acmd = 1U;
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (3U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                if (vlSelfRef.__PVT__instantiated_q) {
                                                                    if (
                                                                        ((3U 
                                                                          == 
                                                                          (7U 
                                                                           & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o)) 
                                                                         & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__reseed_cnt_reached_q) 
                                                                            >> 1U))) {
                                                                        vlSelfRef.__PVT__reseed_cnt_exceeded = 1U;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (vlSelfRef.__PVT__instantiated_q) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    } else if (
                                                               (2U 
                                                                == 
                                                                (7U 
                                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    } else if (
                                                               (3U 
                                                                == 
                                                                (7U 
                                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    } else if (
                                                               (4U 
                                                                == 
                                                                (7U 
                                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                    if (
                                                        (1U 
                                                         == (IData)(vlSelfRef.__PVT__cmd_len_q))) {
                                                        vlSelfRef.cmd_arb_eop_o = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                         >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((0U 
                                                 == 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                                     >> 4U)))) {
                                                vlSelfRef.cmd_arb_eop_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                if (
                                                    (1U 
                                                     == 
                                                     (0x00000fffU 
                                                      & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                                         >> 0x0cU)))) {
                                                    vlSelfRef.__PVT__cmd_gen_cnt_last = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) {
        if (vlSelfRef.__PVT__cmd_gen_1st_req) {
            vlSelfRef.__PVT__cmd_gen_flag_d = (3U == 
                                               (7U 
                                                & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o));
            vlSelfRef.__PVT__cmd_gen_cmd_d = (0x00000fffU 
                                              & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o);
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                  >> 0x0000000cU));
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & ((IData)(0x0fffU) 
                                  - (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                     >> 0x0000000cU)));
        } else {
            vlSelfRef.__PVT__cmd_gen_flag_d = vlSelfRef.__PVT__cmd_gen_flag_q;
            vlSelfRef.__PVT__cmd_gen_cmd_d = (0x00000fffU 
                                              & (IData)(vlSelfRef.__PVT__cmd_gen_cmd_q));
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                   & (0U != (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))
                                   ? (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                       & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                          >> 0x0000000cU))
                                       ? 0U : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                                   : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                   & (~ (0x00000fffU 
                                         == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                                   ? (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                       & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                          >> 0x0000000cU))
                                       ? 0x0fffU : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                                   : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        }
        vlSelfRef.__PVT__cmd_len_d = (0x0000000fU & 
                                      ((IData)(vlSelfRef.cmd_arb_sop_o)
                                        ? (0x0000000fU 
                                           & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                              >> 4U))
                                        : ((IData)(vlSelfRef.__PVT__cmd_len_q) 
                                           - (IData)(vlSelfRef.__PVT__cmd_len_dec))));
    } else {
        vlSelfRef.__PVT__cmd_gen_flag_d = 0U;
        vlSelfRef.__PVT__cmd_gen_cmd_d = 0U;
        vlSelfRef.__PVT__cmd_len_d = 0U;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x00000fffU;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    }
}

void Vsim_csrng_cmd_stage__CB2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage__1(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.genbits_vld_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__rready_i) 
                               & (8U == (0x00000078U 
                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0U])));
    vlSelfRef.__PVT__state_d = vlSelfRef.__PVT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__cmd_fifo_pop = 0U;
    vlSelfRef.__PVT__cmd_err_ack = 0U;
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                    & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                               | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                            | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                           | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                          | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                         | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                        | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                       | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.__PVT__state_d = 0xf5U;
        } else if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.__PVT__state_d = 0x67U;
                            } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((0U != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                    if ((1U == (7U 
                                                & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__state_d = 0x1cU;
                                        }
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((2U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            vlSelfRef.__PVT__state_d = 0x1cU;
                                        }
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((3U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            if (((3U 
                                                  == 
                                                  (7U 
                                                   & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o)) 
                                                 & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__reseed_cnt_reached_q) 
                                                    >> 1U))) {
                                                vlSelfRef.__PVT__cmd_err_ack = 1U;
                                                vlSelfRef.__PVT__state_d = 0xf5U;
                                            } else {
                                                vlSelfRef.__PVT__state_d = 0x1cU;
                                            }
                                        }
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((4U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            vlSelfRef.__PVT__state_d = 0x1cU;
                                        }
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((5U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        vlSelfRef.__PVT__state_d = 0x1cU;
                                    } else {
                                        vlSelfRef.__PVT__cmd_err_ack = 1U;
                                        vlSelfRef.__PVT__state_d = 0xf5U;
                                    }
                                    if (vlSelfRef.__PVT__cmd_err_ack) {
                                        vlSelfRef.__PVT__cmd_fifo_pop = 1U;
                                        vlSelfRef.__PVT__state_d = 0x5bU;
                                    }
                                }
                            } else {
                                vlSelfRef.__PVT__state_d = 0x67U;
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        }
                    } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.__PVT__state_d = 0x67U;
                                } else if ((2U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_arbiter_ppc_acmd__DOT__gnt_o))) {
                                    vlSelfRef.__PVT__state_d = 0xbaU;
                                }
                            } else {
                                vlSelfRef.__PVT__state_d = 0x67U;
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if (vlSelfRef.cmd_ack_i) {
                    vlSelfRef.__PVT__state_d = 0x93U;
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__state_d = ((0x00000010U 
                                             & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                  ? 0x67U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                    ? 0x67U
                                                    : 0x8dU)
                                                   : 0x67U))
                                                 : 0x67U)
                                             : 0x67U);
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if (vlSelfRef.__PVT__cmd_gen_flag_q) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)))) {
                                vlSelfRef.__PVT__state_d 
                                    = ((0U == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                                        ? 0xf5U : 0xeeU);
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0xf5U;
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else {
                    vlSelfRef.__PVT__state_d = 0x67U;
                }
            } else {
                vlSelfRef.__PVT__state_d = ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                             ? ((4U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                  ? 0x67U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                   ? 0xc0U
                                                   : 0x67U))
                                                 : 0x67U)
                                             : 0x67U);
            }
        } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__state_d = 0x67U;
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__cmd_fifo_pop 
                                = (1U & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty)));
                            if (((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                 & (~ (IData)(vlSelfRef.cmd_stage_vld_i)))) {
                                vlSelfRef.__PVT__state_d = 0xf5U;
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        } else if ((0U != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                            vlSelfRef.__PVT__cmd_fifo_pop = 1U;
                            if ((1U == (IData)(vlSelfRef.__PVT__cmd_len_q))) {
                                vlSelfRef.__PVT__state_d = 0x8dU;
                            }
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else {
                    vlSelfRef.__PVT__state_d = 0x67U;
                }
            } else {
                vlSelfRef.__PVT__state_d = 0x67U;
            }
        } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    } else if ((2U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_arbiter_ppc_acmd__DOT__gnt_o))) {
                        vlSelfRef.__PVT__state_d = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__state_d = 0x67U;
                }
            } else {
                vlSelfRef.__PVT__state_d = 0x67U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__cmd_fifo_pop = 1U;
            vlSelfRef.__PVT__state_d = ((0U == (0x0000000fU 
                                                & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                                   >> 4U)))
                                         ? 0x8dU : 0x56U);
        } else {
            vlSelfRef.__PVT__state_d = 0x67U;
        }
    }
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) {
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i 
            = vlSelfRef.genbits_vld_i;
        vlSelfRef.__PVT__cmd_ack_sts_d = ((IData)(vlSelfRef.__PVT__cmd_err_ack)
                                           ? ((IData)(vlSelfRef.__PVT__reseed_cnt_exceeded)
                                               ? 4U
                                               : ((IData)(vlSelfRef.__PVT__invalid_cmd_seq)
                                                   ? 3U
                                                   : 1U))
                                           : ((IData)(vlSelfRef.__PVT__cmd_final_ack)
                                               ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_state_db__DOT__state_db_sts_sts_q)
                                               : (IData)(vlSelfRef.__PVT__cmd_ack_sts_q)));
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i 
            = vlSelfRef.__PVT__cmd_fifo_pop;
    } else {
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i = 0U;
        vlSelfRef.__PVT__cmd_ack_sts_d = 0U;
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_434 = ((IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q));
    vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_d 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
           & ((IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)
               ? (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__rready_i))
               : (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i)));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_431 = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i));
    vlSelfRef.cmd_stage_sfifo_genbits_err_o = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_434) 
                                                << 2U) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_435) 
                                                  << 1U));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.cmd_stage_sfifo_cmd_err_o = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_430) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_431) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_432)));
}

void Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__2__KET____DOT__u_csrng_cmd_stage__0(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__2__KET____DOT__u_csrng_cmd_stage__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__storage 
            = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                              & VL_SHIFTL_III(6,32,32, 
                                                              (1U 
                                                               & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)), 5U)))) 
                & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__storage) 
               | ((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT____Vcellout__u_cmd_req__q)) 
                  << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                  (1U 
                                                   & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)), 5U))));
    }
    if (((IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i) 
         & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x0000000eU] 
                << 0x00000019U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x0000000dU] 
                                   >> 7U));
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x0000000fU] 
                << 0x00000019U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x0000000eU] 
                                   >> 7U));
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x00000010U] 
                << 0x00000019U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x0000000fU] 
                                   >> 7U));
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[3U] 
            = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x00000011U] 
                << 0x00000019U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x00000010U] 
                                   >> 7U));
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[4U] 
            = (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0x00000011U] 
                     >> 7U));
    }
}

void Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__2__KET____DOT__u_csrng_cmd_stage__1(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__2__KET____DOT__u_csrng_cmd_stage__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0;
    CData/*1:0*/ __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    // Body
    __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__PVT__cmd_gen_flag_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__cmd_gen_flag_d));
    vlSelfRef.__PVT__instantiated_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__instantiated_d));
    vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (0x0fffU != (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                          + (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) {
            if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
                __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (2U & ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                             << 1U));
            } else if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
            }
            if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
                __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (2U & ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                             << 1U));
            } else if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
            }
        } else {
            __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
            __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        }
        vlSelfRef.__PVT__cmd_gen_cmd_q = vlSelfRef.__PVT__cmd_gen_cmd_d;
        vlSelfRef.__PVT__cmd_len_q = vlSelfRef.__PVT__cmd_len_d;
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__state_d;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    } else {
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        vlSelfRef.__PVT__cmd_gen_cmd_q = 0U;
        vlSelfRef.__PVT__cmd_len_q = 0U;
        vlSelfRef.__PVT__u_state_regs__DOT__state_raw = 0xf5U;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0U;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0x0fffU;
    }
    vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_d));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o = 
        ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
         == (2U ^ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438 
            = vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty;
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o = 2U;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438 = 0U;
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o 
            = (3U & (((1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                             >> 1U)) == (1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               >> 1U)))
                      ? ((1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                         - (1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                      : (((IData)(2U) - (1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                         + (1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))));
    }
}

void Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__2__KET____DOT__u_csrng_cmd_stage__2(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__2__KET____DOT__u_csrng_cmd_stage__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmd_ack_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_state_db__DOT__state_db_sts_ack_q) 
                           & (2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_state_db__DOT__state_db_sts_id_q)));
    vlSelfRef.__PVT__cmd_ack_sts_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                       ? (IData)(vlSelfRef.__PVT__cmd_ack_sts_d)
                                       : 0U);
    vlSelfRef.__PVT__cmd_ack_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                  && ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
                                      & ((IData)(vlSelfRef.__PVT__cmd_err_ack) 
                                         | (IData)(vlSelfRef.__PVT__cmd_final_ack))));
}

void Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__2__KET____DOT__u_csrng_cmd_stage__3(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__2__KET____DOT__u_csrng_cmd_stage__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cmd_len_dec = 0U;
    vlSelfRef.__PVT__cmd_final_ack = 0U;
    vlSelfRef.__PVT__cmd_gen_cnt_dec = 0U;
    vlSelfRef.cmd_arb_sop_o = 0U;
    vlSelfRef.__PVT__cmd_gen_inc_req = 0U;
    vlSelfRef.cmd_arb_mop_o = 0U;
    vlSelfRef.__PVT__cmd_gen_1st_req = 0U;
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__wvalid_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
           & ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o)) 
              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__cmd_req_qe)));
    vlSelfRef.cmd_stage_sm_err_o = 0U;
    if ((0x67U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.cmd_stage_sm_err_o = 1U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
        if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                      & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                 | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                            | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                           | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                          | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                         | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
            if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                                    }
                                } else {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            }
        }
    }
    vlSelfRef.cmd_arb_req_o = 0U;
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                          & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                     | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                    | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                   | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                  | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                 | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                              >> 7U)))) {
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                    vlSelfRef.__PVT__cmd_len_dec = 1U;
                                                    vlSelfRef.cmd_arb_mop_o = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                vlSelfRef.__PVT__cmd_gen_1st_req = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                if (vlSelfRef.__PVT__cmd_gen_flag_q) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)))) {
                                                        if (
                                                            (0U 
                                                             == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
                                                            vlSelfRef.__PVT__cmd_final_ack = 1U;
                                                        }
                                                    }
                                                } else {
                                                    vlSelfRef.__PVT__cmd_final_ack = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                if (vlSelfRef.__PVT__cmd_gen_flag_q) {
                                                    vlSelfRef.__PVT__cmd_gen_cnt_dec = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                vlSelfRef.cmd_arb_sop_o = 1U;
                                                vlSelfRef.__PVT__cmd_gen_inc_req = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                vlSelfRef.cmd_arb_req_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                     >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            vlSelfRef.cmd_arb_sop_o = 1U;
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                            vlSelfRef.cmd_arb_req_o = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__rready_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_packer_fifo_sw_genbits__DOT__wvalid_i) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_packer_fifo_sw_genbits__DOT__wready_o));
    vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec)));
    vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec)));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__wvalid_i) 
           & ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o)) 
              & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_436 = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__wvalid_i) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440 = ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__rready_i));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
}

void Vsim_csrng_cmd_stage__CB2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__2__KET____DOT__u_csrng_cmd_stage__0(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__2__KET____DOT__u_csrng_cmd_stage__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
        = (IData)((vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__storage 
                   >> (0x0000003fU & VL_SHIFTL_III(6,6,32, 
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 5U))));
    vlSelfRef.__PVT__instantiated_d = vlSelfRef.__PVT__instantiated_q;
    vlSelfRef.cmd_arb_eop_o = 0U;
    vlSelfRef.__PVT__cmd_gen_cnt_last = 0U;
    vlSelfRef.__PVT__invalid_acmd = 0U;
    vlSelfRef.__PVT__invalid_cmd_seq = 0U;
    vlSelfRef.__PVT__reseed_cnt_exceeded = 0U;
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
            if (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                 & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                            | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                           | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                          | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                         | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                        | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                       | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                      | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                     | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                    | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))) {
                vlSelfRef.__PVT__instantiated_d = 0U;
            } else if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                if (
                                                    (1U 
                                                     == 
                                                     (7U 
                                                      & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                        vlSelfRef.__PVT__instantiated_d = 1U;
                                                    }
                                                } else if (
                                                           (2U 
                                                            != 
                                                            (7U 
                                                             & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                    if (
                                                        (3U 
                                                         != 
                                                         (7U 
                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (4U 
                                                             != 
                                                             (7U 
                                                              & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                            if (
                                                                (5U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                vlSelfRef.__PVT__instantiated_d = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                          & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                     | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                    | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                   | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                  | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                 | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                vlSelfRef.cmd_arb_eop_o = 1U;
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
                                                    vlSelfRef.__PVT__cmd_gen_cnt_last = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                    if (
                                                        (1U 
                                                         != 
                                                         (7U 
                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (2U 
                                                             != 
                                                             (7U 
                                                              & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                            if (
                                                                (3U 
                                                                 != 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                if (
                                                                    (4U 
                                                                     != 
                                                                     (7U 
                                                                      & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                    if (
                                                                        (5U 
                                                                         != 
                                                                         (7U 
                                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                        vlSelfRef.__PVT__invalid_acmd = 1U;
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (3U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                if (vlSelfRef.__PVT__instantiated_q) {
                                                                    if (
                                                                        ((3U 
                                                                          == 
                                                                          (7U 
                                                                           & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o)) 
                                                                         & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__reseed_cnt_reached_q) 
                                                                            >> 2U))) {
                                                                        vlSelfRef.__PVT__reseed_cnt_exceeded = 1U;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (vlSelfRef.__PVT__instantiated_q) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    } else if (
                                                               (2U 
                                                                == 
                                                                (7U 
                                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    } else if (
                                                               (3U 
                                                                == 
                                                                (7U 
                                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    } else if (
                                                               (4U 
                                                                == 
                                                                (7U 
                                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                    if (
                                                        (1U 
                                                         == (IData)(vlSelfRef.__PVT__cmd_len_q))) {
                                                        vlSelfRef.cmd_arb_eop_o = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                         >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((0U 
                                                 == 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                                     >> 4U)))) {
                                                vlSelfRef.cmd_arb_eop_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                if (
                                                    (1U 
                                                     == 
                                                     (0x00000fffU 
                                                      & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                                         >> 0x0cU)))) {
                                                    vlSelfRef.__PVT__cmd_gen_cnt_last = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) {
        if (vlSelfRef.__PVT__cmd_gen_1st_req) {
            vlSelfRef.__PVT__cmd_gen_flag_d = (3U == 
                                               (7U 
                                                & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o));
            vlSelfRef.__PVT__cmd_gen_cmd_d = (0x00000fffU 
                                              & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o);
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                  >> 0x0000000cU));
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & ((IData)(0x0fffU) 
                                  - (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                     >> 0x0000000cU)));
        } else {
            vlSelfRef.__PVT__cmd_gen_flag_d = vlSelfRef.__PVT__cmd_gen_flag_q;
            vlSelfRef.__PVT__cmd_gen_cmd_d = (0x00000fffU 
                                              & (IData)(vlSelfRef.__PVT__cmd_gen_cmd_q));
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                   & (0U != (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))
                                   ? (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                       & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                          >> 0x0000000cU))
                                       ? 0U : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                                   : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                   & (~ (0x00000fffU 
                                         == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                                   ? (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                       & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                          >> 0x0000000cU))
                                       ? 0x0fffU : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                                   : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        }
        vlSelfRef.__PVT__cmd_len_d = (0x0000000fU & 
                                      ((IData)(vlSelfRef.cmd_arb_sop_o)
                                        ? (0x0000000fU 
                                           & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                              >> 4U))
                                        : ((IData)(vlSelfRef.__PVT__cmd_len_q) 
                                           - (IData)(vlSelfRef.__PVT__cmd_len_dec))));
    } else {
        vlSelfRef.__PVT__cmd_gen_flag_d = 0U;
        vlSelfRef.__PVT__cmd_gen_cmd_d = 0U;
        vlSelfRef.__PVT__cmd_len_d = 0U;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x00000fffU;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    }
}

void Vsim_csrng_cmd_stage__CB2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__2__KET____DOT__u_csrng_cmd_stage__1(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__2__KET____DOT__u_csrng_cmd_stage__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.genbits_vld_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__rready_i) 
                               & (0x00000010U == (0x00000078U 
                                                  & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0U])));
    vlSelfRef.__PVT__state_d = vlSelfRef.__PVT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__cmd_fifo_pop = 0U;
    vlSelfRef.__PVT__cmd_err_ack = 0U;
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                    & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                               | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                            | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                           | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                          | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                         | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                        | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                       | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.__PVT__state_d = 0xf5U;
        } else if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.__PVT__state_d = 0x67U;
                            } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((0U != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                    if ((1U == (7U 
                                                & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__state_d = 0x1cU;
                                        }
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((2U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            vlSelfRef.__PVT__state_d = 0x1cU;
                                        }
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((3U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            if (((3U 
                                                  == 
                                                  (7U 
                                                   & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o)) 
                                                 & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__reseed_cnt_reached_q) 
                                                    >> 2U))) {
                                                vlSelfRef.__PVT__cmd_err_ack = 1U;
                                                vlSelfRef.__PVT__state_d = 0xf5U;
                                            } else {
                                                vlSelfRef.__PVT__state_d = 0x1cU;
                                            }
                                        }
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((4U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            vlSelfRef.__PVT__state_d = 0x1cU;
                                        }
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((5U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        vlSelfRef.__PVT__state_d = 0x1cU;
                                    } else {
                                        vlSelfRef.__PVT__cmd_err_ack = 1U;
                                        vlSelfRef.__PVT__state_d = 0xf5U;
                                    }
                                    if (vlSelfRef.__PVT__cmd_err_ack) {
                                        vlSelfRef.__PVT__cmd_fifo_pop = 1U;
                                        vlSelfRef.__PVT__state_d = 0x5bU;
                                    }
                                }
                            } else {
                                vlSelfRef.__PVT__state_d = 0x67U;
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        }
                    } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.__PVT__state_d = 0x67U;
                                } else if ((4U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_arbiter_ppc_acmd__DOT__gnt_o))) {
                                    vlSelfRef.__PVT__state_d = 0xbaU;
                                }
                            } else {
                                vlSelfRef.__PVT__state_d = 0x67U;
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if (vlSelfRef.cmd_ack_i) {
                    vlSelfRef.__PVT__state_d = 0x93U;
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__state_d = ((0x00000010U 
                                             & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                  ? 0x67U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                    ? 0x67U
                                                    : 0x8dU)
                                                   : 0x67U))
                                                 : 0x67U)
                                             : 0x67U);
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if (vlSelfRef.__PVT__cmd_gen_flag_q) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)))) {
                                vlSelfRef.__PVT__state_d 
                                    = ((0U == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                                        ? 0xf5U : 0xeeU);
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0xf5U;
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else {
                    vlSelfRef.__PVT__state_d = 0x67U;
                }
            } else {
                vlSelfRef.__PVT__state_d = ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                             ? ((4U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                  ? 0x67U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                   ? 0xc0U
                                                   : 0x67U))
                                                 : 0x67U)
                                             : 0x67U);
            }
        } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__state_d = 0x67U;
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__cmd_fifo_pop 
                                = (1U & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty)));
                            if (((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                 & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__cmd_req_qe)))) {
                                vlSelfRef.__PVT__state_d = 0xf5U;
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        } else if ((0U != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                            vlSelfRef.__PVT__cmd_fifo_pop = 1U;
                            if ((1U == (IData)(vlSelfRef.__PVT__cmd_len_q))) {
                                vlSelfRef.__PVT__state_d = 0x8dU;
                            }
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else {
                    vlSelfRef.__PVT__state_d = 0x67U;
                }
            } else {
                vlSelfRef.__PVT__state_d = 0x67U;
            }
        } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    } else if ((4U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_arbiter_ppc_acmd__DOT__gnt_o))) {
                        vlSelfRef.__PVT__state_d = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__state_d = 0x67U;
                }
            } else {
                vlSelfRef.__PVT__state_d = 0x67U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__cmd_fifo_pop = 1U;
            vlSelfRef.__PVT__state_d = ((0U == (0x0000000fU 
                                                & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                                   >> 4U)))
                                         ? 0x8dU : 0x56U);
        } else {
            vlSelfRef.__PVT__state_d = 0x67U;
        }
    }
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) {
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i 
            = vlSelfRef.genbits_vld_i;
        vlSelfRef.__PVT__cmd_ack_sts_d = ((IData)(vlSelfRef.__PVT__cmd_err_ack)
                                           ? ((IData)(vlSelfRef.__PVT__reseed_cnt_exceeded)
                                               ? 4U
                                               : ((IData)(vlSelfRef.__PVT__invalid_cmd_seq)
                                                   ? 3U
                                                   : 1U))
                                           : ((IData)(vlSelfRef.__PVT__cmd_final_ack)
                                               ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_state_db__DOT__state_db_sts_sts_q)
                                               : (IData)(vlSelfRef.__PVT__cmd_ack_sts_q)));
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i 
            = vlSelfRef.__PVT__cmd_fifo_pop;
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_d 
            = (1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)
                      ? (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__rready_i))
                      : (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i)));
    } else {
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i = 0U;
        vlSelfRef.__PVT__cmd_ack_sts_d = 0U;
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i = 0U;
        vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_d = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_439 = ((IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_437 = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i));
    vlSelfRef.cmd_stage_sfifo_genbits_err_o = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_439) 
                                                << 2U) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440) 
                                                  << 1U));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.cmd_stage_sfifo_cmd_err_o = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_436) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_437) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438)));
}
