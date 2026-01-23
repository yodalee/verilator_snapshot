// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlUnpacked<IData/*19:0*/, 256> Vsim__ConstPool__TABLE_he633c569_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vsim__ConstPool__TABLE_hb753c260_0;
extern const VlUnpacked<IData/*31:0*/, 256> Vsim__ConstPool__TABLE_hb349ab12_0;

VL_ATTR_COLD void Vsim_edn__Az22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__0(Vsim_edn__Az22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_edn__Az22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__0__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__0__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__0__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__0__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__0__payload;
    __Vfunc_extract_d2h_rsp_intg__0__payload = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__3__Vfuncout;
    __Vfunc_mubi4_test_invalid__3__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__3__val;
    __Vfunc_mubi4_test_invalid__3__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__4__Vfuncout;
    __Vfunc_mubi4_test_true_strict__4__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__4__val;
    __Vfunc_mubi4_test_true_strict__4__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__5__Vfuncout;
    __Vfunc_mubi4_test_true_strict__5__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__5__val;
    __Vfunc_mubi4_test_true_strict__5__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__6__Vfuncout;
    __Vfunc_mubi4_test_true_strict__6__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__6__val;
    __Vfunc_mubi4_test_true_strict__6__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__7__Vfuncout;
    __Vfunc_mubi4_test_true_strict__7__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__7__val;
    __Vfunc_mubi4_test_true_strict__7__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__8__Vfuncout;
    __Vfunc_mubi4_test_true_strict__8__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__8__val;
    __Vfunc_mubi4_test_true_strict__8__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__9__Vfuncout;
    __Vfunc_mubi4_test_true_strict__9__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__9__val;
    __Vfunc_mubi4_test_true_strict__9__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__10__Vfuncout;
    __Vfunc_mubi4_test_true_strict__10__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__10__val;
    __Vfunc_mubi4_test_true_strict__10__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__11__Vfuncout;
    __Vfunc_mubi4_test_true_strict__11__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__11__val;
    __Vfunc_mubi4_test_true_strict__11__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__12__Vfuncout;
    __Vfunc_mubi4_test_true_strict__12__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__12__val;
    __Vfunc_mubi4_test_true_strict__12__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__13__Vfuncout;
    __Vfunc_mubi4_test_true_strict__13__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__13__val;
    __Vfunc_mubi4_test_true_strict__13__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__14__Vfuncout;
    __Vfunc_mubi4_test_true_strict__14__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__14__val;
    __Vfunc_mubi4_test_true_strict__14__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__15__Vfuncout;
    __Vfunc_mubi4_test_true_strict__15__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__15__val;
    __Vfunc_mubi4_test_true_strict__15__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__16__Vfuncout;
    __Vfunc_mubi4_test_true_strict__16__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__16__val;
    __Vfunc_mubi4_test_true_strict__16__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__17__Vfuncout;
    __Vfunc_mubi4_test_true_strict__17__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__17__val;
    __Vfunc_mubi4_test_true_strict__17__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__18__Vfuncout;
    __Vfunc_mubi4_test_true_strict__18__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__18__val;
    __Vfunc_mubi4_test_true_strict__18__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__19__Vfuncout;
    __Vfunc_mubi4_test_true_strict__19__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__19__val;
    __Vfunc_mubi4_test_true_strict__19__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__20__Vfuncout;
    __Vfunc_mubi4_test_true_strict__20__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__20__val;
    __Vfunc_mubi4_test_true_strict__20__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__21__Vfuncout;
    __Vfunc_mubi4_test_true_strict__21__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__21__val;
    __Vfunc_mubi4_test_true_strict__21__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__22__Vfuncout;
    __Vfunc_mubi4_test_true_strict__22__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__22__val;
    __Vfunc_mubi4_test_true_strict__22__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__23__Vfuncout;
    __Vfunc_mubi4_test_invalid__23__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__23__val;
    __Vfunc_mubi4_test_invalid__23__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__24__Vfuncout;
    __Vfunc_mubi4_test_true_strict__24__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__24__val;
    __Vfunc_mubi4_test_true_strict__24__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__25__Vfuncout;
    __Vfunc_mubi4_test_true_strict__25__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__25__val;
    __Vfunc_mubi4_test_true_strict__25__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__26__Vfuncout;
    __Vfunc_mubi4_test_true_strict__26__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__26__val;
    __Vfunc_mubi4_test_true_strict__26__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__27__Vfuncout;
    __Vfunc_mubi4_test_true_strict__27__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__27__val;
    __Vfunc_mubi4_test_true_strict__27__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__28__Vfuncout;
    __Vfunc_mubi4_test_invalid__28__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__28__val;
    __Vfunc_mubi4_test_invalid__28__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__29__Vfuncout;
    __Vfunc_mubi4_test_invalid__29__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__29__val;
    __Vfunc_mubi4_test_invalid__29__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__30__Vfuncout;
    __Vfunc_mubi4_test_true_strict__30__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__30__val;
    __Vfunc_mubi4_test_true_strict__30__val = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1463;
    __VdfgRegularize_h6e95ff9d_0_1463 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1464;
    __VdfgRegularize_h6e95ff9d_0_1464 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1465;
    __VdfgRegularize_h6e95ff9d_0_1465 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1466;
    __VdfgRegularize_h6e95ff9d_0_1466 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1467;
    __VdfgRegularize_h6e95ff9d_0_1467 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1468;
    __VdfgRegularize_h6e95ff9d_0_1468 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I(((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                << 5U) | (((0x0025U 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 4U) | 
                                          ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                              | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                  << 2U) | (((0x018eU 
                                              == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                             << 1U) 
                                            | (0x0132U 
                                               == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))))) {
        if ((0U != ((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                      << 5U) | (((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                 << 4U) | ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                    | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                        << 2U) | (((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                   << 1U) | (0x0132U 
                                             == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: edn_ack_sm.sv:60: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn0.u_edn_core.gen_ep_blk[0].u_edn_ack_sm_ep: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/edn_ack_sm.sv", 60, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                << 5U) | (((0x0025U 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 4U) | 
                                          ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                              | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                  << 2U) | (((0x018eU 
                                              == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                             << 1U) 
                                            | (0x0132U 
                                               == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))))) {
        if ((0U != ((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                      << 5U) | (((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                 << 4U) | ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                    | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                        << 2U) | (((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                   << 1U) | (0x0132U 
                                             == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: edn_ack_sm.sv:60: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn0.u_edn_core.gen_ep_blk[1].u_edn_ack_sm_ep: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/edn_ack_sm.sv", 60, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                << 5U) | (((0x0025U 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 4U) | 
                                          ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                              | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                  << 2U) | (((0x018eU 
                                              == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                             << 1U) 
                                            | (0x0132U 
                                               == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))))) {
        if ((0U != ((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                      << 5U) | (((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                 << 4U) | ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                    | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                        << 2U) | (((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                   << 1U) | (0x0132U 
                                             == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: edn_ack_sm.sv:60: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn0.u_edn_core.gen_ep_blk[2].u_edn_ack_sm_ep: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/edn_ack_sm.sv", 60, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                << 5U) | (((0x0025U 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 4U) | 
                                          ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                              | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                  << 2U) | (((0x018eU 
                                              == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                             << 1U) 
                                            | (0x0132U 
                                               == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))))) {
        if ((0U != ((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                      << 5U) | (((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                 << 4U) | ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                    | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                        << 2U) | (((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                   << 1U) | (0x0132U 
                                             == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: edn_ack_sm.sv:60: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn0.u_edn_core.gen_ep_blk[3].u_edn_ack_sm_ep: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/edn_ack_sm.sv", 60, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                << 5U) | (((0x0025U 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 4U) | 
                                          ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                              | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                  << 2U) | (((0x018eU 
                                              == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                             << 1U) 
                                            | (0x0132U 
                                               == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))))) {
        if ((0U != ((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                      << 5U) | (((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                 << 4U) | ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                    | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                        << 2U) | (((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                   << 1U) | (0x0132U 
                                             == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: edn_ack_sm.sv:60: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn0.u_edn_core.gen_ep_blk[4].u_edn_ack_sm_ep: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/edn_ack_sm.sv", 60, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                << 5U) | (((0x0025U 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 4U) | 
                                          ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                              | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                  << 2U) | (((0x018eU 
                                              == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                             << 1U) 
                                            | (0x0132U 
                                               == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))))) {
        if ((0U != ((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                      << 5U) | (((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                 << 4U) | ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                    | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                        << 2U) | (((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                   << 1U) | (0x0132U 
                                             == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: edn_ack_sm.sv:60: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn0.u_edn_core.gen_ep_blk[5].u_edn_ack_sm_ep: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/edn_ack_sm.sv", 60, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                << 5U) | (((0x0025U 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 4U) | 
                                          ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                              | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                  << 2U) | (((0x018eU 
                                              == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                             << 1U) 
                                            | (0x0132U 
                                               == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))))) {
        if ((0U != ((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                      << 5U) | (((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                 << 4U) | ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                    | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                        << 2U) | (((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                   << 1U) | (0x0132U 
                                             == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: edn_ack_sm.sv:60: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn0.u_edn_core.gen_ep_blk[6].u_edn_ack_sm_ep: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/edn_ack_sm.sv", 60, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                << 5U) | (((0x0025U 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 4U) | 
                                          ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                              | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                  << 2U) | (((0x018eU 
                                              == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                             << 1U) 
                                            | (0x0132U 
                                               == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))))) {
        if ((0U != ((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                      << 5U) | (((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                 << 4U) | ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                    | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                        << 2U) | (((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                   << 1U) | (0x0132U 
                                             == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: edn_ack_sm.sv:60: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn0.u_edn_core.gen_ep_blk[7].u_edn_ack_sm_ep: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/edn_ack_sm.sv", 60, "");
            }
        }
    }
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__data_i[0U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [0U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__data_i[1U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [1U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__data_i[2U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [2U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__data_i[3U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [3U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__data_i[4U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [4U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__data_i[5U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [5U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__data_i[6U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [6U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__data_i[7U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [7U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__gen_nodatapath__DOT__unused_data[0U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [0U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__gen_nodatapath__DOT__unused_data[1U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [1U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__gen_nodatapath__DOT__unused_data[2U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [2U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__gen_nodatapath__DOT__unused_data[3U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [3U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__gen_nodatapath__DOT__unused_data[4U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [4U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__gen_nodatapath__DOT__unused_data[5U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [5U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__gen_nodatapath__DOT__unused_data[6U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [6U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__gen_nodatapath__DOT__unused_data[7U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [7U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__d_ack 
        = ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q));
    __Vfunc_mubi4_test_true_strict__18__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__18__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__18__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__15__KET__ 
        = __Vfunc_mubi4_test_true_strict__18__Vfuncout;
    __Vfunc_mubi4_test_true_strict__20__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__20__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__20__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__17__KET__ 
        = __Vfunc_mubi4_test_true_strict__20__Vfuncout;
    __Vfunc_mubi4_test_true_strict__13__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__13__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__13__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__10__KET__ 
        = __Vfunc_mubi4_test_true_strict__13__Vfuncout;
    __Vfunc_mubi4_test_true_strict__19__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__19__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__19__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__16__KET__ 
        = __Vfunc_mubi4_test_true_strict__19__Vfuncout;
    VL_SHIFTR_WWI(128,128,32, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, 
                  VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q), 5U));
    __Vfunc_mubi4_test_true_strict__11__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__11__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__11__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__8__KET__ 
        = __Vfunc_mubi4_test_true_strict__11__Vfuncout;
    __Vfunc_mubi4_test_true_strict__10__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__10__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__10__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__7__KET__ 
        = __Vfunc_mubi4_test_true_strict__10__Vfuncout;
    VL_SHIFTR_WWI(128,128,32, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, 
                  VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q), 5U));
    VL_SHIFTR_WWI(128,128,32, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, 
                  VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q), 5U));
    __Vfunc_mubi4_test_true_strict__12__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__12__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__12__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__9__KET__ 
        = __Vfunc_mubi4_test_true_strict__12__Vfuncout;
    vlSelfRef.__VdfgRegularize_h4a41a239_1_3 = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                 << 1U) 
                                                | (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
    VL_SHIFTR_WWI(128,128,32, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, 
                  VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q), 5U));
    VL_SHIFTR_WWI(128,128,32, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, 
                  VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q), 5U));
    VL_SHIFTR_WWI(128,128,32, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, 
                  VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q), 5U));
    __Vfunc_mubi4_test_true_strict__17__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__17__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__17__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__14__KET__ 
        = __Vfunc_mubi4_test_true_strict__17__Vfuncout;
    __Vfunc_mubi4_test_true_strict__26__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_cmd_fifo_rst__q;
    __Vfunc_mubi4_test_true_strict__26__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__26__val));
    vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_fo__BRA__3__KET__ 
        = __Vfunc_mubi4_test_true_strict__26__Vfuncout;
    VL_SHIFTR_WWI(128,128,32, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, 
                  VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q), 5U));
    __Vfunc_mubi4_test_true_strict__5__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__5__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__5__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__2__KET__ 
        = __Vfunc_mubi4_test_true_strict__5__Vfuncout;
    __Vfunc_mubi4_test_true_strict__6__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__6__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__6__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__3__KET__ 
        = __Vfunc_mubi4_test_true_strict__6__Vfuncout;
    __Vfunc_mubi4_test_true_strict__24__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_cmd_fifo_rst__q;
    __Vfunc_mubi4_test_true_strict__24__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__24__val));
    vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_fo__BRA__1__KET__ 
        = __Vfunc_mubi4_test_true_strict__24__Vfuncout;
    __Vfunc_mubi4_test_true_strict__25__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_cmd_fifo_rst__q;
    __Vfunc_mubi4_test_true_strict__25__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__25__val));
    vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_fo__BRA__2__KET__ 
        = __Vfunc_mubi4_test_true_strict__25__Vfuncout;
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    __Vfunc_mubi4_test_true_strict__7__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__7__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__7__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__4__KET__ 
        = __Vfunc_mubi4_test_true_strict__7__Vfuncout;
    __Vfunc_mubi4_test_true_strict__8__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__8__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__8__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__5__KET__ 
        = __Vfunc_mubi4_test_true_strict__8__Vfuncout;
    __Vfunc_mubi4_test_true_strict__9__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__9__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__9__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__6__KET__ 
        = __Vfunc_mubi4_test_true_strict__9__Vfuncout;
    VL_SHIFTR_WWI(128,128,32, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, 
                  VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q), 5U));
    __Vfunc_mubi4_test_invalid__3__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_invalid__3__Vfuncout = (1U & 
                                               (~ (
                                                   (6U 
                                                    == (IData)(__Vfunc_mubi4_test_invalid__3__val)) 
                                                   | (9U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__3__val)))));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_pfa 
        = __Vfunc_mubi4_test_invalid__3__Vfuncout;
    __Vfunc_mubi4_test_invalid__23__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_cmd_fifo_rst__q;
    __Vfunc_mubi4_test_invalid__23__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__23__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__23__val)))));
    vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_pfa 
        = __Vfunc_mubi4_test_invalid__23__Vfuncout;
    __Vfunc_mubi4_test_invalid__28__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_auto_req_mode__q;
    __Vfunc_mubi4_test_invalid__28__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__28__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__28__val)))));
    vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfa 
        = __Vfunc_mubi4_test_invalid__28__Vfuncout;
    __Vfunc_mubi4_test_invalid__29__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_boot_req_mode__q;
    __Vfunc_mubi4_test_invalid__29__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__29__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__29__val)))));
    vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_pfa 
        = __Vfunc_mubi4_test_invalid__29__Vfuncout;
    __Vfunc_mubi4_test_true_strict__15__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__15__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__15__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__12__KET__ 
        = __Vfunc_mubi4_test_true_strict__15__Vfuncout;
    __Vfunc_mubi4_test_true_strict__4__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__4__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__4__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__1__KET__ 
        = __Vfunc_mubi4_test_true_strict__4__Vfuncout;
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_0 
        = ((0U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_err_code_test__q)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__err_code_test_qe));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_1 
        = ((1U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_err_code_test__q)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__err_code_test_qe));
    __Vfunc_mubi4_test_true_strict__14__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__14__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__14__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__11__KET__ 
        = __Vfunc_mubi4_test_true_strict__14__Vfuncout;
    VL_SHIFTR_WWI(128,128,32, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i, vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_q, 
                  VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__ptr_q), 7U));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__ready_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__clr_q)) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__depth_q));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           == (0x10U ^ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           == (0x10U ^ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__depth_q)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__clr_q))));
    __Vfunc_mubi4_test_true_strict__22__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__22__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__22__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__ 
        = __Vfunc_mubi4_test_true_strict__22__Vfuncout;
    __Vfunc_mubi4_test_true_strict__27__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_auto_req_mode__q;
    __Vfunc_mubi4_test_true_strict__27__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__27__val));
    vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfe 
        = __Vfunc_mubi4_test_true_strict__27__Vfuncout;
    __Vfunc_mubi4_test_true_strict__30__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_boot_req_mode__q;
    __Vfunc_mubi4_test_true_strict__30__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__30__val));
    vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_fo 
        = __Vfunc_mubi4_test_true_strict__30__Vfuncout;
    __Vfunc_mubi4_test_true_strict__16__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__16__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__16__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__ 
        = __Vfunc_mubi4_test_true_strict__16__Vfuncout;
    __Vfunc_mubi4_test_true_strict__21__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__21__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__21__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__18__KET__ 
        = __Vfunc_mubi4_test_true_strict__21__Vfuncout;
    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 0U;
    if ((0x00000100U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                            }
                        } else {
                            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                            } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                            }
                        } else {
                            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            }
        } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            }
        } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
        } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            }
        } else {
            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
        }
    } else if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            }
        } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                            }
                        } else {
                            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            }
        } else {
            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
        }
    } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            }
        } else {
            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
        } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            }
        } else {
            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            }
        } else {
            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
    } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
    } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
        }
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
    }
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_3 
        = ((0x15U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_err_code_test__q)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__err_code_test_qe));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_4 
        = ((0x16U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_err_code_test__q)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__err_code_test_qe));
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 0U;
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_2 
        = ((0x14U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_err_code_test__q)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__err_code_test_qe));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__err_o 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__err_q) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__err_q));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__err_o 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__err_q) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__err_q));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q));
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rdata[2U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rdata[7U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rdata[4U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1390[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(vlSelfRef.__VdfgRegularize_h4a41a239_1_3))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1390[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1390[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(vlSelfRef.__VdfgRegularize_h4a41a239_1_3))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1390[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1390[1U]) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1390[2U] 
        = (1U & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rdata[6U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rdata[1U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rdata[0U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rdata[3U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rdata[5U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted[0U];
    __Vtableidx2 = (((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_0) 
                     << 7U) | (((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_1) 
                                << 6U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__err_code_test_qe) 
                                           << 5U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_err_code_test__q))));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_24 
        = Vsim__ConstPool__TABLE_he633c569_0[__Vtableidx2];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[0U][0U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[0U][1U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[0U][2U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[0U][3U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[1U][0U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[1U][1U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[1U][2U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[1U][3U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[2U][0U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[2U][1U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[2U][2U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[2U][3U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[3U][0U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[3U][1U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[3U][2U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[3U][3U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[4U][0U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[4U][1U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[4U][2U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[4U][3U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[5U][0U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[5U][1U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[5U][2U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[5U][3U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[6U][0U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[6U][1U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[6U][2U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[6U][3U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[7U][0U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[7U][1U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[7U][2U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[7U][3U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_main_sm_err__DOT__de 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err) 
           | (IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_3));
    vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_cntr_err__DOT__de 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__err_q) 
           | (IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_4));
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 1U;
                    }
                }
            }
        }
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 1U;
                    }
                }
            }
        }
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 1U;
                    }
                }
            }
        }
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 1U;
                    }
                }
            }
        }
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 1U;
                    }
                }
            }
        }
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 1U;
                    }
                }
            }
        }
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 1U;
                    }
                }
            }
        }
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_ack_sm_err__DOT__de 
        = (((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o) 
            | ((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o) 
               | ((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o) 
                  | ((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o) 
                     | ((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o) 
                        | ((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o) 
                           | ((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o) 
                              | (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o)))))))) 
           | (IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_2));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_19 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__fifo_empty) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__full_o)) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__err_o));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_22 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__fifo_empty) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__full_o)) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__err_o));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_33 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__err_o) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__err_o));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__req_i 
        = (((((((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o)) 
                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_edn_if__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o)) 
               << 3U) | (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o)) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o)) 
                         << 2U)) | ((((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o)) 
                                      & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o)) 
                                     << 1U) | ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_edn_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o)))) 
            << 4U) | (((((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o)) 
                         & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o)) 
                        << 3U) | (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o)) 
                                   & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__edn_req)) 
                                  << 2U)) | ((((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_edn_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o)) 
                                              << 1U) 
                                             | ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reseed_ctrl__DOT__u_edn_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o)))));
    __Vfunc_extract_d2h_rsp_intg__0__tl[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1390[0U];
    __Vfunc_extract_d2h_rsp_intg__0__tl[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1390[1U];
    __Vfunc_extract_d2h_rsp_intg__0__tl[2U] = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                                                << 1U) 
                                               | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1390[2U]);
    __Vfunc_extract_d2h_rsp_intg__0__payload = ((0x00000038U 
                                                 & ((__Vfunc_extract_d2h_rsp_intg__0__tl[2U] 
                                                     << 5U) 
                                                    | (0x00000018U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__0__tl[1U] 
                                                          >> 0x0000001bU)))) 
                                                | ((6U 
                                                    & (__Vfunc_extract_d2h_rsp_intg__0__tl[1U] 
                                                       >> 0x00000018U)) 
                                                   | (1U 
                                                      & (__Vfunc_extract_d2h_rsp_intg__0__tl[0U] 
                                                         >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__0__Vfuncout = __Vfunc_extract_d2h_rsp_intg__0__payload;
    vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__0__Vfuncout;
    vlSelfRef.__PVT__u_reg__DOT__u_err_code_fifo_state_err__DOT__de 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__6__KET__) 
           & ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_19) 
              | ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_22) 
                 | ((0x1eU == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_err_code_test__q)) 
                    & (IData)(vlSelfRef.__PVT__u_reg__DOT__err_code_test_qe)))));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i 
        = ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_33) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_cntr_err__DOT__de) 
              | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_main_sm_err__DOT__de) 
                 | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_ack_sm_err__DOT__de))));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__ready_i) 
           & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__req_i)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__clear_status 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__depth_q) 
            & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__req_i))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__clr_q));
    vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_vld 
        = ((0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__req_i)) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__ready_i));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__req_i));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__state_d 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__state_d 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__state_d 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__state_d 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__state_d 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__state_d 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__state_d 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_ack__BRA__0__KET__ = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
    if ((0x0132U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_clr__BRA__0__KET__ = 0U;
        if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x018eU;
            vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_clr__BRA__0__KET__ = 1U;
        }
    } else {
        if ((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reseed_ctrl__DOT__u_edn_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x00ebU;
            }
        } else if ((0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0025U;
            }
        } else if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x01d1U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        }
        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_clr__BRA__0__KET__ = 0U;
    }
    if ((0x0132U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x018eU;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 1U;
        }
    } else {
        if ((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_edn_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x00ebU;
            }
        } else if ((0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0025U;
            }
        } else if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x01d1U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        }
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
    }
    if ((0x0132U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x018eU;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 1U;
        }
    } else {
        if ((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__edn_req) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x00ebU;
            }
        } else if ((0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0025U;
            }
        } else if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x01d1U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        }
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
    }
    if ((0x0132U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x018eU;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 1U;
        }
    } else {
        if ((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x00ebU;
            }
        } else if ((0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0025U;
            }
        } else if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x01d1U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        }
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
    }
    if ((0x0132U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x018eU;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 1U;
        }
    } else {
        if ((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_edn_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x00ebU;
            }
        } else if ((0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0025U;
            }
        } else if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x01d1U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        }
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
    }
    if ((0x0132U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x018eU;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 1U;
        }
    } else {
        if ((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x00ebU;
            }
        } else if ((0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0025U;
            }
        } else if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x01d1U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        }
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
    }
    if ((0x0132U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x018eU;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 1U;
        }
    } else {
        if ((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x00ebU;
            }
        } else if ((0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0025U;
            }
        } else if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x01d1U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        }
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
    }
    if ((0x0132U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x018eU;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 1U;
        }
    } else {
        if ((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_edn_if__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x00ebU;
            }
        } else if ((0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0025U;
            }
        } else if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x01d1U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        }
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__ = 0U;
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_ack__BRA__0__KET__ = 1U;
                    }
                }
            }
            if ((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reseed_ctrl__DOT__u_edn_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o) {
                    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__ = 1U;
                    }
                }
            }
        }
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__ = 0U;
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__ack_o = 1U;
                    }
                }
            }
            if ((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_edn_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o) {
                    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 1U;
                    }
                }
            }
        }
    } else {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__ack_o = 1U;
                    }
                }
            }
            if ((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__edn_req) {
                    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 1U;
                    }
                }
            }
        }
    } else {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__ack_o = 1U;
                    }
                }
            }
            if ((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o) {
                    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 1U;
                    }
                }
            }
        }
    } else {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__ack_o = 1U;
                    }
                }
            }
            if ((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_edn_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o) {
                    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 1U;
                    }
                }
            }
        }
    } else {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__ack_o = 1U;
                    }
                }
            }
            if ((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o) {
                    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 1U;
                    }
                }
            }
        }
    } else {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__ack_o = 1U;
                    }
                }
            }
            if ((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o) {
                    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 1U;
                    }
                }
            }
        }
    } else {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__ack_o = 1U;
                    }
                }
            }
            if ((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_edn_if__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o) {
                    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 1U;
                    }
                }
            }
        }
    } else {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_ack__BRA__0__KET__ = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_clr__BRA__0__KET__ = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__ = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
    } else {
        if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__)) 
             & ((((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                  | (0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                 | (0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                | (0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0132U;
            vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_ack__BRA__0__KET__ = 0U;
            vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_clr__BRA__0__KET__ = 0U;
            vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__ = 0U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__)) 
             & ((((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                  | (0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                 | (0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                | (0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0132U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__)) 
             & ((((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                  | (0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                 | (0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                | (0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0132U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__)) 
             & ((((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                  | (0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                 | (0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                | (0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0132U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__)) 
             & ((((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                  | (0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                 | (0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                | (0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0132U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__)) 
             & ((((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                  | (0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                 | (0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                | (0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0132U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__)) 
             & ((((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                  | (0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                 | (0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                | (0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0132U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__)) 
             & ((((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                  | (0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                 | (0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                | (0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0132U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        }
    }
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__ptr_d 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__clear_status)) 
                 & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__pull_data)
                     ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__ptr_q))
                     : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__ptr_q))));
    vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_vld)
            ? (((QData)((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U])) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U])))
            : vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_q);
    vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_vld_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__17__KET__) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_vld) 
              | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_vld_q)));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__de 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_vld) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_vld_q) 
              & (vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_q 
                 == (((QData)((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U])) 
                      << 0x00000020U) | (QData)((IData)(
                                                        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U]))))));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__req_i));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__) 
            & (1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) 
           & (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status 
        = (((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o) 
            & (1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) 
           & (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status 
        = (((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o) 
            & (1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) 
           & (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status 
        = (((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o) 
            & (1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) 
           & (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status 
        = (((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o) 
            & (1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) 
           & (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status 
        = (((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o) 
            & (1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) 
           & (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status 
        = (((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o) 
            & (1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) 
           & (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status 
        = (((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o) 
            & (1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q));
    __VdfgRegularize_h6e95ff9d_0_1463 = (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req))));
    __VdfgRegularize_h6e95ff9d_0_1464 = (1U & ((IData)(__VdfgRegularize_h6e95ff9d_0_1463) 
                                               | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req) 
                                                  >> 2U)));
    __VdfgRegularize_h6e95ff9d_0_1465 = (1U & ((IData)(__VdfgRegularize_h6e95ff9d_0_1464) 
                                               | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req) 
                                                  >> 3U)));
    __VdfgRegularize_h6e95ff9d_0_1466 = (1U & ((IData)(__VdfgRegularize_h6e95ff9d_0_1465) 
                                               | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req) 
                                                  >> 4U)));
    __VdfgRegularize_h6e95ff9d_0_1467 = (1U & ((IData)(__VdfgRegularize_h6e95ff9d_0_1466) 
                                               | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req) 
                                                  >> 5U)));
    __VdfgRegularize_h6e95ff9d_0_1468 = (1U & ((IData)(__VdfgRegularize_h6e95ff9d_0_1467) 
                                               | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req) 
                                                  >> 6U)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__ppc_out 
        = (((((((IData)(__VdfgRegularize_h6e95ff9d_0_1468) 
                | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req) 
                   >> 7U)) << 3U) | ((IData)(__VdfgRegularize_h6e95ff9d_0_1468) 
                                     << 2U)) | (((IData)(__VdfgRegularize_h6e95ff9d_0_1467) 
                                                 << 1U) 
                                                | (IData)(__VdfgRegularize_h6e95ff9d_0_1466))) 
            << 4U) | ((((IData)(__VdfgRegularize_h6e95ff9d_0_1465) 
                        << 3U) | ((IData)(__VdfgRegularize_h6e95ff9d_0_1464) 
                                  << 2U)) | (((IData)(__VdfgRegularize_h6e95ff9d_0_1463) 
                                              << 1U) 
                                             | (1U 
                                                & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req)))));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__winner 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__ppc_out) 
                          ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__ppc_out), 1U)));
    __Vtableidx1 = vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__winner;
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__idx_o 
        = Vsim__ConstPool__TABLE_hb753c260_0[__Vtableidx1];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i 
        = Vsim__ConstPool__TABLE_hb349ab12_0[__Vtableidx1];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__ready_i)
            ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__winner)
            : 0U);
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o) 
            & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o) 
               >> 7U)) & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__req_i)));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = 0U;
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q) 
                     + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)));
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
            = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                              - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data))));
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o) 
            & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o) 
               >> 6U)) & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__req_i)));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = 0U;
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q) 
                     + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)));
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
            = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                              - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data))));
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o) 
            & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o) 
               >> 5U)) & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__req_i)));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = 0U;
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q) 
                     + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)));
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
            = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                              - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data))));
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o) 
            & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o) 
               >> 4U)) & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__req_i)));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = 0U;
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q) 
                     + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)));
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
            = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                              - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data))));
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o) 
            & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o) 
               >> 3U)) & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__req_i)));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = 0U;
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q) 
                     + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)));
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
            = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                              - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data))));
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o) 
            & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o) 
               >> 2U)) & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__req_i)));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = 0U;
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q) 
                     + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)));
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
            = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                              - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data))));
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o) 
            & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o) 
               >> 1U)) & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__req_i)));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = 0U;
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q) 
                     + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)));
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
            = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                              - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data))));
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__req_i)));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = 0U;
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q) 
                     + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)));
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
            = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                              - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data))));
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_d = 
        (((((2U & (((~ (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o)) 
                    & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                        ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                        : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q) 
                           >> 7U))) << 1U)) | (1U & 
                                               ((~ (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o)) 
                                                & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                                                    ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q) 
                                                    >> 6U))))) 
           << 6U) | (((2U & (((~ (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o)) 
                              & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                                  ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                                  : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q) 
                                     >> 5U))) << 1U)) 
                      | (1U & ((~ (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o)) 
                               & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                                   ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                                   : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q) 
                                      >> 4U))))) << 4U)) 
         | ((((2U & (((~ (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o)) 
                      & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                          ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                          : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q) 
                             >> 3U))) << 1U)) | (1U 
                                                 & ((~ (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o)) 
                                                    & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                                                        ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                                                        : 
                                                       ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q) 
                                                        >> 2U))))) 
             << 2U) | ((2U & (((~ (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o)) 
                               & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                                   ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                                   : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q) 
                                      >> 1U))) << 1U)) 
                       | (1U & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_clr__BRA__0__KET__)) 
                                & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                                    ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                                    : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q)))))));
}

