// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__wvalid_i) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__wready_o));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rready_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__err_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (3U != (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                            + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__err_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (3U != (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                            + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    } else {
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 3U;
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 3U;
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0U;
    }
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni)
            ? (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i)
            : 0U);
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rready_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__wvalid_i) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__wready_o));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__we_o)) 
            & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__req_o) 
               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__gnt_i))) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__wready_o));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__wvalid_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__rvalid_o) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(((0x00008000U == (0x0001c000U 
                                          & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)) 
                         & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rready_i)))));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__wvalid_i) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__full_o)) 
              & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__rready_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
             >> 0x0000000cU) & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT____VdfgRegularize_h7cfaf1fc_0_0)) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__wready_o));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__err_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (3U != (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                            + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__err_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (3U != (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                            + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    } else {
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 3U;
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0U;
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 3U;
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0U;
    }
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__wvalid_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__we_o)) 
            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_bank_sequence_fifo__DOT__wvalid_i)) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_sramreqfifo__DOT__wready_o));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__wvalid_i) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__full_o)) 
              & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__rvalid_o) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(((0x00008000U == (0x0001c000U 
                                          & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__rdata_o)) 
                         & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__rready_i)))));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__rready_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__wvalid_i) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__wready_o));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_rd__DOT__u_mask_storage__DOT__rready_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_rd__DOT__u_rd_storage__DOT__wvalid_i) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_rd__DOT__u_rd_storage__DOT__wready_o));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__rready_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__wvalid_i) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__wready_o));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_rd__DOT__u_mask_storage__DOT__rready_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_rd__DOT__u_rd_storage__DOT__wvalid_i) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_rd__DOT__u_rd_storage__DOT__wready_o));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = (1U & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__gen_normal_fifo__DOT__fifo_empty)) 
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
    } else {
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 3U;
    }
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_main_sm__DOT__enable_i) 
            & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__es_enable_fo__BRA__5__KET__) 
               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__rng_val_o) 
                  & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__rng_enable_q)))) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__full_o)) 
              & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_esrng__DOT__gen_normal_fifo__DOT__under_rst))));
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
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 3U;
    }
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_distr__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_distr__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_distr__DOT__wvalid_i) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_distr__DOT__full_o)) 
              & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_distr__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__clr_i 
        = (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_main_sm__DOT__fw_ov_ent_insert_i)
                  ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__es_enable_fo__BRA__19__KET__))
                  : (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_main_sm__DOT__enable_i))));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    if (vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__clr_i) {
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 3U;
    } else if (vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i) {
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_distr__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_distr__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_distr__DOT__rvalid_o) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_distr__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_fifo_sync_distr__DOT__rready_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    if (vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__clr_i) {
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
        vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 3U;
    } else if (vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i) {
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__wvalid_i) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__wready_o));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rready_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__we_o)) 
            & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__req_o) 
               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__gnt_i))) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__wready_o));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__wvalid_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__rvalid_o) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(((0x00008000U == (0x0001c000U 
                                          & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)) 
                         & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rready_i)))));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__wvalid_i) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__full_o)) 
              & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_reqfifo__DOT__rready_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rvalid_o) 
            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rready_i)) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_reqfifo__DOT__wready_o));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_rspfifo__DOT__wvalid_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__we_o)) 
            & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__req_o) 
               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__bus_rom_gnt))) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_sramreqfifo__DOT__wready_o));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}

void Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0(Vsim_prim_fifo_sync_cnt__D2_Sz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_prim_fifo_sync_cnt__D2_Sz5___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_rspfifo__DOT__wvalid_i) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_rspfifo__DOT__full_o)) 
              & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_rspfifo__DOT__rvalid_o) 
           & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(((0x00008000U == (0x0001c000U 
                                          & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_reqfifo__DOT__rdata_o)) 
                         & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_reqfifo__DOT__rready_i)))));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 + (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (IData)(vlSelfRef.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
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
}
