// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_0_cdc__0(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_0_cdc__0\n"); );
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

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_0_cdc__1(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_0_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dst_req_from_src = ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__dst_level_q) 
                                         ^ (IData)(vlSelf->__PVT__u_src_to_dst_req__DOT__prim_flop_2sync->q_o));
}

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_0_cdc__2(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_0_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x8ffc1ffcU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_pd_ctl_cdc__DOT__src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_0_en_0__q) 
                                           << 0x0000001fU) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_0_max_v_0__q) 
                                              << 0x00000012U) 
                                             | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_0_cond_0__q) 
                                                 << 0x0000000cU) 
                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_0_min_v_0__q) 
                                                   << 2U))));
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

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_0_cdc__3(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_0_cdc__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__src_ack = ((IData)(vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
                                ^ (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
    vlSelfRef.__PVT__dst_to_src = ((IData)(vlSelfRef.__PVT__src_ack) 
                                   & (IData)(vlSelfRef.__PVT__src_busy_q));
}

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_0_cdc__4(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_0_cdc__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__src_level 
        = vlSelfRef.__Vdly__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__src_level;
}

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_0_cdc__0(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_0_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dst_we_o = (((IData)(vlSelfRef.__PVT__txn_bits_q) 
                           >> 2U) & (IData)(vlSelfRef.__PVT__dst_req_from_src));
}

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_0_cdc__1(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_0_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((9U == (0x0000001fU & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                  << 3U) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                    >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hc1fe516a_0_37));
}

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_1_cdc__2(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_1_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x8ffc1ffcU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_pd_ctl_cdc__DOT__src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_1_en_1__q) 
                                           << 0x0000001fU) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_1_max_v_1__q) 
                                              << 0x00000012U) 
                                             | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_1_cond_1__q) 
                                                 << 0x0000000cU) 
                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_1_min_v_1__q) 
                                                   << 2U))));
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

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_1_cdc__1(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_1_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x0aU == (0x0000001fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hc1fe516a_0_37));
}

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_2_cdc__2(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_2_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x8ffc1ffcU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_pd_ctl_cdc__DOT__src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_2_en_2__q) 
                                           << 0x0000001fU) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_2_max_v_2__q) 
                                              << 0x00000012U) 
                                             | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_2_cond_2__q) 
                                                 << 0x0000000cU) 
                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_2_min_v_2__q) 
                                                   << 2U))));
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

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_2_cdc__1(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_2_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x0bU == (0x0000001fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hc1fe516a_0_37));
}

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_3_cdc__2(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_3_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x8ffc1ffcU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_pd_ctl_cdc__DOT__src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_3_en_3__q) 
                                           << 0x0000001fU) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_3_max_v_3__q) 
                                              << 0x00000012U) 
                                             | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_3_cond_3__q) 
                                                 << 0x0000000cU) 
                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_3_min_v_3__q) 
                                                   << 2U))));
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

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_3_cdc__1(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_3_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x0cU == (0x0000001fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hc1fe516a_0_37));
}

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_4_cdc__2(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_4_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x8ffc1ffcU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_pd_ctl_cdc__DOT__src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_4_en_4__q) 
                                           << 0x0000001fU) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_4_max_v_4__q) 
                                              << 0x00000012U) 
                                             | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_4_cond_4__q) 
                                                 << 0x0000000cU) 
                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_4_min_v_4__q) 
                                                   << 2U))));
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

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_4_cdc__1(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_4_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x0dU == (0x0000001fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hc1fe516a_0_37));
}

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_5_cdc__2(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_5_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x8ffc1ffcU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_pd_ctl_cdc__DOT__src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_5_en_5__q) 
                                           << 0x0000001fU) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_5_max_v_5__q) 
                                              << 0x00000012U) 
                                             | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_5_cond_5__q) 
                                                 << 0x0000000cU) 
                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_5_min_v_5__q) 
                                                   << 2U))));
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

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_5_cdc__1(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_5_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x0eU == (0x0000001fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hc1fe516a_0_37));
}

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_6_cdc__2(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_6_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x8ffc1ffcU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_pd_ctl_cdc__DOT__src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_6_en_6__q) 
                                           << 0x0000001fU) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_6_max_v_6__q) 
                                              << 0x00000012U) 
                                             | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_6_cond_6__q) 
                                                 << 0x0000000cU) 
                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_6_min_v_6__q) 
                                                   << 2U))));
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

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_6_cdc__1(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_6_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x0fU == (0x0000001fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hc1fe516a_0_37));
}

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_7_cdc__2(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_7_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x8ffc1ffcU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_pd_ctl_cdc__DOT__src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_7_en_7__q) 
                                           << 0x0000001fU) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_7_max_v_7__q) 
                                              << 0x00000012U) 
                                             | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_7_cond_7__q) 
                                                 << 0x0000000cU) 
                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn0_filter_ctl_7_min_v_7__q) 
                                                   << 2U))));
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

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_7_cdc__1(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn0_filter_ctl_7_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x10U == (0x0000001fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hc1fe516a_0_37));
}

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_0_cdc__2(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_0_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x8ffc1ffcU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_pd_ctl_cdc__DOT__src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_0_en_0__q) 
                                           << 0x0000001fU) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_0_max_v_0__q) 
                                              << 0x00000012U) 
                                             | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_0_cond_0__q) 
                                                 << 0x0000000cU) 
                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_0_min_v_0__q) 
                                                   << 2U))));
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

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_0_cdc__1(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_0_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x11U == (0x0000001fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hc1fe516a_0_37));
}

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_1_cdc__2(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_1_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x8ffc1ffcU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_pd_ctl_cdc__DOT__src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_1_en_1__q) 
                                           << 0x0000001fU) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_1_max_v_1__q) 
                                              << 0x00000012U) 
                                             | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_1_cond_1__q) 
                                                 << 0x0000000cU) 
                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_1_min_v_1__q) 
                                                   << 2U))));
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

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_1_cdc__1(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_1_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x12U == (0x0000001fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hc1fe516a_0_37));
}

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_2_cdc__2(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_2_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x8ffc1ffcU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_pd_ctl_cdc__DOT__src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_2_en_2__q) 
                                           << 0x0000001fU) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_2_max_v_2__q) 
                                              << 0x00000012U) 
                                             | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_2_cond_2__q) 
                                                 << 0x0000000cU) 
                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_2_min_v_2__q) 
                                                   << 2U))));
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

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_2_cdc__1(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_2_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x13U == (0x0000001fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hc1fe516a_0_37));
}

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_3_cdc__2(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_3_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x8ffc1ffcU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_pd_ctl_cdc__DOT__src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_3_en_3__q) 
                                           << 0x0000001fU) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_3_max_v_3__q) 
                                              << 0x00000012U) 
                                             | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_3_cond_3__q) 
                                                 << 0x0000000cU) 
                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_3_min_v_3__q) 
                                                   << 2U))));
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

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_3_cdc__1(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_3_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x14U == (0x0000001fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hc1fe516a_0_37));
}

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_4_cdc__2(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_4_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x8ffc1ffcU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_pd_ctl_cdc__DOT__src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_4_en_4__q) 
                                           << 0x0000001fU) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_4_max_v_4__q) 
                                              << 0x00000012U) 
                                             | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_4_cond_4__q) 
                                                 << 0x0000000cU) 
                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_4_min_v_4__q) 
                                                   << 2U))));
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

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_4_cdc__1(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_4_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x15U == (0x0000001fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hc1fe516a_0_37));
}

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_5_cdc__2(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_5_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x8ffc1ffcU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_pd_ctl_cdc__DOT__src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_5_en_5__q) 
                                           << 0x0000001fU) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_5_max_v_5__q) 
                                              << 0x00000012U) 
                                             | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_5_cond_5__q) 
                                                 << 0x0000000cU) 
                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_5_min_v_5__q) 
                                                   << 2U))));
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

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_5_cdc__1(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_5_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x16U == (0x0000001fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hc1fe516a_0_37));
}

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_6_cdc__2(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_6_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x8ffc1ffcU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_pd_ctl_cdc__DOT__src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_6_en_6__q) 
                                           << 0x0000001fU) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_6_max_v_6__q) 
                                              << 0x00000012U) 
                                             | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_6_cond_6__q) 
                                                 << 0x0000000cU) 
                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_6_min_v_6__q) 
                                                   << 2U))));
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

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_6_cdc__1(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_6_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x17U == (0x0000001fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hc1fe516a_0_37));
}

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_7_cdc__2(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_7_cdc__2\n"); );
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
            vlSelfRef.__PVT__src_q = (0x8ffc1ffcU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_pd_ctl_cdc__DOT__src_wd_i);
        } else {
            if (vlSelfRef.__PVT__dst_to_src) {
                vlSelfRef.__PVT__txn_bits_q = 0U;
                vlSelfRef.__PVT__src_q = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_7_en_7__q) 
                                           << 0x0000001fU) 
                                          | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_7_max_v_7__q) 
                                              << 0x00000012U) 
                                             | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_7_cond_7__q) 
                                                 << 0x0000000cU) 
                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_chn1_filter_ctl_7_min_v_7__q) 
                                                   << 2U))));
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

void Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_7_cdc__1(Vsim_prim_reg_cdc__B8ffc1ffc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__B8ffc1ffc___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn1_filter_ctl_7_cdc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_we_i = ((0x18U == (0x0000001fU & 
                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____VdfgRegularize_hc1fe516a_0_37));
}