VL_ATTR_COLD void Vsim_edn__Az22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__1(Vsim_edn__Az22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_edn__Az22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_vld_hold_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__10__KET__) 
           & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_cmd__DOT__full_o) 
              & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_vld_hold_q) 
                 | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_vld_out_q))));
    vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_handshake 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_vld_out_q) 
           & ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_cmd__DOT__full_o)) 
              & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_vld_q)));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__18__KET__) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__VdfgRegularize_h6e95ff9d_0_307));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (0x0800U == (0x0e00U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = (((((((0x11U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 2U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001eU)))) 
                                                  << 4U) 
                                                 | (((0x10U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                           << 2U) 
                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001eU)))) 
                                                     << 3U) 
                                                    | ((0x0fU 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 2U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001eU)))) 
                                                       << 2U))) 
                                                | (((0x0eU 
                                                     == 
                                                     (0x0000001fU 
                                                      & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 2U) 
                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001eU)))) 
                                                    << 1U) 
                                                   | (0x0dU 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                           << 2U) 
                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001eU)))))) 
                                               << 0x0000000dU) 
                                              | (((((0x0cU 
                                                     == 
                                                     (0x0000001fU 
                                                      & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 2U) 
                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001eU)))) 
                                                    << 3U) 
                                                   | ((0x0bU 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 2U) 
                                                           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001eU)))) 
                                                      << 2U)) 
                                                  | (((0x0aU 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 2U) 
                                                           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001eU)))) 
                                                      << 1U) 
                                                     | (9U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 2U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001eU)))))) 
                                                 << 9U)) 
                                             | ((((((8U 
                                                     == 
                                                     (0x0000001fU 
                                                      & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 2U) 
                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001eU)))) 
                                                    << 4U) 
                                                   | (((7U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 2U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001eU)))) 
                                                       << 3U) 
                                                      | ((6U 
                                                          == 
                                                          (0x0000001fU 
                                                           & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                               << 2U) 
                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001eU)))) 
                                                         << 2U))) 
                                                  | (((5U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 2U) 
                                                           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001eU)))) 
                                                      << 1U) 
                                                     | (4U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 2U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001eU)))))) 
                                                 << 4U) 
                                                | ((((3U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                           << 2U) 
                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001eU)))) 
                                                     << 3U) 
                                                    | ((2U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 2U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001eU)))) 
                                                       << 2U)) 
                                                   | (((1U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 2U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001eU)))) 
                                                       << 1U) 
                                                      | (0U 
                                                         == 
                                                         (0x0000001fU 
                                                          & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                              << 2U) 
                                                             | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x0000001eU))))))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                            >> 9U))) | (1U == (7U & 
                                               (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 9U)))));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_30 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_handshake)) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_vld_q));
    vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_ins_cmd = 0U;
    vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_gen_cmd = 0U;
    vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_uni_cmd = 0U;
    vlSelfRef.__PVT__u_edn_core__DOT__boot_send_ins_cmd = 0U;
    vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_busy = 0U;
    vlSelfRef.__PVT__u_edn_core__DOT__accept_sw_cmds_pulse = 0U;
    vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse = 0U;
    vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode = 0U;
    if ((0x00000100U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__u_edn_core__DOT__send_rescmd = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__send_gencmd = 0U;
        if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_ins_cmd = 1U;
                                        vlSelfRef.__PVT__u_edn_core__DOT__boot_send_ins_cmd = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_busy = 1U;
                                        vlSelfRef.__PVT__u_edn_core__DOT__send_gencmd = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                         >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_busy = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                             >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                                vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_busy = 1U;
                            }
                        }
                    }
                }
            }
        }
        vlSelfRef.__PVT__u_edn_core__DOT__capt_gencmd_fifo_cnt = 0U;
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_uni_cmd = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__capt_gencmd_fifo_cnt = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfe)))) {
                                            vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                      >> 7U)))) {
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__boot_send_ins_cmd = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_busy = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_busy = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_fo) 
                                                    & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__))))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfe) 
                                                     & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__))))) {
                                                if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__) {
                                                    vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse = 1U;
                                                }
                                            }
                                            if (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfe) 
                                                 & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__))) {
                                                vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode = 1U;
                                            } else if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__) {
                                                vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                 >> 5U)))) {
                if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_busy = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                                        if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_q) {
                                            vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelfRef.__PVT__u_edn_core__DOT__send_rescmd = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__send_gencmd = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__capt_gencmd_fifo_cnt = 0U;
    }
    vlSelfRef.__PVT__u_edn_core__DOT__capt_rescmd_fifo_cnt = 0U;
    if (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i) 
         | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de))) {
        vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_ins_cmd = 0U;
    } else if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__)) 
                & ((((((((((((((((((0x01c7U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)) 
                                   | (0x0079U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                  | (3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                 | (0x0077U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                | (0x0135U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                               | (0x002cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                              | (0x00a9U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                             | (0x00f0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                            | (0x01bcU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                           | (0x01a3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                          | (0x0092U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                         | (0x0161U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                        | (0x010eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                       | (0x01ddU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                      | (0x00bfU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                     | (0x006aU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                    | (0x0095U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                   | (0x0018U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))))) {
        vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_ins_cmd = 0U;
    }
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                  >> 8U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_gen_cmd = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i) 
         | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de))) {
        vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_gen_cmd = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_uni_cmd = 0U;
    } else if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__)) 
                & ((((((((((((((((((0x01c7U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)) 
                                   | (0x0079U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                  | (3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                 | (0x0077U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                | (0x0135U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                               | (0x002cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                              | (0x00a9U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                             | (0x00f0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                            | (0x01bcU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                           | (0x01a3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                          | (0x0092U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                         | (0x0161U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                        | (0x010eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                       | (0x01ddU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                      | (0x00bfU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                     | (0x006aU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                    | (0x0095U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                   | (0x0018U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))))) {
        vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_gen_cmd = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_uni_cmd = 0U;
    }
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                  >> 8U)))) {
        if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_fo) 
                                                    & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__))))) {
                                            if (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfe) 
                                                 & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__))) {
                                                vlSelfRef.__PVT__u_edn_core__DOT__accept_sw_cmds_pulse = 1U;
                                            } else if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__) {
                                                vlSelfRef.__PVT__u_edn_core__DOT__accept_sw_cmds_pulse = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i) 
         | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de))) {
        vlSelfRef.__PVT__u_edn_core__DOT__accept_sw_cmds_pulse = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse = 0U;
    } else if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__)) 
                & ((((((((((((((((((0x01c7U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)) 
                                   | (0x0079U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                  | (3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                 | (0x0077U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                | (0x0135U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                               | (0x002cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                              | (0x00a9U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                             | (0x00f0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                            | (0x01bcU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                           | (0x01a3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                          | (0x0092U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                         | (0x0161U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                        | (0x010eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                       | (0x01ddU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                      | (0x00bfU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                     | (0x006aU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                    | (0x0095U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                   | (0x0018U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))))) {
        vlSelfRef.__PVT__u_edn_core__DOT__accept_sw_cmds_pulse = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse = 1U;
    }
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                  >> 8U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                      >> 7U)))) {
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__send_rescmd = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i) 
         | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de))) {
        vlSelfRef.__PVT__u_edn_core__DOT__send_rescmd = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__send_gencmd = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__capt_gencmd_fifo_cnt = 0U;
    } else if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__)) 
                & ((((((((((((((((((0x01c7U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)) 
                                   | (0x0079U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                  | (3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                 | (0x0077U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                | (0x0135U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                               | (0x002cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                              | (0x00a9U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                             | (0x00f0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                            | (0x01bcU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                           | (0x01a3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                          | (0x0092U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                         | (0x0161U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                        | (0x010eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                       | (0x01ddU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                      | (0x00bfU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                     | (0x006aU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                    | (0x0095U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                   | (0x0018U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))))) {
        vlSelfRef.__PVT__u_edn_core__DOT__send_rescmd = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__send_gencmd = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__capt_gencmd_fifo_cnt = 0U;
    }
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                  >> 8U)))) {
        if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__capt_rescmd_fifo_cnt = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i) 
         | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de))) {
        vlSelfRef.__PVT__u_edn_core__DOT__capt_rescmd_fifo_cnt = 0U;
    } else if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__)) 
                & ((((((((((((((((((0x01c7U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)) 
                                   | (0x0079U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                  | (3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                 | (0x0077U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                | (0x0135U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                               | (0x002cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                              | (0x00a9U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                             | (0x00f0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                            | (0x01bcU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                           | (0x01a3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                          | (0x0092U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                         | (0x0161U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                        | (0x010eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                       | (0x01ddU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                      | (0x00bfU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                     | (0x006aU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                    | (0x0095U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                   | (0x0018U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))))) {
        vlSelfRef.__PVT__u_edn_core__DOT__capt_rescmd_fifo_cnt = 0U;
    }
    vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                  >> 8U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i) 
                  | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de))))) {
        if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__)) 
             & ((((((((((((((((((0x01c7U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)) 
                                | (0x0079U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                               | (3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                              | (0x0077U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                             | (0x0135U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                            | (0x002cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                           | (0x00a9U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                          | (0x00f0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                         | (0x01bcU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                        | (0x01a3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                       | (0x0092U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                      | (0x0161U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                     | (0x010eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                    | (0x01ddU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                   | (0x00bfU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                  | (0x006aU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                 | (0x0095U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                | (0x0018U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.__PVT__u_edn_core__DOT__boot_send_ins_cmd = 0U;
            vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_busy = 0U;
            vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode = 0U;
            vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy = 0U;
        }
    }
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_edge_detector_recov_alert__DOT__d_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__de) 
           | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_pfa) 
              | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfa) 
                 | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_pfa) 
                    | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_pfa) 
                       | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de))))));
    if ((1U & (~ VL_ONEHOT_I(vlSelfRef.__PVT__u_reg__DOT__addr_hit)))) {
        if ((0U != vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: edn_reg_top.sv:1526: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn0.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/edn_reg_top.sv", 1526, "");
            }
        }
    }
    vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0x000000ffU & vlSelfRef.__PVT__u_reg__DOT__addr_hit)))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((1U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                ? ((0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_edn_fatal_err__q) 
                       << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_edn_cmd_req_done__q)))
                : ((2U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                    ? ((0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                       | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_edn_fatal_err__q) 
                           << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_edn_cmd_req_done__q)))
                    : ((4U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                        ? (0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next)
                        : ((8U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                            ? (0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next)
                            : ((0x00000010U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                                ? ((0xfffffffeU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_regwen__DOT__q))
                                : ((0x00000020U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                                    ? ((0xffff0000U 
                                        & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                                       | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_cmd_fifo_rst__q) 
                                            << 0x0000000cU) 
                                           | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_auto_req_mode__q) 
                                              << 8U)) 
                                          | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_boot_req_mode__q) 
                                              << 4U) 
                                             | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q))))
                                    : ((0x00000040U 
                                        & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                                        ? vlSelfRef.u_reg__DOT____Vcellout__u_boot_ins_cmd__q
                                        : vlSelfRef.u_reg__DOT____Vcellout__u_boot_gen_cmd__q)))))));
    } else if ((IData)((0U != (0x0000ff00U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)))) {
        if ((0x00000100U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
        } else if ((0x00000200U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffc0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_sts__DOT__q) 
                       << 3U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_ack__DOT__q) 
                                  << 2U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_rdy__DOT__q) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_reg_rdy__DOT__q)))));
        } else if ((0x00000400U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff80U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_ack__DOT__q) 
                       << 6U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_type__DOT__q) 
                                  << 2U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_auto_mode__DOT__q) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_boot_mode__DOT__q)))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffc7fU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_sts__DOT__q) 
                      << 7U));
        } else if ((0x00000800U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
        } else if ((0x00001000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
        } else if ((0x00002000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = vlSelfRef.u_reg__DOT____Vcellout__u_max_num_reqs_between_reseeds__q;
        } else if ((0x00004000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_cmd_fifo_rst_field_alert__DOT__q) 
                        << 3U) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__q) 
                                  << 2U)) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_boot_req_mode_field_alert__DOT__q) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_enable_field_alert__DOT__q))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffcfffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__q) 
                       << 0x0000000dU) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__q) 
                                          << 0x0000000cU)));
        } else {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_sfifo_gencmd_err__DOT__q) 
                       << 1U) | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_sfifo_rescmd_err__DOT__q)));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xff8fffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_cntr_err__DOT__q) 
                       << 0x00000016U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_main_sm_err__DOT__q) 
                                           << 0x00000015U) 
                                          | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_ack_sm_err__DOT__q) 
                                             << 0x00000014U))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0x8fffffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_fifo_state_err__DOT__q) 
                       << 0x0000001eU) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_fifo_read_err__DOT__q) 
                                           << 0x0000001dU) 
                                          | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_fifo_write_err__DOT__q) 
                                             << 0x0000001cU))));
        }
    } else {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0x00010000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                ? ((0xffffffe0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_err_code_test__q))
                : ((0x00020000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                    ? ((0xfffffe00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                       | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_main_sm_state__DOT__q))
                    : 0xffffffffU));
    }
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__wdata_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_busy)
            ? vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_out_q
            : ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                          >> 0x00000018U)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_fo__BRA__1__KET__) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_fo__BRA__2__KET__) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_15 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse) 
                    | (0x00c1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))));
    vlSelfRef.__PVT__u_edn_core__DOT__u_intr_hw_edn_cmd_req_done__DOT__event_intr_i 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_q) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_31 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__capt_gencmd_fifo_cnt) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__send_gencmd));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_32 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__capt_rescmd_fifo_cnt) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__send_rescmd));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__load_data 
        = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.genbits_vld_o) 
            & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy)) 
               & (~ ((0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_sts_q)) 
                     & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_q))))) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__wready_o));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_28 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_q) 
           & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode)) 
              & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy))));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_29 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy)) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_intr_hw_edn_cmd_req_done__DOT__event_intr_i));
    vlSelfRef.__PVT__u_edn_core__DOT__gencmd_handshake 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_vld_out_q) 
           & ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_cmd__DOT__full_o)) 
              & (IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_31)));
    vlSelfRef.__PVT__u_edn_core__DOT__rescmd_handshake 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_vld_out_q) 
           & ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_cmd__DOT__full_o)) 
              & (IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_32)));
    vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__16__KET__) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__load_data)
               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[4U]
               : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__depth_d 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__clear_status)) 
                 & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__load_data) 
                    | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__pull_data)
                        ? (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__depth_q))
                        : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__depth_q)))));
    if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[0U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[1U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[2U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[3U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_q[3U];
    }
    vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_sts__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__11__KET__)
            ? ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_29)
                ? (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_sts_q)
                : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_cmd_sts_q))
            : 0U);
    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__cmd_sent_i 
        = ((1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_cnt_q)) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gencmd_handshake) 
              | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__rescmd_handshake)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__max_num_reqs_between_reseeds_qe) 
           | (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__send_rescmd) 
               & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__cmd_sent_i)) 
              | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__decr_en_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__send_gencmd) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__cmd_sent_i));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__rready_i 
        = (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__cmd_sent_i)) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__rescmd_handshake)) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__capt_rescmd_fifo_cnt));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__rready_i 
        = (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__cmd_sent_i)) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gencmd_handshake)) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__capt_gencmd_fifo_cnt));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                                    + (QData)((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__decr_en_i))));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                    - (QData)((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__decr_en_i))));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__rready_i)));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_27 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__fifo_empty) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__rready_i));
    vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_out_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__9__KET__)
            ? ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_32)
                ? ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__rready_i)
                    ? ((0x019fU >= (0x000001ffU & VL_SHIFTL_III(9,9,32, 
                                                                (0x0000000fU 
                                                                 & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U)))
                        ? (((0U == (0x0000001fU & VL_SHIFTL_III(9,9,32, 
                                                                (0x0000000fU 
                                                                 & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U)))
                             ? 0U : (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__storage[
                                     (((IData)(0x0000001fU) 
                                       + (0x000001ffU 
                                          & VL_SHIFTL_III(9,9,32, 
                                                          (0x0000000fU 
                                                           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (0x0000000fU 
                                                                    & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U))))) 
                           | (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__storage[
                              (0x0000000fU & (VL_SHIFTL_III(9,9,32, 
                                                            (0x0000000fU 
                                                             & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U) 
                                              >> 5U))] 
                              >> (0x0000001fU & VL_SHIFTL_III(9,9,32, 
                                                              (0x0000000fU 
                                                               & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U))))
                        : 0U) : vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_out_q)
                : ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_31)
                    ? ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__rready_i)
                        ? ((0x019fU >= (0x000001ffU 
                                        & VL_SHIFTL_III(9,9,32, 
                                                        (0x0000000fU 
                                                         & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U)))
                            ? (((0U == (0x0000001fU 
                                        & VL_SHIFTL_III(9,9,32, 
                                                        (0x0000000fU 
                                                         & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U)))
                                 ? 0U : (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__storage[
                                         (((IData)(0x0000001fU) 
                                           + (0x000001ffU 
                                              & VL_SHIFTL_III(9,9,32, 
                                                              (0x0000000fU 
                                                               & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x00000020U) 
                                          - (0x0000001fU 
                                             & VL_SHIFTL_III(9,9,32, 
                                                             (0x0000000fU 
                                                              & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U))))) 
                               | (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__storage[
                                  (0x0000000fU & (VL_SHIFTL_III(9,9,32, 
                                                                (0x0000000fU 
                                                                 & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U) 
                                                  >> 5U))] 
                                  >> (0x0000001fU & 
                                      VL_SHIFTL_III(9,9,32, 
                                                    (0x0000000fU 
                                                     & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U))))
                            : 0U) : vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_out_q)
                    : ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_30)
                        ? vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_q
                        : vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_out_q)))
            : 0U);
    vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_cnt_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__14__KET__)
            ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_fo__BRA__3__KET__) 
                | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse))
                ? 0U : (0x0000000fU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__capt_gencmd_fifo_cnt)
                                        ? ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__full_o)
                                            ? 0x0000000dU
                                            : (0x0000000fU 
                                               & (((1U 
                                                    & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                       >> 4U)) 
                                                   == 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                       >> 4U)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                   - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                                                   : 
                                                  (((IData)(0x0dU) 
                                                    - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                                   + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))
                                        : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__capt_rescmd_fifo_cnt)
                                            ? ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__full_o)
                                                ? 0x0000000dU
                                                : (0x0000000fU 
                                                   & (((1U 
                                                        & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                           >> 4U)) 
                                                       == 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                           >> 4U)))
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                       - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                                                       : 
                                                      (((IData)(0x0dU) 
                                                        - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                                       + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))
                                            : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_cnt_q) 
                                               - ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__rready_i) 
                                                  | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__rready_i)))))))
            : 0U);
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__rready_i)));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_26 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__fifo_empty) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__rready_i));
    if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__set_i) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = ((IData)(0xffffffffU) - vlSelfRef.u_reg__DOT____Vcellout__u_max_num_reqs_between_reseeds__q);
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = vlSelfRef.u_reg__DOT____Vcellout__u_max_num_reqs_between_reseeds__q;
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__decr_en_i) 
                & (~ (0xffffffffU == vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__decr_en_i) 
                    & (IData)((vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                               >> 0x00000020U))) ? 0xffffffffU
                    : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                : vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q);
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__decr_en_i) 
                & (0U != vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__decr_en_i) 
                    & (IData)((vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                               >> 0x00000020U))) ? 0U
                    : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                : vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q);
    }
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (0x0cU == (0x0000000fU & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (0x0cU == (0x0000000fU & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_err_code_fifo_read_err__DOT__de 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__5__KET__) 
           & ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_27) 
              | ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_26) 
                 | ((0x1dU == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_err_code_test__q)) 
                    & (IData)(vlSelfRef.__PVT__u_reg__DOT__err_code_test_qe)))));
    if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__clr_i) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000001fU;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (0x00000010U & ((~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                 >> 4U)) 
                                             << 4U)));
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & ((IData)(0x1fU) - (0x00000010U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                     >> 4U)) 
                                                   << 4U))));
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                               & (~ (0x0000001fU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0x1fU
                                   : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0U : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__clr_i) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000001fU;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (0x00000010U & ((~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                 >> 4U)) 
                                             << 4U)));
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & ((IData)(0x1fU) - (0x00000010U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                     >> 4U)) 
                                                   << 4U))));
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                               & (~ (0x0000001fU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0x1fU
                                   : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0U : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    }
}

