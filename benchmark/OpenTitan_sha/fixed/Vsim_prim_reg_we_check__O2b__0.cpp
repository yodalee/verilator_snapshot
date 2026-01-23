// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_reg_we_check__O2b___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_prim_reg_we_check__0(Vsim_prim_reg_we_check__O2b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_prim_reg_we_check__O2b___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_prim_reg_we_check__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_phy_pins_drive_d_o__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_phy_config_eop_single_bit__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_1_buffer_1__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_2_buffer_2__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_3_buffer_3__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_4_buffer_4__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_5_buffer_5__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_6_buffer_6__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_7_buffer_7__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_8_buffer_8__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_9_buffer_9__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_10_buffer_10__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_usbctrl_device_address__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_ep_out_enable_enable_0__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_11_buffer_11__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_out_iso_iso_0__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rxenable_out_out_0__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_set_nak_out_enable_0__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_in_stall_endpoint_0__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_0_buffer_0__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_in_sent_sent_0__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_out_stall_endpoint_0__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_intr_state_av_overflow__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_intr_enable_av_out_empty__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_count_in_endpoints__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_count_nodata_in_endpoints__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_fifo_ctrl_avout_rst__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_count_out_datatog_out__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_in_iso_iso_0__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_out_data_toggle_mask__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_avoutbuffer__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_avsetupbuffer__DOT__we));
    vlSelfRef.__PVT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (((QData)((IData)((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_count_errors_bitstuff__DOT__we) 
                              << 2U) | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_count_nodata_in_endpoints__DOT__we) 
                                         << 1U) | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_count_in_endpoints__DOT__we))))) 
            << 0x00000028U) | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_count_out_datatog_out__DOT__we)) 
                                << 0x00000027U) | (
                                                   ((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_fifo_ctrl_avout_rst__DOT__we)) 
                                                    << 0x00000026U) 
                                                   | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_control_cdc__DOT__src_we_i)) 
                                                       << 0x00000024U) 
                                                      | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_phy_config_eop_single_bit__DOT__we)) 
                                                          << 0x00000023U) 
                                                         | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_phy_pins_drive_d_o__DOT__we)) 
                                                             << 0x00000022U) 
                                                            | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_in_data_toggle_mask__DOT__we)) 
                                                                << 0x00000020U) 
                                                               | (QData)((IData)(
                                                                                (((((((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_out_data_toggle_mask__DOT__we) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_in_iso_iso_0__DOT__we) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_out_iso_iso_0__DOT__we) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_11_buffer_11__DOT__we))) 
                                                                                << 0x0000000cU) 
                                                                                | (((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_10_buffer_10__DOT__we) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_9_buffer_9__DOT__we) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_8_buffer_8__DOT__we) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_7_buffer_7__DOT__we))) 
                                                                                << 8U)) 
                                                                                | ((((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_6_buffer_6__DOT__we) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_5_buffer_5__DOT__we) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_4_buffer_4__DOT__we) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_3_buffer_3__DOT__we))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_2_buffer_2__DOT__we) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_1_buffer_1__DOT__we) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_0_buffer_0__DOT__we) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_in_stall_endpoint_0__DOT__we))))) 
                                                                                << 0x00000010U) 
                                                                                | ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_out_stall_endpoint_0__DOT__we) 
                                                                                << 0x0000000fU) 
                                                                                | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_in_sent_sent_0__DOT__we) 
                                                                                << 0x0000000eU) 
                                                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_set_nak_out_enable_0__DOT__we) 
                                                                                << 0x0000000dU))) 
                                                                                | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rxenable_out_out_0__DOT__we) 
                                                                                << 0x0000000cU) 
                                                                                | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rxenable_setup_setup_0__DOT__we) 
                                                                                << 0x0000000bU) 
                                                                                | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_avsetupbuffer__DOT__we) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_avoutbuffer__DOT__we) 
                                                                                << 8U) 
                                                                                | ((((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_ep_in_enable_enable_0__DOT__we) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_ep_out_enable_enable_0__DOT__we) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_usbctrl_device_address__DOT__we) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_alert_test__DOT__we))) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_intr_test_av_out_empty__DOT__we) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_intr_enable_av_out_empty__DOT__we) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_intr_state_av_overflow__DOT__we)))))))))))))))))));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_intr_test_av_out_empty__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_alert_test__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_in_data_toggle_mask__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_ep_in_enable_enable_0__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_count_errors_bitstuff__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_control_cdc__DOT__src_we_i) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rxenable_setup_setup_0__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__err_tree__BRA__1__KET__ 
        = (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
            & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__)) 
           | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
                & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
               | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
                    & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__)) 
                   | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__) 
                        & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__)) 
                       | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_intr_state_av_overflow__DOT__we) 
                           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_intr_enable_av_out_empty__DOT__we)) 
                          | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_intr_test_av_out_empty__DOT__we) 
                             & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_alert_test__DOT__we)))) 
                      | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_ep_in_enable_enable_0__DOT__we)) 
                         | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_usbctrl_device_address__DOT__we) 
                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_ep_out_enable_enable_0__DOT__we))))) 
                  | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
                      & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__)) 
                     | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rxenable_setup_setup_0__DOT__we)) 
                         | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_avoutbuffer__DOT__we) 
                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_avsetupbuffer__DOT__we))) 
                        | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__) 
                            & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__)) 
                           | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rxenable_out_out_0__DOT__we) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_set_nak_out_enable_0__DOT__we)) 
                              | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_in_sent_sent_0__DOT__we) 
                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_out_stall_endpoint_0__DOT__we)))))))) 
              | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
                  & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__)) 
                 | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
                      & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__)) 
                     | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__) 
                          & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__)) 
                         | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_in_stall_endpoint_0__DOT__we) 
                             & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_0_buffer_0__DOT__we)) 
                            | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_1_buffer_1__DOT__we) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_2_buffer_2__DOT__we)))) 
                        | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__) 
                            & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__)) 
                           | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_3_buffer_3__DOT__we) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_4_buffer_4__DOT__we)) 
                              | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_5_buffer_5__DOT__we) 
                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_6_buffer_6__DOT__we)))))) 
                    | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
                        & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__)) 
                       | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__) 
                            & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__)) 
                           | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_7_buffer_7__DOT__we) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_8_buffer_8__DOT__we)) 
                              | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_9_buffer_9__DOT__we) 
                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_10_buffer_10__DOT__we)))) 
                          | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__) 
                              & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__)) 
                             | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_configin_11_buffer_11__DOT__we) 
                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_out_iso_iso_0__DOT__we)) 
                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_in_iso_iso_0__DOT__we) 
                                   & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_out_data_toggle_mask__DOT__we))))))))));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__err_o 
        = ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
             & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__)) 
            | ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__err_tree__BRA__1__KET__) 
               | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
                   & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__)) 
                  | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__) 
                       & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__)) 
                      | ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_in_data_toggle_mask__DOT__we) 
                           & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__)) 
                          | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_phy_pins_drive_d_o__DOT__we) 
                             & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_phy_config_eop_single_bit__DOT__we))) 
                         | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_control_cdc__DOT__src_we_i) 
                             & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__)) 
                            | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_fifo_ctrl_avout_rst__DOT__we) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_count_out_datatog_out__DOT__we))))) 
                     | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__) 
                         & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_count_errors_bitstuff__DOT__we)) 
                        | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_count_in_endpoints__DOT__we) 
                           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_count_nodata_in_endpoints__DOT__we))))))) 
           | ((~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__addrmiss)) 
                  & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_reg_if__DOT__we_o))) 
              & ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
                 | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__))));
}

