// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_flop_2sync__W1___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p__0(Vsim_prim_flop_2sync__W1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_prim_flop_2sync__W1___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host0.__Vcellinp__u_rst_mux__sel_i) 
                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host0__u_rst_sync.q_o));
    vlSelfRef.clk_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__clk_i) 
                       & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_peri_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
}

VL_ATTR_COLD void Vsim_prim_flop_2sync__W1___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync__0(Vsim_prim_flop_2sync__W1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_prim_flop_2sync__W1___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__scanmode) 
                              | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_pinmux_jtag_buf_lc__DOT__req_i) 
                                 >> 1U)));
    vlSelfRef.clk_i = (1U & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.clk_i) 
                              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__scanmode)) 
                             | ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__scanmode)) 
                                & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_pinmux_jtag_buf_lc__DOT__req_i) 
                                   >> 3U))));
}

VL_ATTR_COLD void Vsim_prim_flop_2sync__W1___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync__0(Vsim_prim_flop_2sync__W1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_prim_flop_2sync__W1___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__testmode) 
                              | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__jtag_in_int) 
                                 >> 1U)));
    vlSelfRef.clk_i = (1U & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_sw_test_status_if.clk_i) 
                              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__testmode)) 
                             | ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__testmode)) 
                                & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__jtag_in_int) 
                                   >> 3U))));
}

VL_ATTR_COLD void Vsim_prim_flop_2sync__W1___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__sync_wptr__0(Vsim_prim_flop_2sync__W1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_prim_flop_2sync__W1___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__sync_wptr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io.__Vcellinp__u_rst_mux__sel_i) 
                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io__u_rst_sync.q_o));
    vlSelfRef.clk_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__clk_i) 
                       & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_root_ctrl__DOT__u_cg__DOT__i_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
}

VL_ATTR_COLD void Vsim_prim_flop_2sync__W1___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__sync_wptr__0(Vsim_prim_flop_2sync__W1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_prim_flop_2sync__W1___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__sync_wptr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_usb.__Vcellinp__u_rst_mux__sel_i) 
                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_usb__u_rst_sync.q_o));
    vlSelfRef.clk_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__clk_i) 
                       & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_root_ctrl__DOT__u_cg__DOT__i_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
}

VL_ATTR_COLD void Vsim_prim_flop_2sync__W1___ctor_var_reset(Vsim_prim_flop_2sync__W1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_prim_flop_2sync__W1___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->d_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2330852176559559633ull);
    vlSelf->q_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12211521543721664862ull);
    vlSelf->__PVT__gen_generic__DOT__u_impl_generic__DOT__intq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14024158888575344455ull);
    vlSelf->__PVT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3915099140194611261ull);
    vlSelf->__Vdly__gen_generic__DOT__u_impl_generic__DOT__intq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15913946204892393507ull);
}
