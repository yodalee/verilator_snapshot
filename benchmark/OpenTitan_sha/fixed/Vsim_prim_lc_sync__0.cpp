// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_creator_seed_sw_rw_en__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_creator_seed_sw_rw_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__u_prim_lc_sender_creator_seed_sw_rw_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_owner_seed_sw_rw_en__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_owner_seed_sw_rw_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lc_en = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                               ? (IData)(vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq)
                               : 0x0aU);
    vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_seed_hw_rd_en__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_seed_hw_rd_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__u_prim_lc_sender_seed_hw_rd_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_check_byp_en__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_check_byp_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_prim_lc_sender_check_byp_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__gen_syncs__BRA__0__KET____DOT__u_prim_lc_sync_flash_rma_ack__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__gen_syncs__BRA__0__KET____DOT__u_prim_lc_sync_flash_rma_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__rma_ack_q;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__gen_syncs__BRA__1__KET____DOT__u_prim_lc_sync_flash_rma_ack__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__gen_syncs__BRA__1__KET____DOT__u_prim_lc_sync_flash_rma_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellout__u_otbn__lc_rma_ack_o;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_prim_lc_sync_dft_en__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_prim_lc_sync_dft_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_root_ctrl__DOT__u_scanmode_sync.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__u_prim_lc_sender_dft_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_prim_lc_sync_hw_debug_en__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_prim_lc_sync_hw_debug_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_root_ctrl__DOT__u_scanmode_sync.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__u_prim_lc_sender_hw_debug_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clkmgr_byp__DOT__u_en_sync__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clkmgr_byp__DOT__u_en_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__u_prim_lc_sender_hw_debug_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_sync_lc_hw_debug_en__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_sync_lc_hw_debug_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_por_scanmode_sync.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__u_prim_lc_sender_hw_debug_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_sync_lc_check_byp_en__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_sync_lc_check_byp_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_por_scanmode_sync.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_prim_lc_sender_check_byp_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_sync_lc_escalate_en__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_sync_lc_escalate_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_por_scanmode_sync.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__u_prim_lc_sender_escalate_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_lc_seed_hw_rd_en_sync__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_lc_seed_hw_rd_en_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__u_prim_lc_sender_seed_hw_rd_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_lc_escalation_en_sync__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_lc_escalation_en_sync__0\n"); );
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

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT__u_lc_creator_seed_sw_rw_en_sync__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT__u_lc_creator_seed_sw_rw_en_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__u_prim_lc_sender_creator_seed_sw_rw_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT__u_lc_owner_seed_sw_rw_en_sync__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT__u_lc_owner_seed_sw_rw_en_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__u_prim_lc_sender_owner_seed_sw_rw_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT__u_lc_iso_part_sw_rd_en_sync__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT__u_lc_iso_part_sw_rd_en_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__u_prim_lc_sender_iso_part_sw_rd_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT__u_lc_iso_part_sw_wr_en_sync__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT__u_lc_iso_part_sw_wr_en_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__u_prim_lc_sender_iso_part_sw_wr_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_prim_lc_sync_lc_hw_debug_en__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_prim_lc_sync_lc_hw_debug_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__u_prim_lc_sender_hw_debug_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_prim_lc_sync_lc_dft_en__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_prim_lc_sync_lc_dft_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__u_prim_lc_sender_dft_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_lc_rma_req_sync__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_lc_rma_req_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_prim_lc_sender_flash_rma_req__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_lc_sync__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_lc_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__u_prim_lc_sender_hw_debug_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_lc_sync__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_lc_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__u_prim_lc_sender_cpu_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}

void Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_pwrmgr_sync__0(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_pwrmgr_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.__PVT__lc_en = vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_fsm__DOT__u_fetch_en__DOT__lc_en_out;
    } else {
        vlSelfRef.__PVT__lc_en = 0x0aU;
        vlSelfRef.__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0x0aU;
    }
}
