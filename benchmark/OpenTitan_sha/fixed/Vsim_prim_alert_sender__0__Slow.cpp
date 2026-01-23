// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_alert_sender___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_measure_err__DOT__de) 
           | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_timeout_err__DOT__de) 
              | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_div2_measure_err__DOT__de) 
                 | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_div2_timeout_err__DOT__de) 
                    | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_div4_measure_err__DOT__de) 
                       | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_div4_timeout_err__DOT__de) 
                          | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_main_measure_err__DOT__de) 
                             | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_main_timeout_err__DOT__de) 
                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_usb_measure_err__DOT__de) 
                                   | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_shadow_update_err__DOT__de) 
                                      | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_usb_timeout_err__DOT__de)))))))))));
    vlSelfRef.__PVT__ping_trigger = (((IData)(vlSelf->__PVT__u_decode_ping->__PVT__fall_o) 
                                      | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__rise_o)) 
                                     | (IData)(vlSelfRef.__PVT__ping_set_q));
    vlSelfRef.__PVT__alert_req_trigger = ((IData)(vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
                                          | (IData)(vlSelfRef.__PVT__alert_set_q));
}

VL_ATTR_COLD void Vsim_prim_alert_sender___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__0(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alert_req_trigger = ((0U != (0x00000fffU 
                                                  & ((vlSymsp->TOP.__VdfgRegularize_he50b618e_0_958[2U] 
                                                      << 3U) 
                                                     | (vlSymsp->TOP.__VdfgRegularize_he50b618e_0_958[1U] 
                                                        >> 0x0000001dU)))) 
                                          | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__ping_trigger = (((IData)(vlSelf->__PVT__u_decode_ping->__PVT__fall_o) 
                                      | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__rise_o)) 
                                     | (IData)(vlSelfRef.__PVT__ping_set_q));
}

VL_ATTR_COLD void Vsim_prim_alert_sender___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__1(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ecc_error_o) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_prim_buf_alert_minor__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i));
    vlSelfRef.__PVT__alert_req_trigger = ((IData)(vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
                                          | (IData)(vlSelfRef.__PVT__alert_set_q));
}

extern const VlUnpacked<CData/*2:0*/, 512> Vsim__ConstPool__TABLE_hc773ee05_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_hd6c4ddd9_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_hcc28197f_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_hdf28c255_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_h2dcb2245_0;

VL_ATTR_COLD void Vsim_prim_alert_sender___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__2(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelfRef.alert_test_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_dbus_addr_matching_0__DOT__wd 
                               >> 3U) & (0x0000000fU 
                                         == (0x0000000fU 
                                             & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_alert_test_fatal_hw_err__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_req_trigger) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx8 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                       | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                      << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                   ? 1U : 3U) << 5U) 
                                | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                    | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                   << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                << 3U) 
                                               | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx8];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx8];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx8];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx8];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx8];
}

VL_ATTR_COLD void Vsim_prim_alert_sender___ctor_var_reset(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->alert_test_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17462262601123946775ull);
    vlSelf->alert_req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2967653272698415251ull);
    vlSelf->alert_ack_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5035762474647222145ull);
    vlSelf->__PVT__alert_state_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16538130280503528403ull);
    vlSelf->alert_rx_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3626835617410658616ull);
    vlSelf->alert_tx_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 268840600036833065ull);
    vlSelf->__PVT__state_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14154348034863170373ull);
    vlSelf->__PVT__state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14578357007859236226ull);
    vlSelf->__PVT__alert_pd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15912843319051513721ull);
    vlSelf->__PVT__alert_nd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2296402280898104743ull);
    vlSelf->__PVT__alert_set_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11636324003098006005ull);
    vlSelf->__PVT__alert_set_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2420539631998501609ull);
    vlSelf->__PVT__alert_clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13032352323795100004ull);
    vlSelf->__PVT__alert_test_set_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1898591458282920399ull);
    vlSelf->__PVT__ping_set_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16469075055425197591ull);
    vlSelf->__PVT__ping_clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14310796678677263235ull);
    vlSelf->__PVT__alert_req_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15292881152661575802ull);
    vlSelf->__PVT__alert_test_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7305396672946502687ull);
    vlSelf->__PVT__ping_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12816964357515214252ull);
    vlSelf->__PVT__alert_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 676603347776998452ull);
    vlSelf->__Vcellout__u_prim_flop_alert__q_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6781813045241873676ull);
    vlSelf->__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4754539413357182205ull);
}
