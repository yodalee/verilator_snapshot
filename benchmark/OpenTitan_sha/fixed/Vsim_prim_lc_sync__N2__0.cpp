// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_lc_sync__N2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clkmgr_byp__DOT__u_lc_byp_req__0(Vsim_prim_lc_sync__N2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync__N2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clkmgr_byp__DOT__u_lc_byp_req__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_prim_lc_sender_clk_byp_req__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync__N2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_sync_lc_dft_en__0(Vsim_prim_lc_sync__N2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync__N2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_sync_lc_dft_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_por_scanmode_sync.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__u_prim_lc_sender_dft_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync__N2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_lc_sync__0(Vsim_prim_lc_sync__N2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync__N2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_lc_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__u_prim_lc_sender_escalate_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync__N2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_lc_escalate_en_sync__0(Vsim_prim_lc_sync__N2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync__N2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_lc_escalate_en_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__u_prim_lc_sender_escalate_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}