void Vsim_prim_reg_we_check__O2b___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_prim_reg_we_check__0(Vsim_prim_reg_we_check__O2b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_prim_reg_we_check__O2b___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_prim_reg_we_check__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__src_we_i) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_combo_intr_status_combo0_h2l__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__src_we_i) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__src_we_i));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__src_we_i) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__src_we_i));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__src_we_i) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__src_we_i));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__src_we_i) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__src_we_i));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__src_we_i) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__src_we_i));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__src_we_i));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_status__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__src_we_i));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_intr_test__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_alert_test__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__ 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_1_cdc.src_we_i) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_2_cdc.src_we_i));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__ 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_3_cdc.src_we_i) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__src_we_i));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__ 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_3_cdc.src_we_i) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_we_i));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__ 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_1_cdc.src_we_i) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_2_cdc.src_we_i));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__src_we_i) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ctl_cdc.src_we_i));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__src_we_i) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_0_cdc.src_we_i));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__ 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_1_cdc.src_we_i) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_2_cdc.src_we_i));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__ 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_3_cdc.src_we_i) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_0_cdc.src_we_i));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__ 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_3_cdc.src_we_i) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_0_cdc.src_we_i));
    vlSelfRef.__PVT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (((QData)((IData)(((((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_ac_present_h2l__DOT__we) 
                                 << 5U) | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_combo_intr_status_combo0_h2l__DOT__we) 
                                            << 4U) 
                                           | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__src_we_i) 
                                              << 3U))) 
                               | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__src_we_i) 
                                   << 2U) | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__src_we_i) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__src_we_i)))) 
                              << 5U) | ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_3_cdc.src_we_i) 
                                          << 4U) | 
                                         (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_2_cdc.src_we_i) 
                                           << 3U) | 
                                          ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_1_cdc.src_we_i) 
                                           << 2U))) 
                                        | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_we_i) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_3_cdc.src_we_i)))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_2_cdc.src_we_i) 
                                                    << 3U) 
                                                   | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_1_cdc.src_we_i) 
                                                      << 2U)) 
                                                  | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_0_cdc.src_we_i) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_3_cdc.src_we_i))) 
                                                 << 0x0000001cU) 
                                                | (((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_2_cdc.src_we_i) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_1_cdc.src_we_i) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_0_cdc.src_we_i) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_3_cdc.src_we_i))) 
                                                   << 0x00000018U)) 
                                               | ((((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_2_cdc.src_we_i) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_1_cdc.src_we_i) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_0_cdc.src_we_i) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__src_we_i))) 
                                                   << 0x00000014U) 
                                                  | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__src_we_i) 
                                                      << 0x00000013U) 
                                                     | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__src_we_i) 
                                                         << 0x00000012U) 
                                                        | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__src_we_i) 
                                                            << 0x00000011U) 
                                                           | (((((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__src_we_i) 
                                                                   << 3U) 
                                                                  | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__src_we_i) 
                                                                     << 2U)) 
                                                                 | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__src_we_i) 
                                                                     << 1U) 
                                                                    | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__src_we_i))) 
                                                                << 0x0000000cU) 
                                                               | (((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__src_we_i) 
                                                                     << 3U) 
                                                                    | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_status__DOT__we) 
                                                                       << 2U)) 
                                                                   | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ctl_cdc.src_we_i) 
                                                                       << 1U) 
                                                                      | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__src_we_i))) 
                                                                  << 8U)) 
                                                              | ((((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__src_we_i) 
                                                                     << 3U) 
                                                                    | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__src_we_i) 
                                                                       << 2U)) 
                                                                   | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__src_we_i) 
                                                                       << 1U) 
                                                                      | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__we))) 
                                                                  << 4U) 
                                                                 | ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_alert_test__DOT__we) 
                                                                      << 3U) 
                                                                     | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_intr_test__DOT__we) 
                                                                        << 2U)) 
                                                                    | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_intr_enable__DOT__we) 
                                                                       << 1U))))))))))));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__ 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_1_cdc.src_we_i) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_2_cdc.src_we_i));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_ac_present_h2l__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__src_we_i) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_intr_enable__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__err_tree__BRA__1__KET__ 
        = (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
            & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__)) 
           | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
                & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
               | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
                    & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__)) 
                   | ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_intr_enable__DOT__we) 
                        & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__)) 
                       | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_intr_test__DOT__we) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_alert_test__DOT__we))) 
                      | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__) 
                          & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__)) 
                         | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__we) 
                             & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__src_we_i)) 
                            | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__src_we_i) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__src_we_i)))))) 
                  | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
                      & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__)) 
                     | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__) 
                          & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__)) 
                         | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__src_we_i) 
                             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ctl_cdc.src_we_i)) 
                            | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_status__DOT__we) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__src_we_i)))) 
                        | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__) 
                            & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__)) 
                           | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__src_we_i) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__src_we_i)) 
                              | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__src_we_i) 
                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__src_we_i)))))))) 
              | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
                  & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__)) 
                 | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
                      & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__)) 
                     | ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__src_we_i) 
                          & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__)) 
                         | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__src_we_i) 
                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__src_we_i))) 
                        | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__) 
                            & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__)) 
                           | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__src_we_i) 
                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_0_cdc.src_we_i)) 
                              | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_1_cdc.src_we_i) 
                                 & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_2_cdc.src_we_i)))))) 
                    | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
                        & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__)) 
                       | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__) 
                            & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__)) 
                           | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_sel_ctl_3_cdc.src_we_i) 
                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_0_cdc.src_we_i)) 
                              | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_1_cdc.src_we_i) 
                                 & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_2_cdc.src_we_i)))) 
                          | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__) 
                              & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__)) 
                             | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_pre_det_ctl_3_cdc.src_we_i) 
                                 & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_0_cdc.src_we_i)) 
                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_1_cdc.src_we_i) 
                                   & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_2_cdc.src_we_i))))))))));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__err_o 
        = ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
             & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__)) 
            | ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__err_tree__BRA__1__KET__) 
               | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
                   & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__)) 
                  | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__) 
                       & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__)) 
                      | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__) 
                           & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__)) 
                          | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_sel_ctl_3_cdc.src_we_i) 
                              & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_we_i)) 
                             | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_1_cdc.src_we_i) 
                                & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_2_cdc.src_we_i)))) 
                         | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__) 
                             & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__)) 
                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_3_cdc.src_we_i) 
                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__src_we_i)) 
                               | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__src_we_i) 
                                  & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__src_we_i)))))) 
                     | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__) 
                         & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_ac_present_h2l__DOT__we)) 
                        | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__src_we_i) 
                           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_combo_intr_status_combo0_h2l__DOT__we))))))) 
           | ((~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__addrmiss)) 
                  & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__we_o))) 
              & ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
                 | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__))));
}