VL_ATTR_COLD void Vsim_edn__Az22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__2(Vsim_edn__Az22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_edn__Az22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__1__val 
                = (0x0000000fU & (vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[0U] 
                                  >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__1__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1__Vfuncout));
    vlSelfRef.__PVT__u_edn_core__DOT__cs_hw_cmd_handshake 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode)) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__VdfgRegularize_h6e95ff9d_0_427));
    vlSelfRef.__PVT__u_edn_core__DOT__cmd_hdr_busy_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__capt_gencmd_fifo_cnt) 
           | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__capt_rescmd_fifo_cnt) 
              | ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_hw_cmd_handshake)) 
                 & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_hdr_busy_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_boot_mode__DOT__d 
        = ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_15) 
           & (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_send_ins_cmd) 
               & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_hw_cmd_handshake)) 
              | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_mode_q)));
    vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_auto_mode__DOT__d 
        = ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_15) 
           & (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_busy) 
               & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_hw_cmd_handshake)) 
              | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_mode_q)));
    if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__12__KET__) {
        vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_ack__DOT__d 
            = ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_28) 
               | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy)
                   ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_hw_cmd_ack_q)
                   : ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_hw_cmd_handshake)) 
                      & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_hw_cmd_ack_q))));
        vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_sts__DOT__d 
            = ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_28)
                ? (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_sts_q)
                : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy)
                    ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_hw_cmd_sts_q)
                    : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_hw_cmd_handshake)
                        ? 0U : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_hw_cmd_sts_q))));
        vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_type__DOT__d 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy)
                               ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_type_q)
                               : (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_hw_cmd_handshake) 
                                   & ((~ ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_32) 
                                          | (IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_31))) 
                                      | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_hdr_busy_q)))
                                   ? vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_out_q
                                   : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_type_q))));
    } else {
        vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_ack__DOT__d = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_sts__DOT__d = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_type__DOT__d = 0U;
    }
}

