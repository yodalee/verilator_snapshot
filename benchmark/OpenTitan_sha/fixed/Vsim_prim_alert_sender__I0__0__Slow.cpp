// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_alert_sender__I0___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__1(Vsim_prim_alert_sender__I0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I0___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alert_req_trigger = (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_edn_core__DOT__u_prim_edge_detector_recov_alert__DOT__q_sync_q)) 
                                           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_edn_core__DOT__u_prim_edge_detector_recov_alert__DOT__d_i)) 
                                          | (IData)(vlSelfRef.__PVT__alert_set_q));
}

extern const VlUnpacked<CData/*2:0*/, 512> Vsim__ConstPool__TABLE_hc773ee05_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_hd6c4ddd9_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_hcc28197f_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_hdf28c255_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_h2dcb2245_0;

VL_ATTR_COLD void Vsim_prim_alert_sender__I0___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2(Vsim_prim_alert_sender__I0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I0___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000018U) 
                                            & (3U == 
                                               (3U 
                                                & (- (IData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_alert_test_fatal_alert__DOT__we)))))) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_req_trigger) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx1 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                       | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                      << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                   ? 1U : 3U) << 5U) 
                                | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                    | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                   << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                << 3U) 
                                               | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx1];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx1];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx1];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx1];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx1];
}

VL_ATTR_COLD void Vsim_prim_alert_sender__I0___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2(Vsim_prim_alert_sender__I0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I0___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000018U) 
                                            & (3U == 
                                               (3U 
                                                & (- (IData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_alert_test_fatal_alert__DOT__we)))))) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_req_trigger) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx2 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                       | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                      << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                   ? 1U : 3U) << 5U) 
                                | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                    | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                   << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                << 3U) 
                                               | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx2];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx2];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx2];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx2];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx2];
}

VL_ATTR_COLD void Vsim_prim_alert_sender__I0___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_op_err_alert__0(Vsim_prim_alert_sender__I0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I0___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_op_err_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alert_req_trigger = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__op_err_req_q) 
                                          | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__ping_trigger = (((IData)(vlSelf->__PVT__u_decode_ping->__PVT__fall_o) 
                                      | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__rise_o)) 
                                     | (IData)(vlSelfRef.__PVT__ping_set_q));
}

VL_ATTR_COLD void Vsim_prim_alert_sender__I0___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__I0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I0___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_trigger = (((IData)(vlSelf->__PVT__u_decode_ping->__PVT__fall_o) 
                                      | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__rise_o)) 
                                     | (IData)(vlSelfRef.__PVT__ping_set_q));
    vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_edge_detector_recov_alert__DOT__q_sync_q)) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_edge_detector_recov_alert__DOT__d_i));
    vlSelfRef.__PVT__alert_req_trigger = ((IData)(vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
                                          | (IData)(vlSelfRef.__PVT__alert_set_q));
}

VL_ATTR_COLD void Vsim_prim_alert_sender__I0___ctor_var_reset(Vsim_prim_alert_sender__I0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I0___ctor_var_reset\n"); );
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
