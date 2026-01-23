// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_0_cdc__0(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_0_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__src_level 
        = vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__src_level;
    vlSelfRef.__Vdly__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__src_level) 
               ^ (IData)(vlSelfRef.__PVT__dst_req_from_src)));
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_src_to_dst_req__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_0_cdc__1(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_0_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dst_req_from_src = ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__dst_level_q) 
                                         ^ (IData)(vlSelf->__PVT__u_src_to_dst_req__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_0_cdc__2(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_0_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i;
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_det_ctl_0__q;
            }
            if (vlSelfRef.__PVT__src_ack) {
                vlSelfRef.__PVT__src_busy_q = 0U;
            }
        }
    } else {
        vlSelfRef.__PVT__txn_bits_q = 0U;
        vlSelfRef.__PVT__src_busy_q = 0U;
        vlSelfRef.__PVT__src_q = 0U;
    }
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_0_cdc__3(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_0_cdc__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__src_ack = ((IData)(vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
                                ^ (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
    vlSelfRef.__PVT__dst_to_src = ((IData)(vlSelfRef.__PVT__src_ack) 
                                   & (IData)(vlSelfRef.__PVT__src_busy_q));
}

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_0_cdc__4(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_0_cdc__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__src_level 
        = vlSelfRef.__Vdly__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__src_level;
}

void Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_0_cdc__0(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_0_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x19U == (0x0000003fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hade6b69c_0_47));
}

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_1_cdc__2(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_1_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i;
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_det_ctl_1__q;
            }
            if (vlSelfRef.__PVT__src_ack) {
                vlSelfRef.__PVT__src_busy_q = 0U;
            }
        }
    } else {
        vlSelfRef.__PVT__txn_bits_q = 0U;
        vlSelfRef.__PVT__src_busy_q = 0U;
        vlSelfRef.__PVT__src_q = 0U;
    }
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_1_cdc__0(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_1_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x1aU == (0x0000003fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hade6b69c_0_47));
}

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_2_cdc__2(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_2_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i;
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_det_ctl_2__q;
            }
            if (vlSelfRef.__PVT__src_ack) {
                vlSelfRef.__PVT__src_busy_q = 0U;
            }
        }
    } else {
        vlSelfRef.__PVT__txn_bits_q = 0U;
        vlSelfRef.__PVT__src_busy_q = 0U;
        vlSelfRef.__PVT__src_q = 0U;
    }
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_2_cdc__0(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_2_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x1bU == (0x0000003fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hade6b69c_0_47));
}

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_3_cdc__2(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_3_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i;
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_det_ctl_3__q;
            }
            if (vlSelfRef.__PVT__src_ack) {
                vlSelfRef.__PVT__src_busy_q = 0U;
            }
        }
    } else {
        vlSelfRef.__PVT__txn_bits_q = 0U;
        vlSelfRef.__PVT__src_busy_q = 0U;
        vlSelfRef.__PVT__src_q = 0U;
    }
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_3_cdc__0(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_3_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x1cU == (0x0000003fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hade6b69c_0_47));
}

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc__2(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = vlSelfRef.src_wd_i;
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_det_ctl_0__q;
            }
            if (vlSelfRef.__PVT__src_ack) {
                vlSelfRef.__PVT__src_busy_q = 0U;
            }
        }
    } else {
        vlSelfRef.__PVT__txn_bits_q = 0U;
        vlSelfRef.__PVT__src_busy_q = 0U;
        vlSelfRef.__PVT__src_q = 0U;
    }
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc__0(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_wd_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__25__KET____DOT__dev_select)
                           ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                               << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[0U] 
                                         >> 0x00000017U))
                           : 0xffffffffU);
}

void Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc__1(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x21U == (0x0000003fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hade6b69c_0_47));
}

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_1_cdc__2(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_1_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i;
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_det_ctl_1__q;
            }
            if (vlSelfRef.__PVT__src_ack) {
                vlSelfRef.__PVT__src_busy_q = 0U;
            }
        }
    } else {
        vlSelfRef.__PVT__txn_bits_q = 0U;
        vlSelfRef.__PVT__src_busy_q = 0U;
        vlSelfRef.__PVT__src_q = 0U;
    }
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_1_cdc__0(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_1_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x22U == (0x0000003fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hade6b69c_0_47));
}

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_2_cdc__2(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_2_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i;
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_det_ctl_2__q;
            }
            if (vlSelfRef.__PVT__src_ack) {
                vlSelfRef.__PVT__src_busy_q = 0U;
            }
        }
    } else {
        vlSelfRef.__PVT__txn_bits_q = 0U;
        vlSelfRef.__PVT__src_busy_q = 0U;
        vlSelfRef.__PVT__src_q = 0U;
    }
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_2_cdc__0(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_2_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x23U == (0x0000003fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hade6b69c_0_47));
}

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_3_cdc__2(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_3_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i;
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_det_ctl_3__q;
            }
            if (vlSelfRef.__PVT__src_ack) {
                vlSelfRef.__PVT__src_busy_q = 0U;
            }
        }
    } else {
        vlSelfRef.__PVT__txn_bits_q = 0U;
        vlSelfRef.__PVT__src_busy_q = 0U;
        vlSelfRef.__PVT__src_q = 0U;
    }
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_3_cdc__0(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_3_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x24U == (0x0000003fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hade6b69c_0_47));
}

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_0_cdc__2(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_0_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_cfg_cdc__DOT__src_wd_i;
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_0_y_0__q) 
                                           << 0x00000010U) 
                                          | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_0_x_0__q));
            }
            if (vlSelfRef.__PVT__src_ack) {
                vlSelfRef.__PVT__src_busy_q = 0U;
            }
        }
    } else {
        vlSelfRef.__PVT__txn_bits_q = 0U;
        vlSelfRef.__PVT__src_busy_q = 0U;
        vlSelfRef.__PVT__src_q = 0U;
    }
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_0_cdc__0(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_0_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__racl_addr_hit_write 
                           >> 0x00000011U) & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____VdfgRegularize_h20c36099_0_4));
}

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_1_cdc__2(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_1_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_cfg_cdc__DOT__src_wd_i;
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_1_y_1__q) 
                                           << 0x00000010U) 
                                          | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_1_x_1__q));
            }
            if (vlSelfRef.__PVT__src_ack) {
                vlSelfRef.__PVT__src_busy_q = 0U;
            }
        }
    } else {
        vlSelfRef.__PVT__txn_bits_q = 0U;
        vlSelfRef.__PVT__src_busy_q = 0U;
        vlSelfRef.__PVT__src_q = 0U;
    }
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_1_cdc__0(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_1_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__racl_addr_hit_write 
                           >> 0x00000012U) & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____VdfgRegularize_h20c36099_0_4));
}

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_2_cdc__2(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_2_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_cfg_cdc__DOT__src_wd_i;
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_2_y_2__q) 
                                           << 0x00000010U) 
                                          | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_2_x_2__q));
            }
            if (vlSelfRef.__PVT__src_ack) {
                vlSelfRef.__PVT__src_busy_q = 0U;
            }
        }
    } else {
        vlSelfRef.__PVT__txn_bits_q = 0U;
        vlSelfRef.__PVT__src_busy_q = 0U;
        vlSelfRef.__PVT__src_q = 0U;
    }
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_2_cdc__0(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_2_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__racl_addr_hit_write 
                           >> 0x00000013U) & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____VdfgRegularize_h20c36099_0_4));
}

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_3_cdc__2(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_3_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_cfg_cdc__DOT__src_wd_i;
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_3_y_3__q) 
                                           << 0x00000010U) 
                                          | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_3_x_3__q));
            }
            if (vlSelfRef.__PVT__src_ack) {
                vlSelfRef.__PVT__src_busy_q = 0U;
            }
        }
    } else {
        vlSelfRef.__PVT__txn_bits_q = 0U;
        vlSelfRef.__PVT__src_busy_q = 0U;
        vlSelfRef.__PVT__src_q = 0U;
    }
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_3_cdc__0(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_3_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__racl_addr_hit_write 
                           >> 0x00000014U) & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____VdfgRegularize_h20c36099_0_4));
}

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_4_cdc__2(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_4_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_cfg_cdc__DOT__src_wd_i;
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_4_y_4__q) 
                                           << 0x00000010U) 
                                          | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_4_x_4__q));
            }
            if (vlSelfRef.__PVT__src_ack) {
                vlSelfRef.__PVT__src_busy_q = 0U;
            }
        }
    } else {
        vlSelfRef.__PVT__txn_bits_q = 0U;
        vlSelfRef.__PVT__src_busy_q = 0U;
        vlSelfRef.__PVT__src_q = 0U;
    }
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_4_cdc__0(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_4_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__racl_addr_hit_write 
                           >> 0x00000015U) & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____VdfgRegularize_h20c36099_0_4));
}

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_5_cdc__2(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_5_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_cfg_cdc__DOT__src_wd_i;
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_5_y_5__q) 
                                           << 0x00000010U) 
                                          | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_5_x_5__q));
            }
            if (vlSelfRef.__PVT__src_ack) {
                vlSelfRef.__PVT__src_busy_q = 0U;
            }
        }
    } else {
        vlSelfRef.__PVT__txn_bits_q = 0U;
        vlSelfRef.__PVT__src_busy_q = 0U;
        vlSelfRef.__PVT__src_q = 0U;
    }
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_5_cdc__0(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_blink_param_5_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__racl_addr_hit_write 
                           >> 0x00000016U) & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____VdfgRegularize_h20c36099_0_4));
}

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_thold_hi_cdc__2(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_thold_hi_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = ((IData)(vlSelfRef.src_we_i) 
                                           << 2U);
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_wd_i;
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_thold_hi__q;
            }
            if (vlSelfRef.__PVT__src_ack) {
                vlSelfRef.__PVT__src_busy_q = 0U;
            }
        }
    } else {
        vlSelfRef.__PVT__txn_bits_q = 0U;
        vlSelfRef.__PVT__src_busy_q = 0U;
        vlSelfRef.__PVT__src_q = 0U;
    }
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_thold_hi_cdc__0(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_thold_hi_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dst_we_o = (((IData)(vlSelfRef.__PVT__txn_bits_q) 
                           >> 2U) & (IData)(vlSelfRef.__PVT__dst_req_from_src));
}

void Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_thold_hi_cdc__1(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_thold_hi_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((2U == (0x0000000fU & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                  << 3U) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                    >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____VdfgRegularize_h283cb78b_0_17));
}

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_thold_lo_cdc__2(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_thold_lo_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = ((IData)(vlSelfRef.src_we_i) 
                                           << 2U);
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_wd_i;
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_thold_lo__q;
            }
            if (vlSelfRef.__PVT__src_ack) {
                vlSelfRef.__PVT__src_busy_q = 0U;
            }
        }
    } else {
        vlSelfRef.__PVT__txn_bits_q = 0U;
        vlSelfRef.__PVT__src_busy_q = 0U;
        vlSelfRef.__PVT__src_q = 0U;
    }
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_thold_lo_cdc__1(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_thold_lo_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((3U == (0x0000000fU & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                  << 3U) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                    >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____VdfgRegularize_h283cb78b_0_17));
}

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_bark_thold_cdc__2(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_bark_thold_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_regwen__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_wd_i;
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_bark_thold__q;
            }
            if (vlSelfRef.__PVT__src_ack) {
                vlSelfRef.__PVT__src_busy_q = 0U;
            }
        }
    } else {
        vlSelfRef.__PVT__txn_bits_q = 0U;
        vlSelfRef.__PVT__src_busy_q = 0U;
        vlSelfRef.__PVT__src_q = 0U;
    }
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_bark_thold_cdc__0(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_bark_thold_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((8U == (0x0000000fU & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                  << 3U) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                    >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____VdfgRegularize_h283cb78b_0_17));
}

void Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_bite_thold_cdc__2(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_bite_thold_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_regwen__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_wd_i;
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_bite_thold__q;
            }
            if (vlSelfRef.__PVT__src_ack) {
                vlSelfRef.__PVT__src_busy_q = 0U;
            }
        }
    } else {
        vlSelfRef.__PVT__txn_bits_q = 0U;
        vlSelfRef.__PVT__src_busy_q = 0U;
        vlSelfRef.__PVT__src_q = 0U;
    }
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_bite_thold_cdc__0(Vsim_prim_reg_cdc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_bite_thold_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((9U == (0x0000000fU & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                  << 3U) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                    >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____VdfgRegularize_h283cb78b_0_17));
}