VL_ATTR_COLD void Vsim_edn__Az22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__3(Vsim_edn__Az22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_edn__Az22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                  >> 0x0000001cU)))) 
                 | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error) 
                    | ((~ (((0U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                          >> 9U))) 
                            | ((1U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                             >> 9U))) 
                               | (4U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                               >> 9U))))) 
                           & ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__addr_sz_chk) 
                              & ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__mask_chk) 
                                 & ((4U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                  >> 9U))) 
                                    | ((1U == (7U & 
                                               (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 9U))) 
                                       | (IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__fulldata_chk))))))) 
                       | ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__instr_type_err) 
                          | (IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__instr_wr_err))))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelfRef.__PVT__u_reg__DOT__wr_err = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o) 
                                           & (((0U 
                                                != 
                                                (1U 
                                                 & (~ 
                                                    ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      << 8U) 
                                                     | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x00000018U))))) 
                                               & ((0U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 2U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001eU)))) 
                                                  | (1U 
                                                     == 
                                                     (0x0000001fU 
                                                      & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 2U) 
                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001eU)))))) 
                                              | (((2U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 2U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001eU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000018U)))))) 
                                                 | (((3U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                           << 2U) 
                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001eU)))) 
                                                     & (0U 
                                                        != 
                                                        (1U 
                                                         & (~ 
                                                            ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x00000018U)))))) 
                                                    | (((4U 
                                                         == 
                                                         (0x0000001fU 
                                                          & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                              << 2U) 
                                                             | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x0000001eU)))) 
                                                        & (0U 
                                                           != 
                                                           (1U 
                                                            & (~ 
                                                               ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x00000018U)))))) 
                                                       | (((5U 
                                                            == 
                                                            (0x0000001fU 
                                                             & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                 << 2U) 
                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x0000001eU)))) 
                                                           & (0U 
                                                              != 
                                                              (3U 
                                                               & (~ 
                                                                  ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                    << 8U) 
                                                                   | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                      >> 0x00000018U)))))) 
                                                          | (((6U 
                                                               == 
                                                               (0x0000001fU 
                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                    << 2U) 
                                                                   | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                      >> 0x0000001eU)))) 
                                                              & (0U 
                                                                 != 
                                                                 (0x0000000fU 
                                                                  & (~ 
                                                                     ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       << 8U) 
                                                                      | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                         >> 0x00000018U)))))) 
                                                             | (((7U 
                                                                  == 
                                                                  (0x0000001fU 
                                                                   & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                       << 2U) 
                                                                      | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                         >> 0x0000001eU)))) 
                                                                 & (0U 
                                                                    != 
                                                                    (0x0000000fU 
                                                                     & (~ 
                                                                        ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                          << 8U) 
                                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                            >> 0x00000018U)))))) 
                                                                | (((8U 
                                                                     == 
                                                                     (0x0000001fU 
                                                                      & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                          << 2U) 
                                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                            >> 0x0000001eU)))) 
                                                                    & (0U 
                                                                       != 
                                                                       (0x0000000fU 
                                                                        & (~ 
                                                                           ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                             << 8U) 
                                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               >> 0x00000018U)))))) 
                                                                   | (((9U 
                                                                        == 
                                                                        (0x0000001fU 
                                                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                             << 2U) 
                                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               >> 0x0000001eU)))) 
                                                                       & (0U 
                                                                          != 
                                                                          (1U 
                                                                           & (~ 
                                                                              ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                               | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                      | (((0x0aU 
                                                                           == 
                                                                           (0x0000001fU 
                                                                            & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                               | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                          & (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                         | (((0x0bU 
                                                                              == 
                                                                              (0x0000001fU 
                                                                               & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                             & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                            | (((0x0cU 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                               | (((0x0dU 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                                | (((0x0eU 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                                | (((0x0fU 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                                | ((0x11U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))))))))))))))))))));
    vlSelfRef.__PVT__u_reg__DOT__addrmiss = ((~ (0U 
                                                 != vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             & (((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                                                 & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req)) 
                                                | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o)));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__addrmiss) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__wr_err) 
              | (IData)(vlSelf->__PVT__u_reg__DOT__u_chk->err_o)));
    vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o));
    vlSelfRef.__PVT__u_reg__DOT__u_err_code_test0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = ((0x10U == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we 
        = ((0x0eU == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_edn_cmd_req_done__DOT__we 
        = ((1U == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_boot_ins_cmd__DOT__we 
        = ((6U == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_boot_gen_cmd__DOT__we 
        = ((7U == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_max_num_reqs_between_reseeds0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = ((0x0dU == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_ctrl_auto_req_mode__DOT__we 
        = (((5U == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                    << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                              >> 0x0000001eU)))) 
            & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_regwen__DOT__q));
    vlSelfRef.__PVT__u_reg__DOT__u_regwen__DOT__we 
        = ((4U == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__we 
        = ((0U == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_alert_test_fatal_alert__DOT__we 
        = ((3U == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_req__DOT__we 
        = ((8U == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_test_edn_cmd_req_done__DOT__we 
        = ((2U == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_reseed_cmd__DOT__we 
        = ((0x0bU == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_generate_cmd__DOT__we 
        = ((0x0cU == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_enable_field_alert__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_pfa) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_boot_req_mode_field_alert__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_pfa) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfa) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_cmd_fifo_rst_field_alert__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_pfa) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_enable_field_alert__DOT__wr_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_pfa) 
            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_enable_field_alert__DOT__q)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we)) 
              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                 >> 0x00000018U)));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_boot_req_mode_field_alert__DOT__wr_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_pfa) 
            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_boot_req_mode_field_alert__DOT__q)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we)) 
              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                 >> 0x00000019U)));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__wr_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfa) 
            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__q)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we)) 
              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                 >> 0x0000001aU)));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_cmd_fifo_rst_field_alert__DOT__wr_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_pfa) 
            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_cmd_fifo_rst_field_alert__DOT__q)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we)) 
              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                 >> 0x0000001bU)));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__wr_data 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__de) 
            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__q)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we)) 
              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                 >> 4U)));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__wr_data 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de) 
            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__q)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we)) 
              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                 >> 5U)));
    vlSelfRef.__PVT__u_reg__DOT__u_regwen__DOT__wr_data 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_regwen__DOT__q) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_regwen__DOT__we)) 
              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                 >> 0x00000018U)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__sw_cmd_req_load_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_req__DOT__we) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_reg_rdy_q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__de 
        = (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
             >> 0x00000018U) & (3U == (3U & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_edn_cmd_req_done__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_intr_hw_edn_cmd_req_done__DOT__event_intr_i));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__wvalid_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__rescmd_handshake) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reseed_cmd__DOT__we));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__wvalid_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gencmd_handshake) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_generate_cmd__DOT__we));
    vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_vld_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__8__KET__) 
           & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_handshake)) 
              & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__sw_cmd_req_load_i) 
                 | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_gen_cmd) 
                    | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_ins_cmd) 
                       | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_uni_cmd) 
                          | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_vld_q)))))));
    vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__7__KET__)
            ? ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_ins_cmd)
                ? vlSelfRef.u_reg__DOT____Vcellout__u_boot_ins_cmd__q
                : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_gen_cmd)
                    ? vlSelfRef.u_reg__DOT____Vcellout__u_boot_gen_cmd__q
                    : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_uni_cmd)
                        ? 5U : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__sw_cmd_req_load_i)
                                 ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x00000018U))
                                 : vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_q))))
            : 0U);
    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d 
        = vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw;
    if ((0x00000100U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                            } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if (vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__cmd_sent_i) {
                                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x0092U;
                                }
                            } else {
                                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                            }
                        } else {
                            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d 
                        = ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                            ? 0x017eU : ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                          ? ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                                  ? 0x0079U
                                                  : 0x017eU)
                                              : 0x017eU)
                                          : 0x017eU));
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                            } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                            } else if (vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__sw_cmd_req_load_i) {
                                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x01a3U;
                            }
                        } else {
                            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_q) {
                            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x0161U;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            }
        } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                                }
                            } else {
                                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                            }
                        } else {
                            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d 
                        = ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                            ? 0x017eU : ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                          ? 0x017eU
                                          : ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                              ? 0x017eU
                                              : ((1U 
                                                  & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfe)
                                                   ? 
                                                  ((0U 
                                                    == vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)
                                                    ? 0x00bfU
                                                    : 0x010eU)
                                                   : 0x00c1U)
                                                  : 0x017eU))));
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            }
        } else {
            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d 
                = ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                    ? ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                        ? ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                            ? 0x017eU : ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                          ? ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                              ? 0x017eU
                                              : ((1U 
                                                  & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                                  ? 0x002cU
                                                  : 0x017eU))
                                          : 0x017eU))
                        : 0x017eU) : ((0x00000010U 
                                       & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                       ? 0x017eU : 
                                      ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                        ? ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                                    ? 0x017eU
                                                    : 0x01ddU)
                                                : 0x017eU)
                                            : 0x017eU)
                                        : 0x017eU)));
        }
    } else if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_fo)))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x0135U;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_fo) 
                     & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x01c7U;
                } else if (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfe) 
                            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x01bcU;
                } else if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x0095U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            }
        } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d 
                = ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                    ? ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                        ? ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                            ? ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                ? ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                    ? 0x006aU : 0x017eU)
                                : 0x017eU) : 0x017eU)
                        : 0x017eU) : ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                       ? ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                           ? 0x017eU
                                           : ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                               ? 0x017eU
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                                   ? 0x00f0U
                                                   : 0x017eU)))
                                       : 0x017eU));
        } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                } else if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_q) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x0161U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            }
        } else {
            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
        }
    } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_q) {
                            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 3U;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_q) {
                                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x00a9U;
                            }
                        } else {
                            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    } else if (vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__cmd_sent_i) {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x0092U;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            }
        } else {
            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
        } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                } else if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_q) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x00c1U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            }
        } else {
            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            }
        } else {
            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
        }
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d 
            = ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                ? 0x017eU : ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                              ? 0x017eU : ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                                ? 0x0077U
                                                : 0x017eU)
                                            : 0x017eU)));
    }
    if (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i) 
         | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de))) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d 
            = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i)
                ? 0x017eU : ((0x017eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                              ? 0x017eU : 0x0018U));
    } else if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__)) 
                & ((((((((((((((((((0x01c7U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)) 
                                   | (0x0079U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                  | (3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                 | (0x0077U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                | (0x0135U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                               | (0x002cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                              | (0x00a9U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                             | (0x00f0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                            | (0x01bcU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                           | (0x01a3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                          | (0x0092U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                         | (0x0161U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                        | (0x010eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                       | (0x01ddU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                      | (0x00bfU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                     | (0x006aU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                    | (0x0095U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                   | (0x0018U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))))) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x00c1U;
    }
    vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_ack__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__11__KET__) 
           & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__sw_cmd_req_load_i)) 
              & ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_29) 
                 | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_sw_cmd_ack_q))));
    vlSelfRef.__PVT__u_edn_core__DOT__cmd_rdy_d = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__11__KET__) 
                                                   & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode) 
                                                      & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy)) 
                                                         & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__sw_cmd_req_load_i)) 
                                                            & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__accept_sw_cmds_pulse) 
                                                               | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_q) 
                                                                  | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_rdy_q)))))));
    vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_reg_rdy__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__11__KET__) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode) 
              & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy)) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__sw_cmd_req_load_i)) 
                    & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__accept_sw_cmds_pulse) 
                       | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_handshake) 
                          | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_reg_rdy_q)))))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__de) 
           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_edn_cmd_req_done__q));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__wvalid_i) 
           & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__full_o)) 
              & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_17 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__full_o));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__wvalid_i) 
           & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__full_o)) 
              & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_20 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__full_o));
    vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_rdy__DOT__d 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__sw_cmd_req_load_i)) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_rdy_d) 
              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_reg_rdy__DOT__d)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__wr_data 
        = ((~ ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                >> 0x00000018U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__de)
               ? (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__d)
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_edn_cmd_req_done__q)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (0x0cU == (0x0000000fU & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    vlSelfRef.__PVT__u_edn_core__DOT__sfifo_rescmd_err_sum 
        = (((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_17) 
            | ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_27) 
               | (IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_19))) 
           | (IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_0));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (0x0cU == (0x0000000fU & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_err_code_fifo_write_err__DOT__de 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__4__KET__) 
           & ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_17) 
              | ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_20) 
                 | ((0x1cU == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_err_code_test__q)) 
                    & (IData)(vlSelfRef.__PVT__u_reg__DOT__err_code_test_qe)))));
    vlSelfRef.__PVT__u_edn_core__DOT__sfifo_gencmd_err_sum 
        = (((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_20) 
            | ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_26) 
               | (IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_22))) 
           | (IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_1));
    if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__clr_i) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000001fU;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (0x00000010U & ((~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                 >> 4U)) 
                                             << 4U)));
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & ((IData)(0x1fU) - (0x00000010U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                     >> 4U)) 
                                                   << 4U))));
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                               & (~ (0x0000001fU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0x1fU
                                   : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0U : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    }
    vlSelfRef.__PVT__u_reg__DOT__u_err_code_sfifo_rescmd_err__DOT__de 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__sfifo_rescmd_err_sum));
    if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__clr_i) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000001fU;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (0x00000010U & ((~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                 >> 4U)) 
                                             << 4U)));
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & ((IData)(0x1fU) - (0x00000010U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                     >> 4U)) 
                                                   << 4U))));
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                               & (~ (0x0000001fU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0x1fU
                                   : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0U : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    }
    vlSelfRef.__PVT__u_reg__DOT__u_err_code_sfifo_gencmd_err__DOT__de 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__3__KET__) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__sfifo_gencmd_err_sum));
    vlSelfRef.__PVT__u_edn_core__DOT__u_intr_hw_edn_fatal_err__DOT__event_intr_i 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__1__KET__) 
            & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__sfifo_rescmd_err_sum) 
               | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__sfifo_gencmd_err_sum))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__de 
        = (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
             >> 0x00000019U) & (3U == (3U & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_edn_cmd_req_done__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_intr_hw_edn_fatal_err__DOT__event_intr_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__de) 
           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_edn_fatal_err__q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__wr_data 
        = ((~ ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                >> 0x00000019U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__de)
               ? (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__d)
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_edn_fatal_err__q)));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[0U] = (0x02aaa801U 
                                               | (((((((0x0000000cU 
                                                        & ((- (IData)((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_pfa))) 
                                                           << 2U)) 
                                                       | (3U 
                                                          & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__de))))) 
                                                      << 0x0000000cU) 
                                                     | (((0x0000000cU 
                                                          & ((- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de))) 
                                                             << 2U)) 
                                                         | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_sfifo_rescmd_err__DOT__de)) 
                                                        << 8U)) 
                                                    | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_sfifo_gencmd_err__DOT__de) 
                                                         << 6U) 
                                                        | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_ack_sm_err__DOT__de) 
                                                           << 4U)) 
                                                       | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_main_sm_err__DOT__de) 
                                                           << 2U) 
                                                          | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_cntr_err__DOT__de)))) 
                                                   << 0x00000010U) 
                                                  | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_fifo_write_err__DOT__de) 
                                                       << 0x0000000eU) 
                                                      | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_fifo_read_err__DOT__de) 
                                                          << 0x0000000cU) 
                                                         | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_fifo_state_err__DOT__de) 
                                                            << 0x0000000aU))) 
                                                     | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                                        << 1U))));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[1U] = (0x2a2a1440U 
                                               | (((((((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__de) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_reg_rdy__DOT__d) 
                                                           << 2U)) 
                                                       | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_rdy__DOT__d)) 
                                                      << 0x0000000bU) 
                                                     | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_ack__DOT__d) 
                                                        << 9U)) 
                                                    | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_sts__DOT__d) 
                                                        << 5U) 
                                                       | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_boot_mode__DOT__d) 
                                                           << 3U) 
                                                          | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_auto_mode__DOT__d) 
                                                             << 1U)))) 
                                                   << 0x00000011U) 
                                                  | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_type__DOT__d) 
                                                       << 0x0000000dU) 
                                                      | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_ack__DOT__d) 
                                                         << 0x0000000bU)) 
                                                     | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_sts__DOT__d) 
                                                          << 7U) 
                                                         | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_pfa) 
                                                            << 5U)) 
                                                        | (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_pfa) 
                                                            << 4U) 
                                                           | (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_pfa) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_pfa) 
                                                                  << 2U) 
                                                                 | (3U 
                                                                    & (- (IData)((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfa)))))))))));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[2U] = (7U & 
                                               (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__d) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__de) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__d))));
}

