// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_0_cdc__0(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_0_cdc__0\n"); );
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

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_0_cdc__1(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_0_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dst_req_from_src = ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__dst_level_q) 
                                         ^ (IData)(vlSelf->__PVT__u_src_to_dst_req__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_0_cdc__2(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_0_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x0000001fU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_sel_ctl_0_ac_present_sel_0__q) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_sel_ctl_0_pwrb_in_sel_0__q) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_sel_ctl_0_key2_in_sel_0__q) 
                                                 << 2U))) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_sel_ctl_0_key1_in_sel_0__q) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_sel_ctl_0_key0_in_sel_0__q)));
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

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_0_cdc__3(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_0_cdc__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__src_ack = ((IData)(vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
                                ^ (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
    vlSelfRef.__PVT__dst_to_src = ((IData)(vlSelfRef.__PVT__src_ack) 
                                   & (IData)(vlSelfRef.__PVT__src_busy_q));
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_0_cdc__4(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_0_cdc__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__src_level 
        = vlSelfRef.__Vdly__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__src_level;
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_0_cdc__0(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_0_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x15U == (0x0000003fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hade6b69c_0_47));
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_1_cdc__2(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_1_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x0000001fU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_sel_ctl_1_ac_present_sel_1__q) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_sel_ctl_1_pwrb_in_sel_1__q) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_sel_ctl_1_key2_in_sel_1__q) 
                                                 << 2U))) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_sel_ctl_1_key1_in_sel_1__q) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_sel_ctl_1_key0_in_sel_1__q)));
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

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_1_cdc__0(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_1_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x16U == (0x0000003fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hade6b69c_0_47));
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_2_cdc__2(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_2_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x0000001fU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_sel_ctl_2_ac_present_sel_2__q) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_sel_ctl_2_pwrb_in_sel_2__q) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_sel_ctl_2_key2_in_sel_2__q) 
                                                 << 2U))) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_sel_ctl_2_key1_in_sel_2__q) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_sel_ctl_2_key0_in_sel_2__q)));
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

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_2_cdc__0(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_2_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x17U == (0x0000003fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hade6b69c_0_47));
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_3_cdc__2(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_3_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x0000001fU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_sel_ctl_3_ac_present_sel_3__q) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_sel_ctl_3_pwrb_in_sel_3__q) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_sel_ctl_3_key2_in_sel_3__q) 
                                                 << 2U))) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_sel_ctl_3_key1_in_sel_3__q) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_sel_ctl_3_key0_in_sel_3__q)));
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

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_3_cdc__0(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_3_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x18U == (0x0000003fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hade6b69c_0_47));
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_0_cdc__2(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_0_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x0000001fU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_sel_ctl_0_ac_present_sel_0__q) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_sel_ctl_0_pwrb_in_sel_0__q) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_sel_ctl_0_key2_in_sel_0__q) 
                                                 << 2U))) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_sel_ctl_0_key1_in_sel_0__q) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_sel_ctl_0_key0_in_sel_0__q)));
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

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_0_cdc__0(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_0_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x1dU == (0x0000003fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hade6b69c_0_47));
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_1_cdc__2(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_1_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x0000001fU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_sel_ctl_1_ac_present_sel_1__q) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_sel_ctl_1_pwrb_in_sel_1__q) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_sel_ctl_1_key2_in_sel_1__q) 
                                                 << 2U))) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_sel_ctl_1_key1_in_sel_1__q) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_sel_ctl_1_key0_in_sel_1__q)));
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

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_1_cdc__0(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_1_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x1eU == (0x0000003fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hade6b69c_0_47));
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_2_cdc__2(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_2_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x0000001fU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_sel_ctl_2_ac_present_sel_2__q) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_sel_ctl_2_pwrb_in_sel_2__q) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_sel_ctl_2_key2_in_sel_2__q) 
                                                 << 2U))) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_sel_ctl_2_key1_in_sel_2__q) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_sel_ctl_2_key0_in_sel_2__q)));
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

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_2_cdc__0(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_2_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x1fU == (0x0000003fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hade6b69c_0_47));
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_3_cdc__2(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_3_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x0000001fU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_sel_ctl_3_ac_present_sel_3__q) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_sel_ctl_3_pwrb_in_sel_3__q) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_sel_ctl_3_key2_in_sel_3__q) 
                                                 << 2U))) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_sel_ctl_3_key1_in_sel_3__q) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_sel_ctl_3_key0_in_sel_3__q)));
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

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_3_cdc__0(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_3_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x20U == (0x0000003fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hade6b69c_0_47));
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_0_cdc__2(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_0_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_0__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = (0x0000001fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_0_miodio_0__q) 
                                           << 4U) | 
                                          (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_0_filter_0__q) 
                                            << 3U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_0_mode_0__q)));
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
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_0_cdc__0(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_0_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_haa000d8d_0_0
                          [0x087cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____VdfgRegularize_hb0abf62a_0_5));
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_1_cdc__2(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_1_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_1__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = (0x0000001fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_1_miodio_1__q) 
                                           << 4U) | 
                                          (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_1_filter_1__q) 
                                            << 3U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_1_mode_1__q)));
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
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_1_cdc__0(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_1_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_haa000d8d_0_0
                          [0x0880U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____VdfgRegularize_hb0abf62a_0_5));
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_2_cdc__2(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_2_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_2__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = (0x0000001fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_2_miodio_2__q) 
                                           << 4U) | 
                                          (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_2_filter_2__q) 
                                            << 3U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_2_mode_2__q)));
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
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_2_cdc__0(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_2_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_haa000d8d_0_0
                          [0x0884U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____VdfgRegularize_hb0abf62a_0_5));
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_3_cdc__2(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_3_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_3__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = (0x0000001fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_3_miodio_3__q) 
                                           << 4U) | 
                                          (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_3_filter_3__q) 
                                            << 3U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_3_mode_3__q)));
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
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_3_cdc__0(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_3_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_haa000d8d_0_0
                          [0x0888U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____VdfgRegularize_hb0abf62a_0_5));
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_4_cdc__2(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_4_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_4__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = (0x0000001fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_4_miodio_4__q) 
                                           << 4U) | 
                                          (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_4_filter_4__q) 
                                            << 3U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_4_mode_4__q)));
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
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_4_cdc__0(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_4_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_haa000d8d_0_0
                          [0x088cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____VdfgRegularize_hb0abf62a_0_5));
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_5_cdc__2(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_5_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_5__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = (0x0000001fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_5_miodio_5__q) 
                                           << 4U) | 
                                          (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_5_filter_5__q) 
                                            << 3U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_5_mode_5__q)));
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
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_5_cdc__0(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_5_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_haa000d8d_0_0
                          [0x0890U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____VdfgRegularize_hb0abf62a_0_5));
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_6_cdc__2(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_6_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_6__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = (0x0000001fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_6_miodio_6__q) 
                                           << 4U) | 
                                          (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_6_filter_6__q) 
                                            << 3U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_6_mode_6__q)));
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
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_6_cdc__0(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_6_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_haa000d8d_0_0
                          [0x0894U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____VdfgRegularize_hb0abf62a_0_5));
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_7_cdc__2(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_7_cdc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.src_we_i)));
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.src_we_i) {
            vlSelfRef.__PVT__txn_bits_q = (((IData)(vlSelfRef.src_we_i) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_7__DOT__q));
            vlSelfRef.__PVT__src_busy_q = 1U;
            vlSelfRef.__PVT__src_q = (0x0000001fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_7_miodio_7__q) 
                                           << 4U) | 
                                          (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_7_filter_7__q) 
                                            << 3U) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_7_mode_7__q)));
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
}

void Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_7_cdc__0(Vsim_prim_reg_cdc__D5_Rz30_Bz7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D5_Rz30_Bz7___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_7_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_haa000d8d_0_0
                          [0x0898U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____VdfgRegularize_hb0abf62a_0_5));
}