VL_ATTR_COLD void Vsim_edn__Az22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__0(Vsim_edn__Az22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_edn__Az22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__31__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__31__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__31__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__31__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__31__payload;
    __Vfunc_extract_d2h_rsp_intg__31__payload = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__34__Vfuncout;
    __Vfunc_mubi4_test_invalid__34__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__34__val;
    __Vfunc_mubi4_test_invalid__34__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__35__Vfuncout;
    __Vfunc_mubi4_test_true_strict__35__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__35__val;
    __Vfunc_mubi4_test_true_strict__35__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__36__Vfuncout;
    __Vfunc_mubi4_test_true_strict__36__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__36__val;
    __Vfunc_mubi4_test_true_strict__36__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__37__Vfuncout;
    __Vfunc_mubi4_test_true_strict__37__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__37__val;
    __Vfunc_mubi4_test_true_strict__37__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__38__Vfuncout;
    __Vfunc_mubi4_test_true_strict__38__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__38__val;
    __Vfunc_mubi4_test_true_strict__38__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__39__Vfuncout;
    __Vfunc_mubi4_test_true_strict__39__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__39__val;
    __Vfunc_mubi4_test_true_strict__39__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__40__Vfuncout;
    __Vfunc_mubi4_test_true_strict__40__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__40__val;
    __Vfunc_mubi4_test_true_strict__40__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__41__Vfuncout;
    __Vfunc_mubi4_test_true_strict__41__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__41__val;
    __Vfunc_mubi4_test_true_strict__41__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__42__Vfuncout;
    __Vfunc_mubi4_test_true_strict__42__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__42__val;
    __Vfunc_mubi4_test_true_strict__42__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__43__Vfuncout;
    __Vfunc_mubi4_test_true_strict__43__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__43__val;
    __Vfunc_mubi4_test_true_strict__43__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__44__Vfuncout;
    __Vfunc_mubi4_test_true_strict__44__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__44__val;
    __Vfunc_mubi4_test_true_strict__44__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__45__Vfuncout;
    __Vfunc_mubi4_test_true_strict__45__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__45__val;
    __Vfunc_mubi4_test_true_strict__45__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__46__Vfuncout;
    __Vfunc_mubi4_test_true_strict__46__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__46__val;
    __Vfunc_mubi4_test_true_strict__46__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__47__Vfuncout;
    __Vfunc_mubi4_test_true_strict__47__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__47__val;
    __Vfunc_mubi4_test_true_strict__47__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__48__Vfuncout;
    __Vfunc_mubi4_test_true_strict__48__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__48__val;
    __Vfunc_mubi4_test_true_strict__48__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__49__Vfuncout;
    __Vfunc_mubi4_test_true_strict__49__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__49__val;
    __Vfunc_mubi4_test_true_strict__49__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__50__Vfuncout;
    __Vfunc_mubi4_test_true_strict__50__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__50__val;
    __Vfunc_mubi4_test_true_strict__50__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__51__Vfuncout;
    __Vfunc_mubi4_test_true_strict__51__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__51__val;
    __Vfunc_mubi4_test_true_strict__51__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__52__Vfuncout;
    __Vfunc_mubi4_test_true_strict__52__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__52__val;
    __Vfunc_mubi4_test_true_strict__52__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__53__Vfuncout;
    __Vfunc_mubi4_test_true_strict__53__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__53__val;
    __Vfunc_mubi4_test_true_strict__53__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__54__Vfuncout;
    __Vfunc_mubi4_test_invalid__54__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__54__val;
    __Vfunc_mubi4_test_invalid__54__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__55__Vfuncout;
    __Vfunc_mubi4_test_true_strict__55__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__55__val;
    __Vfunc_mubi4_test_true_strict__55__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__56__Vfuncout;
    __Vfunc_mubi4_test_true_strict__56__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__56__val;
    __Vfunc_mubi4_test_true_strict__56__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__57__Vfuncout;
    __Vfunc_mubi4_test_true_strict__57__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__57__val;
    __Vfunc_mubi4_test_true_strict__57__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__58__Vfuncout;
    __Vfunc_mubi4_test_true_strict__58__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__58__val;
    __Vfunc_mubi4_test_true_strict__58__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__59__Vfuncout;
    __Vfunc_mubi4_test_invalid__59__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__59__val;
    __Vfunc_mubi4_test_invalid__59__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__60__Vfuncout;
    __Vfunc_mubi4_test_invalid__60__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__60__val;
    __Vfunc_mubi4_test_invalid__60__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__61__Vfuncout;
    __Vfunc_mubi4_test_true_strict__61__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__61__val;
    __Vfunc_mubi4_test_true_strict__61__val = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1520;
    __VdfgRegularize_h6e95ff9d_0_1520 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1521;
    __VdfgRegularize_h6e95ff9d_0_1521 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1522;
    __VdfgRegularize_h6e95ff9d_0_1522 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1523;
    __VdfgRegularize_h6e95ff9d_0_1523 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1524;
    __VdfgRegularize_h6e95ff9d_0_1524 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1525;
    __VdfgRegularize_h6e95ff9d_0_1525 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    // Body
    if ((1U & (~ VL_ONEHOT_I(((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                << 5U) | (((0x0025U 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 4U) | 
                                          ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                              | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                  << 2U) | (((0x018eU 
                                              == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                             << 1U) 
                                            | (0x0132U 
                                               == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))))) {
        if ((0U != ((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                      << 5U) | (((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                 << 4U) | ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                    | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                        << 2U) | (((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                   << 1U) | (0x0132U 
                                             == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: edn_ack_sm.sv:60: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn1.u_edn_core.gen_ep_blk[0].u_edn_ack_sm_ep: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/edn_ack_sm.sv", 60, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                << 5U) | (((0x0025U 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 4U) | 
                                          ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                              | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                  << 2U) | (((0x018eU 
                                              == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                             << 1U) 
                                            | (0x0132U 
                                               == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))))) {
        if ((0U != ((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                      << 5U) | (((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                 << 4U) | ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                    | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                        << 2U) | (((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                   << 1U) | (0x0132U 
                                             == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: edn_ack_sm.sv:60: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn1.u_edn_core.gen_ep_blk[1].u_edn_ack_sm_ep: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/edn_ack_sm.sv", 60, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                << 5U) | (((0x0025U 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 4U) | 
                                          ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                              | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                  << 2U) | (((0x018eU 
                                              == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                             << 1U) 
                                            | (0x0132U 
                                               == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))))) {
        if ((0U != ((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                      << 5U) | (((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                 << 4U) | ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                    | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                        << 2U) | (((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                   << 1U) | (0x0132U 
                                             == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: edn_ack_sm.sv:60: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn1.u_edn_core.gen_ep_blk[2].u_edn_ack_sm_ep: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/edn_ack_sm.sv", 60, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                << 5U) | (((0x0025U 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 4U) | 
                                          ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                              | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                  << 2U) | (((0x018eU 
                                              == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                             << 1U) 
                                            | (0x0132U 
                                               == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))))) {
        if ((0U != ((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                      << 5U) | (((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                 << 4U) | ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                    | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                        << 2U) | (((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                   << 1U) | (0x0132U 
                                             == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: edn_ack_sm.sv:60: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn1.u_edn_core.gen_ep_blk[3].u_edn_ack_sm_ep: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/edn_ack_sm.sv", 60, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                << 5U) | (((0x0025U 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 4U) | 
                                          ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                              | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                  << 2U) | (((0x018eU 
                                              == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                             << 1U) 
                                            | (0x0132U 
                                               == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))))) {
        if ((0U != ((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                      << 5U) | (((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                 << 4U) | ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                    | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                        << 2U) | (((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                   << 1U) | (0x0132U 
                                             == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: edn_ack_sm.sv:60: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn1.u_edn_core.gen_ep_blk[4].u_edn_ack_sm_ep: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/edn_ack_sm.sv", 60, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                << 5U) | (((0x0025U 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 4U) | 
                                          ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                              | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                  << 2U) | (((0x018eU 
                                              == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                             << 1U) 
                                            | (0x0132U 
                                               == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))))) {
        if ((0U != ((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                      << 5U) | (((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                 << 4U) | ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                    | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                        << 2U) | (((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                   << 1U) | (0x0132U 
                                             == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: edn_ack_sm.sv:60: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn1.u_edn_core.gen_ep_blk[5].u_edn_ack_sm_ep: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/edn_ack_sm.sv", 60, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                << 5U) | (((0x0025U 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 4U) | 
                                          ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                              | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                  << 2U) | (((0x018eU 
                                              == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                             << 1U) 
                                            | (0x0132U 
                                               == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))))) {
        if ((0U != ((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                      << 5U) | (((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                 << 4U) | ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                    | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                        << 2U) | (((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                   << 1U) | (0x0132U 
                                             == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: edn_ack_sm.sv:60: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn1.u_edn_core.gen_ep_blk[6].u_edn_ack_sm_ep: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/edn_ack_sm.sv", 60, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                << 5U) | (((0x0025U 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 4U) | 
                                          ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                              | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                  << 2U) | (((0x018eU 
                                              == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                             << 1U) 
                                            | (0x0132U 
                                               == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))))) {
        if ((0U != ((((0x01d1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                      << 5U) | (((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                 << 4U) | ((0x00ebU 
                                            == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                           << 3U))) 
                    | (((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                        << 2U) | (((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                                   << 1U) | (0x0132U 
                                             == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: edn_ack_sm.sv:60: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn1.u_edn_core.gen_ep_blk[7].u_edn_ack_sm_ep: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/edn_ack_sm.sv", 60, "");
            }
        }
    }
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__data_i[0U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [0U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__data_i[1U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [1U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__data_i[2U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [2U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__data_i[3U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [3U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__data_i[4U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [4U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__data_i[5U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [5U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__data_i[6U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [6U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__data_i[7U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [7U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__gen_nodatapath__DOT__unused_data[0U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [0U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__gen_nodatapath__DOT__unused_data[1U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [1U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__gen_nodatapath__DOT__unused_data[2U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [2U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__gen_nodatapath__DOT__unused_data[3U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [3U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__gen_nodatapath__DOT__unused_data[4U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [4U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__gen_nodatapath__DOT__unused_data[5U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [5U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__gen_nodatapath__DOT__unused_data[6U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [6U];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__gen_nodatapath__DOT__unused_data[7U] 
        = vlSelfRef.u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i
        [7U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__d_ack 
        = ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q));
    __Vfunc_mubi4_test_true_strict__49__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__49__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__49__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__15__KET__ 
        = __Vfunc_mubi4_test_true_strict__49__Vfuncout;
    VL_SHIFTR_WWI(128,128,32, __Vtemp_1, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, 
                  VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q), 5U));
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rdata[1U] 
        = __Vtemp_1[0U];
    VL_SHIFTR_WWI(128,128,32, __Vtemp_2, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, 
                  VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q), 5U));
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rdata[2U] 
        = __Vtemp_2[0U];
    VL_SHIFTR_WWI(128,128,32, __Vtemp_3, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, 
                  VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q), 5U));
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rdata[3U] 
        = __Vtemp_3[0U];
    VL_SHIFTR_WWI(128,128,32, __Vtemp_4, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, 
                  VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q), 5U));
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rdata[4U] 
        = __Vtemp_4[0U];
    VL_SHIFTR_WWI(128,128,32, __Vtemp_5, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, 
                  VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q), 5U));
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rdata[5U] 
        = __Vtemp_5[0U];
    VL_SHIFTR_WWI(128,128,32, __Vtemp_6, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, 
                  VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q), 5U));
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rdata[6U] 
        = __Vtemp_6[0U];
    VL_SHIFTR_WWI(128,128,32, __Vtemp_7, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, 
                  VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q), 5U));
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rdata[7U] 
        = __Vtemp_7[0U];
    __Vfunc_mubi4_test_true_strict__51__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__51__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__51__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__17__KET__ 
        = __Vfunc_mubi4_test_true_strict__51__Vfuncout;
    __Vfunc_mubi4_test_true_strict__44__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__44__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__44__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__10__KET__ 
        = __Vfunc_mubi4_test_true_strict__44__Vfuncout;
    __Vfunc_mubi4_test_true_strict__50__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__50__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__50__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__16__KET__ 
        = __Vfunc_mubi4_test_true_strict__50__Vfuncout;
    __Vfunc_mubi4_test_true_strict__42__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__42__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__42__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__8__KET__ 
        = __Vfunc_mubi4_test_true_strict__42__Vfuncout;
    __Vfunc_mubi4_test_true_strict__41__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__41__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__41__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__7__KET__ 
        = __Vfunc_mubi4_test_true_strict__41__Vfuncout;
    __Vfunc_mubi4_test_true_strict__43__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__43__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__43__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__9__KET__ 
        = __Vfunc_mubi4_test_true_strict__43__Vfuncout;
    vlSelfRef.__VdfgRegularize_h4a41a239_1_3 = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                 << 1U) 
                                                | (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
    __Vfunc_mubi4_test_true_strict__48__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__48__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__48__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__14__KET__ 
        = __Vfunc_mubi4_test_true_strict__48__Vfuncout;
    __Vfunc_mubi4_test_true_strict__57__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_cmd_fifo_rst__q;
    __Vfunc_mubi4_test_true_strict__57__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__57__val));
    vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_fo__BRA__3__KET__ 
        = __Vfunc_mubi4_test_true_strict__57__Vfuncout;
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    VL_SHIFTR_WWI(128,128,32, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, 
                  VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q), 5U));
    __Vfunc_mubi4_test_true_strict__36__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__36__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__36__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__2__KET__ 
        = __Vfunc_mubi4_test_true_strict__36__Vfuncout;
    __Vfunc_mubi4_test_true_strict__37__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__37__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__37__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__3__KET__ 
        = __Vfunc_mubi4_test_true_strict__37__Vfuncout;
    __Vfunc_mubi4_test_true_strict__55__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_cmd_fifo_rst__q;
    __Vfunc_mubi4_test_true_strict__55__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__55__val));
    vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_fo__BRA__1__KET__ 
        = __Vfunc_mubi4_test_true_strict__55__Vfuncout;
    __Vfunc_mubi4_test_true_strict__56__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_cmd_fifo_rst__q;
    __Vfunc_mubi4_test_true_strict__56__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__56__val));
    vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_fo__BRA__2__KET__ 
        = __Vfunc_mubi4_test_true_strict__56__Vfuncout;
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    __Vfunc_mubi4_test_true_strict__38__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__38__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__38__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__4__KET__ 
        = __Vfunc_mubi4_test_true_strict__38__Vfuncout;
    __Vfunc_mubi4_test_true_strict__39__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__39__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__39__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__5__KET__ 
        = __Vfunc_mubi4_test_true_strict__39__Vfuncout;
    __Vfunc_mubi4_test_true_strict__40__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__40__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__40__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__6__KET__ 
        = __Vfunc_mubi4_test_true_strict__40__Vfuncout;
    __Vfunc_mubi4_test_invalid__34__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_invalid__34__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__34__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__34__val)))));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_pfa 
        = __Vfunc_mubi4_test_invalid__34__Vfuncout;
    __Vfunc_mubi4_test_invalid__54__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_cmd_fifo_rst__q;
    __Vfunc_mubi4_test_invalid__54__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__54__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__54__val)))));
    vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_pfa 
        = __Vfunc_mubi4_test_invalid__54__Vfuncout;
    __Vfunc_mubi4_test_invalid__59__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_auto_req_mode__q;
    __Vfunc_mubi4_test_invalid__59__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__59__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__59__val)))));
    vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfa 
        = __Vfunc_mubi4_test_invalid__59__Vfuncout;
    __Vfunc_mubi4_test_invalid__60__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_boot_req_mode__q;
    __Vfunc_mubi4_test_invalid__60__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__60__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__60__val)))));
    vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_pfa 
        = __Vfunc_mubi4_test_invalid__60__Vfuncout;
    __Vfunc_mubi4_test_true_strict__46__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__46__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__46__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__12__KET__ 
        = __Vfunc_mubi4_test_true_strict__46__Vfuncout;
    __Vfunc_mubi4_test_true_strict__35__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__35__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__35__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__1__KET__ 
        = __Vfunc_mubi4_test_true_strict__35__Vfuncout;
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_0 
        = ((0U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_err_code_test__q)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__err_code_test_qe));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_1 
        = ((1U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_err_code_test__q)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__err_code_test_qe));
    __Vfunc_mubi4_test_true_strict__45__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__45__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__45__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__11__KET__ 
        = __Vfunc_mubi4_test_true_strict__45__Vfuncout;
    VL_SHIFTR_WWI(128,128,32, vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i, vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_q, 
                  VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__ptr_q), 7U));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__ready_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__clr_q)) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__depth_q));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           == (0x10U ^ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           == (0x10U ^ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    __Vfunc_mubi4_test_true_strict__53__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__53__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__53__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__ 
        = __Vfunc_mubi4_test_true_strict__53__Vfuncout;
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__depth_q)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__clr_q))));
    __Vfunc_mubi4_test_true_strict__58__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_auto_req_mode__q;
    __Vfunc_mubi4_test_true_strict__58__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__58__val));
    vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfe 
        = __Vfunc_mubi4_test_true_strict__58__Vfuncout;
    __Vfunc_mubi4_test_true_strict__61__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_boot_req_mode__q;
    __Vfunc_mubi4_test_true_strict__61__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__61__val));
    vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_fo 
        = __Vfunc_mubi4_test_true_strict__61__Vfuncout;
    __Vfunc_mubi4_test_true_strict__47__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__47__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__47__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__ 
        = __Vfunc_mubi4_test_true_strict__47__Vfuncout;
    __Vfunc_mubi4_test_true_strict__52__val = vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q;
    __Vfunc_mubi4_test_true_strict__52__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__52__val));
    vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__18__KET__ 
        = __Vfunc_mubi4_test_true_strict__52__Vfuncout;
    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 0U;
    if ((0x00000100U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                            }
                        } else {
                            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                            } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                            }
                        } else {
                            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            }
        } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            }
        } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
        } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            }
        } else {
            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
        }
    } else if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            }
        } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                            }
                        } else {
                            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            }
        } else {
            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
        }
    } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            }
        } else {
            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
        } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            }
        } else {
            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
            }
        } else {
            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
    } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
    } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
            vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
        }
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err = 1U;
    }
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_3 
        = ((0x15U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_err_code_test__q)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__err_code_test_qe));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_4 
        = ((0x16U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_err_code_test__q)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__err_code_test_qe));
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 0U;
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_2 
        = ((0x14U == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_err_code_test__q)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__err_code_test_qe));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__err_o 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__err_q) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__err_q));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__err_o 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__err_q) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__err_q));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q)));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1391[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(vlSelfRef.__VdfgRegularize_h4a41a239_1_3))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1391[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1391[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(vlSelfRef.__VdfgRegularize_h4a41a239_1_3))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1391[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1391[1U]) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1391[2U] 
        = (1U & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rdata[0U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted[0U];
    __Vtableidx4 = (((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_0) 
                     << 7U) | (((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_1) 
                                << 6U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__err_code_test_qe) 
                                           << 5U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_err_code_test__q))));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_24 
        = Vsim__ConstPool__TABLE_he633c569_0[__Vtableidx4];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[0U][0U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[0U][1U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[0U][2U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[0U][3U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[1U][0U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[1U][1U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[1U][2U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[1U][3U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[2U][0U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[2U][1U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[2U][2U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[2U][3U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[3U][0U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[3U][1U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[3U][2U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[3U][3U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[4U][0U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[4U][1U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[4U][2U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[4U][3U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[5U][0U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[5U][1U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[5U][2U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[5U][3U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[6U][0U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[6U][1U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[6U][2U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[6U][3U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[7U][0U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[7U][1U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[7U][2U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_wdata[7U][3U] 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_main_sm_err__DOT__de 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_main_sm_err) 
           | (IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_3));
    vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_cntr_err__DOT__de 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__err_q) 
           | (IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_4));
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 1U;
                    }
                }
            }
        }
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 1U;
                    }
                }
            }
        }
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 1U;
                    }
                }
            }
        }
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 1U;
                    }
                }
            }
        }
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 1U;
                    }
                }
            }
        }
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 1U;
                    }
                }
            }
        }
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 1U;
                    }
                }
            }
        }
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_ack_sm_err__DOT__de 
        = (((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o) 
            | ((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o) 
               | ((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o) 
                  | ((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o) 
                     | ((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o) 
                        | ((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o) 
                           | ((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o) 
                              | (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o)))))))) 
           | (IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_2));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_19 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__fifo_empty) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__full_o)) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__err_o));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_22 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__fifo_empty) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__full_o)) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__err_o));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_33 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__err_o) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__err_o));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o)) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o));
    __Vfunc_extract_d2h_rsp_intg__31__tl[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1391[0U];
    __Vfunc_extract_d2h_rsp_intg__31__tl[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1391[1U];
    __Vfunc_extract_d2h_rsp_intg__31__tl[2U] = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                                                 << 1U) 
                                                | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1391[2U]);
    __Vfunc_extract_d2h_rsp_intg__31__payload = ((0x00000038U 
                                                  & ((__Vfunc_extract_d2h_rsp_intg__31__tl[2U] 
                                                      << 5U) 
                                                     | (0x00000018U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__31__tl[1U] 
                                                           >> 0x0000001bU)))) 
                                                 | ((6U 
                                                     & (__Vfunc_extract_d2h_rsp_intg__31__tl[1U] 
                                                        >> 0x00000018U)) 
                                                    | (1U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__31__tl[0U] 
                                                          >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__31__Vfuncout = __Vfunc_extract_d2h_rsp_intg__31__payload;
    vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__31__Vfuncout;
    vlSelfRef.__PVT__u_reg__DOT__u_err_code_fifo_state_err__DOT__de 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__6__KET__) 
           & ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_19) 
              | ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_22) 
                 | ((0x1eU == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_err_code_test__q)) 
                    & (IData)(vlSelfRef.__PVT__u_reg__DOT__err_code_test_qe)))));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i 
        = ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_33) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_cntr_err__DOT__de) 
              | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_main_sm_err__DOT__de) 
                 | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_ack_sm_err__DOT__de))));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__ready_i) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__clear_status 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__depth_q) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o)) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__clr_q));
    vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_vld 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__ready_i));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o));
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__ack_o = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__ack_o = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__ack_o = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__ack_o = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__ack_o = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__ack_o = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__ack_o = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__state_d 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__state_d 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__state_d 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__state_d 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__state_d 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__state_d 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__state_d 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_ack__BRA__0__KET__ = 0U;
    if ((0x0132U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_clr__BRA__0__KET__ = 0U;
        if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x018eU;
            vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_clr__BRA__0__KET__ = 1U;
        }
    } else {
        if ((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x00ebU;
            }
        } else if ((0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0025U;
            }
        } else if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x01d1U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        }
        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_clr__BRA__0__KET__ = 0U;
    }
    if ((0x0132U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x018eU;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 1U;
        }
    } else {
        if ((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0025U;
                }
            } else if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
            } else if ((0x01d1U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
            }
        }
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
    }
    if ((0x0132U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x018eU;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 1U;
        }
    } else {
        if ((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0025U;
                }
            } else if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
            } else if ((0x01d1U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
            }
        }
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
    }
    if ((0x0132U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x018eU;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 1U;
        }
    } else {
        if ((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0025U;
                }
            } else if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
            } else if ((0x01d1U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
            }
        }
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
    }
    if ((0x0132U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x018eU;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 1U;
        }
    } else {
        if ((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0025U;
                }
            } else if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
            } else if ((0x01d1U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
            }
        }
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
    }
    if ((0x0132U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x018eU;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 1U;
        }
    } else {
        if ((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0025U;
                }
            } else if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
            } else if ((0x01d1U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
            }
        }
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
    }
    if ((0x0132U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x018eU;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 1U;
        }
    } else {
        if ((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0025U;
                }
            } else if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
            } else if ((0x01d1U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
            }
        }
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
    }
    if ((0x0132U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x018eU;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 1U;
        }
    } else {
        if ((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
        } else if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0025U;
                }
            } else if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
            } else if ((0x01d1U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
            }
        }
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
    }
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
    vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__ = 0U;
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_ack__BRA__0__KET__ = 1U;
                    }
                }
            }
            if ((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o) {
                    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__ = 1U;
                    }
                }
            }
        }
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__ = 0U;
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i) {
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_ack__BRA__0__KET__ = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_clr__BRA__0__KET__ = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__ = 0U;
    } else {
        if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__)) 
             & ((((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                  | (0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                 | (0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                | (0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0132U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__)) 
             & ((((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                  | (0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                 | (0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                | (0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0132U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__)) 
             & ((((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                  | (0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                 | (0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                | (0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0132U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__)) 
             & ((((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                  | (0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                 | (0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                | (0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0132U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__)) 
             & ((((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                  | (0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                 | (0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                | (0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0132U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__)) 
             & ((((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                  | (0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                 | (0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                | (0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0132U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__)) 
             & ((((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                  | (0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                 | (0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                | (0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__ack_o = 0U;
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0132U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = 0U;
            vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = 0U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__)) 
             & ((((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                  | (0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                 | (0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                | (0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0132U;
            vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_ack__BRA__0__KET__ = 0U;
            vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_clr__BRA__0__KET__ = 0U;
            vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__ = 0U;
        }
    }
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__ptr_d 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__clear_status)) 
                 & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__pull_data)
                     ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__ptr_q))
                     : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__ptr_q))));
    vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_vld)
            ? (((QData)((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U])) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U])))
            : vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_q);
    vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_vld_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__17__KET__) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_vld) 
              | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_vld_q)));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__de 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_vld) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_vld_q) 
              & (vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_q 
                 == (((QData)((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U])) 
                      << 0x00000020U) | (QData)((IData)(
                                                        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U]))))));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) 
           & (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status 
        = (((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o) 
            & (1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) 
           & (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status 
        = (((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o) 
            & (1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) 
           & (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status 
        = (((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o) 
            & (1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) 
           & (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status 
        = (((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o) 
            & (1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) 
           & (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status 
        = (((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o) 
            & (1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) 
           & (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status 
        = (((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o) 
            & (1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) 
           & (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status 
        = (((IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o) 
            & (1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__) 
            & (1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q));
    __VdfgRegularize_h6e95ff9d_0_1520 = (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req))));
    __VdfgRegularize_h6e95ff9d_0_1521 = (1U & ((IData)(__VdfgRegularize_h6e95ff9d_0_1520) 
                                               | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req) 
                                                  >> 2U)));
    __VdfgRegularize_h6e95ff9d_0_1522 = (1U & ((IData)(__VdfgRegularize_h6e95ff9d_0_1521) 
                                               | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req) 
                                                  >> 3U)));
    __VdfgRegularize_h6e95ff9d_0_1523 = (1U & ((IData)(__VdfgRegularize_h6e95ff9d_0_1522) 
                                               | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req) 
                                                  >> 4U)));
    __VdfgRegularize_h6e95ff9d_0_1524 = (1U & ((IData)(__VdfgRegularize_h6e95ff9d_0_1523) 
                                               | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req) 
                                                  >> 5U)));
    __VdfgRegularize_h6e95ff9d_0_1525 = (1U & ((IData)(__VdfgRegularize_h6e95ff9d_0_1524) 
                                               | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req) 
                                                  >> 6U)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__ppc_out 
        = (((((((IData)(__VdfgRegularize_h6e95ff9d_0_1525) 
                | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req) 
                   >> 7U)) << 3U) | ((IData)(__VdfgRegularize_h6e95ff9d_0_1525) 
                                     << 2U)) | (((IData)(__VdfgRegularize_h6e95ff9d_0_1524) 
                                                 << 1U) 
                                                | (IData)(__VdfgRegularize_h6e95ff9d_0_1523))) 
            << 4U) | ((((IData)(__VdfgRegularize_h6e95ff9d_0_1522) 
                        << 3U) | ((IData)(__VdfgRegularize_h6e95ff9d_0_1521) 
                                  << 2U)) | (((IData)(__VdfgRegularize_h6e95ff9d_0_1520) 
                                              << 1U) 
                                             | (1U 
                                                & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req)))));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__winner 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__ppc_out) 
                          ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__ppc_out), 1U)));
    __Vtableidx3 = vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__winner;
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__idx_o 
        = Vsim__ConstPool__TABLE_hb753c260_0[__Vtableidx3];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i 
        = Vsim__ConstPool__TABLE_hb349ab12_0[__Vtableidx3];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__ready_i)
            ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__winner)
            : 0U);
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o)) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o) 
              >> 7U));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = 0U;
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q) 
                     + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)));
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
            = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                              - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data))));
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o)) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o) 
              >> 6U));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = 0U;
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q) 
                     + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)));
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
            = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                              - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data))));
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o)) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o) 
              >> 5U));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = 0U;
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q) 
                     + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)));
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
            = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                              - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data))));
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o)) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o) 
              >> 4U));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = 0U;
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q) 
                     + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)));
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
            = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                              - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data))));
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o)) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o) 
              >> 3U));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = 0U;
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q) 
                     + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)));
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
            = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                              - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data))));
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o)) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o) 
              >> 2U));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = 0U;
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q) 
                     + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)));
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
            = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                              - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data))));
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o)) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o) 
              >> 1U));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = 0U;
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q) 
                     + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)));
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
            = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                              - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data))));
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o)) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = 0U;
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q) 
                     + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)));
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
            = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                              - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data))));
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_d = 
        (((((2U & (((~ (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o)) 
                    & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                        ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                        : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q) 
                           >> 7U))) << 1U)) | (1U & 
                                               ((~ (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o)) 
                                                & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                                                    ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q) 
                                                    >> 6U))))) 
           << 6U) | (((2U & (((~ (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o)) 
                              & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                                  ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                                  : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q) 
                                     >> 5U))) << 1U)) 
                      | (1U & ((~ (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o)) 
                               & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                                   ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                                   : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q) 
                                      >> 4U))))) << 4U)) 
         | ((((2U & (((~ (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o)) 
                      & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                          ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                          : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q) 
                             >> 3U))) << 1U)) | (1U 
                                                 & ((~ (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o)) 
                                                    & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                                                        ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                                                        : 
                                                       ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q) 
                                                        >> 2U))))) 
             << 2U) | ((2U & (((~ (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o)) 
                               & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                                   ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                                   : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q) 
                                      >> 1U))) << 1U)) 
                       | (1U & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_clr__BRA__0__KET__)) 
                                & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                                    ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                                    : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q)))))));
}

VL_ATTR_COLD void Vsim_edn__Az22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__1(Vsim_edn__Az22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_edn__Az22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_vld_hold_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__10__KET__) 
           & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_cmd__DOT__full_o) 
              & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_vld_hold_q) 
                 | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_vld_out_q))));
    vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_handshake 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_vld_out_q) 
           & ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_cmd__DOT__full_o)) 
              & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_vld_q)));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__18__KET__) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__VdfgRegularize_h6e95ff9d_0_306));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (0x0800U == (0x0e00U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = (((((((0x11U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 2U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001eU)))) 
                                                  << 4U) 
                                                 | (((0x10U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                           << 2U) 
                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001eU)))) 
                                                     << 3U) 
                                                    | ((0x0fU 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 2U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001eU)))) 
                                                       << 2U))) 
                                                | (((0x0eU 
                                                     == 
                                                     (0x0000001fU 
                                                      & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 2U) 
                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001eU)))) 
                                                    << 1U) 
                                                   | (0x0dU 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                           << 2U) 
                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001eU)))))) 
                                               << 0x0000000dU) 
                                              | (((((0x0cU 
                                                     == 
                                                     (0x0000001fU 
                                                      & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 2U) 
                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001eU)))) 
                                                    << 3U) 
                                                   | ((0x0bU 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 2U) 
                                                           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001eU)))) 
                                                      << 2U)) 
                                                  | (((0x0aU 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 2U) 
                                                           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001eU)))) 
                                                      << 1U) 
                                                     | (9U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 2U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001eU)))))) 
                                                 << 9U)) 
                                             | ((((((8U 
                                                     == 
                                                     (0x0000001fU 
                                                      & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 2U) 
                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001eU)))) 
                                                    << 4U) 
                                                   | (((7U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 2U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001eU)))) 
                                                       << 3U) 
                                                      | ((6U 
                                                          == 
                                                          (0x0000001fU 
                                                           & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                               << 2U) 
                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001eU)))) 
                                                         << 2U))) 
                                                  | (((5U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 2U) 
                                                           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001eU)))) 
                                                      << 1U) 
                                                     | (4U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 2U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001eU)))))) 
                                                 << 4U) 
                                                | ((((3U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                           << 2U) 
                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001eU)))) 
                                                     << 3U) 
                                                    | ((2U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 2U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001eU)))) 
                                                       << 2U)) 
                                                   | (((1U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 2U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001eU)))) 
                                                       << 1U) 
                                                      | (0U 
                                                         == 
                                                         (0x0000001fU 
                                                          & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                              << 2U) 
                                                             | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x0000001eU))))))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                            >> 9U))) | (1U == (7U & 
                                               (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 9U)))));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_30 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_handshake)) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_vld_q));
    vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_ins_cmd = 0U;
    vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_gen_cmd = 0U;
    vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_uni_cmd = 0U;
    vlSelfRef.__PVT__u_edn_core__DOT__boot_send_ins_cmd = 0U;
    vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_busy = 0U;
    vlSelfRef.__PVT__u_edn_core__DOT__accept_sw_cmds_pulse = 0U;
    vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse = 0U;
    vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode = 0U;
    if ((0x00000100U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__u_edn_core__DOT__send_rescmd = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__send_gencmd = 0U;
        if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_ins_cmd = 1U;
                                        vlSelfRef.__PVT__u_edn_core__DOT__boot_send_ins_cmd = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_busy = 1U;
                                        vlSelfRef.__PVT__u_edn_core__DOT__send_gencmd = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                         >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_busy = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                             >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                                vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_busy = 1U;
                            }
                        }
                    }
                }
            }
        }
        vlSelfRef.__PVT__u_edn_core__DOT__capt_gencmd_fifo_cnt = 0U;
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_uni_cmd = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__capt_gencmd_fifo_cnt = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfe)))) {
                                            vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                      >> 7U)))) {
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__boot_send_ins_cmd = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_busy = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_busy = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_fo) 
                                                    & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__))))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfe) 
                                                     & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__))))) {
                                                if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__) {
                                                    vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse = 1U;
                                                }
                                            }
                                            if (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfe) 
                                                 & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__))) {
                                                vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode = 1U;
                                            } else if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__) {
                                                vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                 >> 5U)))) {
                if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_busy = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                                        if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_q) {
                                            vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelfRef.__PVT__u_edn_core__DOT__send_rescmd = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__send_gencmd = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__capt_gencmd_fifo_cnt = 0U;
    }
    vlSelfRef.__PVT__u_edn_core__DOT__capt_rescmd_fifo_cnt = 0U;
    if (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i) 
         | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de))) {
        vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_ins_cmd = 0U;
    } else if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__)) 
                & ((((((((((((((((((0x01c7U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)) 
                                   | (0x0079U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                  | (3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                 | (0x0077U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                | (0x0135U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                               | (0x002cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                              | (0x00a9U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                             | (0x00f0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                            | (0x01bcU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                           | (0x01a3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                          | (0x0092U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                         | (0x0161U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                        | (0x010eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                       | (0x01ddU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                      | (0x00bfU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                     | (0x006aU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                    | (0x0095U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                   | (0x0018U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))))) {
        vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_ins_cmd = 0U;
    }
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                  >> 8U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_gen_cmd = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i) 
         | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de))) {
        vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_gen_cmd = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_uni_cmd = 0U;
    } else if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__)) 
                & ((((((((((((((((((0x01c7U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)) 
                                   | (0x0079U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                  | (3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                 | (0x0077U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                | (0x0135U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                               | (0x002cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                              | (0x00a9U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                             | (0x00f0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                            | (0x01bcU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                           | (0x01a3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                          | (0x0092U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                         | (0x0161U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                        | (0x010eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                       | (0x01ddU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                      | (0x00bfU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                     | (0x006aU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                    | (0x0095U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                   | (0x0018U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))))) {
        vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_gen_cmd = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_uni_cmd = 0U;
    }
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                  >> 8U)))) {
        if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_fo) 
                                                    & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__))))) {
                                            if (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfe) 
                                                 & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__))) {
                                                vlSelfRef.__PVT__u_edn_core__DOT__accept_sw_cmds_pulse = 1U;
                                            } else if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__) {
                                                vlSelfRef.__PVT__u_edn_core__DOT__accept_sw_cmds_pulse = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i) 
         | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de))) {
        vlSelfRef.__PVT__u_edn_core__DOT__accept_sw_cmds_pulse = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse = 0U;
    } else if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__)) 
                & ((((((((((((((((((0x01c7U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)) 
                                   | (0x0079U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                  | (3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                 | (0x0077U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                | (0x0135U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                               | (0x002cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                              | (0x00a9U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                             | (0x00f0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                            | (0x01bcU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                           | (0x01a3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                          | (0x0092U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                         | (0x0161U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                        | (0x010eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                       | (0x01ddU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                      | (0x00bfU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                     | (0x006aU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                    | (0x0095U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                   | (0x0018U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))))) {
        vlSelfRef.__PVT__u_edn_core__DOT__accept_sw_cmds_pulse = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse = 1U;
    }
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                  >> 8U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                      >> 7U)))) {
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__send_rescmd = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i) 
         | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de))) {
        vlSelfRef.__PVT__u_edn_core__DOT__send_rescmd = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__send_gencmd = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__capt_gencmd_fifo_cnt = 0U;
    } else if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__)) 
                & ((((((((((((((((((0x01c7U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)) 
                                   | (0x0079U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                  | (3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                 | (0x0077U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                | (0x0135U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                               | (0x002cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                              | (0x00a9U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                             | (0x00f0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                            | (0x01bcU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                           | (0x01a3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                          | (0x0092U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                         | (0x0161U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                        | (0x010eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                       | (0x01ddU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                      | (0x00bfU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                     | (0x006aU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                    | (0x0095U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                   | (0x0018U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))))) {
        vlSelfRef.__PVT__u_edn_core__DOT__send_rescmd = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__send_gencmd = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__capt_gencmd_fifo_cnt = 0U;
    }
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                  >> 8U)))) {
        if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__capt_rescmd_fifo_cnt = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i) 
         | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de))) {
        vlSelfRef.__PVT__u_edn_core__DOT__capt_rescmd_fifo_cnt = 0U;
    } else if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__)) 
                & ((((((((((((((((((0x01c7U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)) 
                                   | (0x0079U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                  | (3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                 | (0x0077U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                | (0x0135U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                               | (0x002cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                              | (0x00a9U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                             | (0x00f0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                            | (0x01bcU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                           | (0x01a3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                          | (0x0092U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                         | (0x0161U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                        | (0x010eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                       | (0x01ddU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                      | (0x00bfU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                     | (0x006aU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                    | (0x0095U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                   | (0x0018U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))))) {
        vlSelfRef.__PVT__u_edn_core__DOT__capt_rescmd_fifo_cnt = 0U;
    }
    vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                  >> 8U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i) 
                  | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de))))) {
        if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__)) 
             & ((((((((((((((((((0x01c7U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)) 
                                | (0x0079U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                               | (3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                              | (0x0077U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                             | (0x0135U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                            | (0x002cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                           | (0x00a9U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                          | (0x00f0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                         | (0x01bcU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                        | (0x01a3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                       | (0x0092U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                      | (0x0161U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                     | (0x010eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                    | (0x01ddU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                   | (0x00bfU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                  | (0x006aU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                 | (0x0095U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                | (0x0018U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.__PVT__u_edn_core__DOT__boot_send_ins_cmd = 0U;
            vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_busy = 0U;
            vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode = 0U;
            vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy = 0U;
        }
    }
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_edge_detector_recov_alert__DOT__d_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__de) 
           | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_pfa) 
              | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfa) 
                 | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_pfa) 
                    | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_pfa) 
                       | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de))))));
    if ((1U & (~ VL_ONEHOT_I(vlSelfRef.__PVT__u_reg__DOT__addr_hit)))) {
        if ((0U != vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: edn_reg_top.sv:1526: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn1.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/edn_reg_top.sv", 1526, "");
            }
        }
    }
    vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0x000000ffU & vlSelfRef.__PVT__u_reg__DOT__addr_hit)))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((1U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                ? ((0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_edn_fatal_err__q) 
                       << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_edn_cmd_req_done__q)))
                : ((2U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                    ? ((0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                       | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_edn_fatal_err__q) 
                           << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_edn_cmd_req_done__q)))
                    : ((4U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                        ? (0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next)
                        : ((8U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                            ? (0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next)
                            : ((0x00000010U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                                ? ((0xfffffffeU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_regwen__DOT__q))
                                : ((0x00000020U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                                    ? ((0xffff0000U 
                                        & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                                       | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_cmd_fifo_rst__q) 
                                            << 0x0000000cU) 
                                           | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_auto_req_mode__q) 
                                              << 8U)) 
                                          | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_boot_req_mode__q) 
                                              << 4U) 
                                             | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q))))
                                    : ((0x00000040U 
                                        & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                                        ? vlSelfRef.u_reg__DOT____Vcellout__u_boot_ins_cmd__q
                                        : vlSelfRef.u_reg__DOT____Vcellout__u_boot_gen_cmd__q)))))));
    } else if ((IData)((0U != (0x0000ff00U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)))) {
        if ((0x00000100U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
        } else if ((0x00000200U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffc0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_sts__DOT__q) 
                       << 3U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_ack__DOT__q) 
                                  << 2U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_rdy__DOT__q) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_reg_rdy__DOT__q)))));
        } else if ((0x00000400U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff80U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_ack__DOT__q) 
                       << 6U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_type__DOT__q) 
                                  << 2U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_auto_mode__DOT__q) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_boot_mode__DOT__q)))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffc7fU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_sts__DOT__q) 
                      << 7U));
        } else if ((0x00000800U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
        } else if ((0x00001000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
        } else if ((0x00002000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = vlSelfRef.u_reg__DOT____Vcellout__u_max_num_reqs_between_reseeds__q;
        } else if ((0x00004000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_cmd_fifo_rst_field_alert__DOT__q) 
                        << 3U) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__q) 
                                  << 2U)) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_boot_req_mode_field_alert__DOT__q) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_enable_field_alert__DOT__q))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffcfffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__q) 
                       << 0x0000000dU) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__q) 
                                          << 0x0000000cU)));
        } else {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_sfifo_gencmd_err__DOT__q) 
                       << 1U) | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_sfifo_rescmd_err__DOT__q)));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xff8fffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_cntr_err__DOT__q) 
                       << 0x00000016U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_main_sm_err__DOT__q) 
                                           << 0x00000015U) 
                                          | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_ack_sm_err__DOT__q) 
                                             << 0x00000014U))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0x8fffffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_fifo_state_err__DOT__q) 
                       << 0x0000001eU) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_fifo_read_err__DOT__q) 
                                           << 0x0000001dU) 
                                          | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_fifo_write_err__DOT__q) 
                                             << 0x0000001cU))));
        }
    } else {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0x00010000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                ? ((0xffffffe0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_err_code_test__q))
                : ((0x00020000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                    ? ((0xfffffe00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                       | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_main_sm_state__DOT__q))
                    : 0xffffffffU));
    }
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__wdata_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_busy)
            ? vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_out_q
            : ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                          >> 0x00000018U)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_fo__BRA__1__KET__) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_fo__BRA__2__KET__) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_15 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse) 
                    | (0x00c1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))));
    vlSelfRef.__PVT__u_edn_core__DOT__u_intr_hw_edn_cmd_req_done__DOT__event_intr_i 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_q) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_31 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__capt_gencmd_fifo_cnt) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__send_gencmd));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_32 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__capt_rescmd_fifo_cnt) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__send_rescmd));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__load_data 
        = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.genbits_vld_o) 
            & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy)) 
               & (~ ((0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_sts_q)) 
                     & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_q))))) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__wready_o));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_28 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_q) 
           & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode)) 
              & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy))));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_29 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy)) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_intr_hw_edn_cmd_req_done__DOT__event_intr_i));
    vlSelfRef.__PVT__u_edn_core__DOT__gencmd_handshake 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_vld_out_q) 
           & ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_cmd__DOT__full_o)) 
              & (IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_31)));
    vlSelfRef.__PVT__u_edn_core__DOT__rescmd_handshake 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_vld_out_q) 
           & ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_cmd__DOT__full_o)) 
              & (IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_32)));
    vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__16__KET__) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__load_data)
               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[4U]
               : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__depth_d 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__clear_status)) 
                 & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__load_data) 
                    | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__pull_data)
                        ? (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__depth_q))
                        : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__depth_q)))));
    if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[0U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[1U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[2U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[3U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_q[3U];
    }
    vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_sts__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__11__KET__)
            ? ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_29)
                ? (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_sts_q)
                : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_cmd_sts_q))
            : 0U);
    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__cmd_sent_i 
        = ((1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_cnt_q)) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gencmd_handshake) 
              | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__rescmd_handshake)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__max_num_reqs_between_reseeds_qe) 
           | (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__send_rescmd) 
               & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__cmd_sent_i)) 
              | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__decr_en_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__send_gencmd) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__cmd_sent_i));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__rready_i 
        = (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__cmd_sent_i)) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__rescmd_handshake)) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__capt_rescmd_fifo_cnt));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__rready_i 
        = (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__cmd_sent_i)) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gencmd_handshake)) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__capt_gencmd_fifo_cnt));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                                    + (QData)((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__decr_en_i))));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                    - (QData)((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__decr_en_i))));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__rready_i)));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_27 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__fifo_empty) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__rready_i));
    vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_out_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__9__KET__)
            ? ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_32)
                ? ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__rready_i)
                    ? ((0x019fU >= (0x000001ffU & VL_SHIFTL_III(9,9,32, 
                                                                (0x0000000fU 
                                                                 & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U)))
                        ? (((0U == (0x0000001fU & VL_SHIFTL_III(9,9,32, 
                                                                (0x0000000fU 
                                                                 & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U)))
                             ? 0U : (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__storage[
                                     (((IData)(0x0000001fU) 
                                       + (0x000001ffU 
                                          & VL_SHIFTL_III(9,9,32, 
                                                          (0x0000000fU 
                                                           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (0x0000000fU 
                                                                    & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U))))) 
                           | (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__storage[
                              (0x0000000fU & (VL_SHIFTL_III(9,9,32, 
                                                            (0x0000000fU 
                                                             & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U) 
                                              >> 5U))] 
                              >> (0x0000001fU & VL_SHIFTL_III(9,9,32, 
                                                              (0x0000000fU 
                                                               & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U))))
                        : 0U) : vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_out_q)
                : ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_31)
                    ? ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__rready_i)
                        ? ((0x019fU >= (0x000001ffU 
                                        & VL_SHIFTL_III(9,9,32, 
                                                        (0x0000000fU 
                                                         & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U)))
                            ? (((0U == (0x0000001fU 
                                        & VL_SHIFTL_III(9,9,32, 
                                                        (0x0000000fU 
                                                         & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U)))
                                 ? 0U : (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__storage[
                                         (((IData)(0x0000001fU) 
                                           + (0x000001ffU 
                                              & VL_SHIFTL_III(9,9,32, 
                                                              (0x0000000fU 
                                                               & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x00000020U) 
                                          - (0x0000001fU 
                                             & VL_SHIFTL_III(9,9,32, 
                                                             (0x0000000fU 
                                                              & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U))))) 
                               | (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__storage[
                                  (0x0000000fU & (VL_SHIFTL_III(9,9,32, 
                                                                (0x0000000fU 
                                                                 & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U) 
                                                  >> 5U))] 
                                  >> (0x0000001fU & 
                                      VL_SHIFTL_III(9,9,32, 
                                                    (0x0000000fU 
                                                     & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U))))
                            : 0U) : vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_out_q)
                    : ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_30)
                        ? vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_q
                        : vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_out_q)))
            : 0U);
    vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_cnt_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__14__KET__)
            ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_fo__BRA__3__KET__) 
                | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__main_sm_done_pulse))
                ? 0U : (0x0000000fU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__capt_gencmd_fifo_cnt)
                                        ? ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__full_o)
                                            ? 0x0000000dU
                                            : (0x0000000fU 
                                               & (((1U 
                                                    & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                       >> 4U)) 
                                                   == 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                       >> 4U)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                   - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                                                   : 
                                                  (((IData)(0x0dU) 
                                                    - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                                   + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))
                                        : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__capt_rescmd_fifo_cnt)
                                            ? ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__full_o)
                                                ? 0x0000000dU
                                                : (0x0000000fU 
                                                   & (((1U 
                                                        & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                           >> 4U)) 
                                                       == 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                           >> 4U)))
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                       - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                                                       : 
                                                      (((IData)(0x0dU) 
                                                        - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                                       + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))
                                            : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_cnt_q) 
                                               - ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__rready_i) 
                                                  | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__rready_i)))))))
            : 0U);
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__rready_i)));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_26 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__fifo_empty) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__rready_i));
    if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__set_i) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = ((IData)(0xffffffffU) - vlSelfRef.u_reg__DOT____Vcellout__u_max_num_reqs_between_reseeds__q);
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = vlSelfRef.u_reg__DOT____Vcellout__u_max_num_reqs_between_reseeds__q;
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__decr_en_i) 
                & (~ (0xffffffffU == vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__decr_en_i) 
                    & (IData)((vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                               >> 0x00000020U))) ? 0xffffffffU
                    : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                : vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q);
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__decr_en_i) 
                & (0U != vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__decr_en_i) 
                    & (IData)((vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                               >> 0x00000020U))) ? 0U
                    : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                : vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q);
    }
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (0x0cU == (0x0000000fU & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (0x0cU == (0x0000000fU & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_err_code_fifo_read_err__DOT__de 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__5__KET__) 
           & ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_27) 
              | ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_26) 
                 | ((0x1dU == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_err_code_test__q)) 
                    & (IData)(vlSelfRef.__PVT__u_reg__DOT__err_code_test_qe)))));
    if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__clr_i) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000001fU;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (0x00000010U & ((~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                 >> 4U)) 
                                             << 4U)));
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & ((IData)(0x1fU) - (0x00000010U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                     >> 4U)) 
                                                   << 4U))));
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                               & (~ (0x0000001fU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0x1fU
                                   : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0U : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__clr_i) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000001fU;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (0x00000010U & ((~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                 >> 4U)) 
                                             << 4U)));
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & ((IData)(0x1fU) - (0x00000010U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                     >> 4U)) 
                                                   << 4U))));
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                               & (~ (0x0000001fU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0x1fU
                                   : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0U : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    }
}
