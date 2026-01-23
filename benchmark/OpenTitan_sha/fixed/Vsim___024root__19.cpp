// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___nba_sequent__TOP__53(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__53\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__352__Vfuncout;
    __Vfunc_mubi4_test_true_strict__352__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__352__val;
    __Vfunc_mubi4_test_true_strict__352__val = 0;
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__377__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__377__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__377__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__377__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__377__payload;
    __Vfunc_extract_d2h_rsp_intg__377__payload = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_false_strict__397__Vfuncout;
    __Vfunc_mubi4_test_false_strict__397__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_false_strict__397__val;
    __Vfunc_mubi4_test_false_strict__397__val = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d));
    vlSelfRef.__VdfgRegularize_he50b618e_0_897 = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT____Vcellout__u_fatal_err_code_shadow_storage_err__q) 
                                                   << 2U) 
                                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT____Vcellout__u_fatal_err_code_idle_cnt__q) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT____Vcellout__u_fatal_err_code_reg_intg__q)));
    __Vfunc_mubi4_test_true_strict__352__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_reset_req__q;
    __Vfunc_mubi4_test_true_strict__352__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__352__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT____Vcellinp__u_sw_req_buf__in_i 
        = __Vfunc_mubi4_test_true_strict__352__Vfuncout;
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[0U] 
        = (IData)((((QData)((IData)((0x008fU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[1U] 
                                                 << 4U) 
                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0U] 
                                                   >> 0x0000001cU))))) 
                    << 0x0000001cU) | (QData)((IData)(
                                                      (0x0023c08fU 
                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0U])))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[1U] 
        = ((0xfffffc00U & vlSelfRef.__VdfgRegularize_he50b618e_0_932[1U]) 
           | (IData)(((((QData)((IData)((0x008fU & 
                                         ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[1U] 
                                           << 4U) | 
                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0U] 
                                           >> 0x0000001cU))))) 
                        << 0x0000001cU) | (QData)((IData)(
                                                          (0x0023c08fU 
                                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0U])))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[1U] 
        = ((0x000003ffU & vlSelfRef.__VdfgRegularize_he50b618e_0_932[1U]) 
           | ((IData)((((QData)((IData)((0x008fU & 
                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[2U] 
                                          >> 6U)))) 
                        << 0x0000001cU) | (QData)((IData)(
                                                          (0x0023c08fU 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[1U] 
                                                              >> 0x0000000aU)))))) 
              << 0x0000000aU));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[2U] 
        = ((0xfff00000U & vlSelfRef.__VdfgRegularize_he50b618e_0_932[2U]) 
           | (((IData)((((QData)((IData)((0x008fU & 
                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[2U] 
                                           >> 6U)))) 
                         << 0x0000001cU) | (QData)((IData)(
                                                           (0x0023c08fU 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[1U] 
                                                               >> 0x0000000aU)))))) 
               >> 0x00000016U) | ((IData)(((((QData)((IData)(
                                                             (0x008fU 
                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[2U] 
                                                                 >> 6U)))) 
                                             << 0x0000001cU) 
                                            | (QData)((IData)(
                                                              (0x0023c08fU 
                                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[1U] 
                                                                  >> 0x0000000aU))))) 
                                           >> 0x00000020U)) 
                                  << 0x0000000aU)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[2U] 
        = ((0x000fffffU & vlSelfRef.__VdfgRegularize_he50b618e_0_932[2U]) 
           | ((IData)((((QData)((IData)((0x008fU & 
                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                                          >> 0x00000010U)))) 
                        << 0x0000001cU) | (QData)((IData)(
                                                          (0x0023c08fU 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                                                               << 0x0000000cU) 
                                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[2U] 
                                                                 >> 0x00000014U))))))) 
              << 0x00000014U));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[3U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_he50b618e_0_932[3U]) 
           | (((IData)((((QData)((IData)((0x008fU & 
                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                                           >> 0x00000010U)))) 
                         << 0x0000001cU) | (QData)((IData)(
                                                           (0x0023c08fU 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                                                                << 0x0000000cU) 
                                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[2U] 
                                                                  >> 0x00000014U))))))) 
               >> 0x0000000cU) | ((IData)(((((QData)((IData)(
                                                             (0x008fU 
                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                                                                 >> 0x00000010U)))) 
                                             << 0x0000001cU) 
                                            | (QData)((IData)(
                                                              (0x0023c08fU 
                                                               & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                                                                   << 0x0000000cU) 
                                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[2U] 
                                                                     >> 0x00000014U)))))) 
                                           >> 0x00000020U)) 
                                  << 0x00000014U)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[3U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_he50b618e_0_932[3U]) 
           | ((IData)((((QData)((IData)((0x008fU & 
                                         ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[5U] 
                                           << 6U) | 
                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[4U] 
                                           >> 0x0000001aU))))) 
                        << 0x0000001cU) | (QData)((IData)(
                                                          (0x0023c08fU 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[4U] 
                                                               << 2U) 
                                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                                                                 >> 0x0000001eU))))))) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[4U] 
        = (((IData)((((QData)((IData)((0x008fU & ((
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[5U] 
                                                   << 6U) 
                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[4U] 
                                                     >> 0x0000001aU))))) 
                      << 0x0000001cU) | (QData)((IData)(
                                                        (0x0023c08fU 
                                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[4U] 
                                                             << 2U) 
                                                            | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                                                               >> 0x0000001eU))))))) 
            >> 2U) | ((IData)(((((QData)((IData)((0x008fU 
                                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[5U] 
                                                      << 6U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[4U] 
                                                        >> 0x0000001aU))))) 
                                 << 0x0000001cU) | (QData)((IData)(
                                                                   (0x0023c08fU 
                                                                    & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[4U] 
                                                                        << 2U) 
                                                                       | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                                                                          >> 0x0000001eU)))))) 
                               >> 0x00000020U)) << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[5U] 
        = ((0xffffff00U & vlSelfRef.__VdfgRegularize_he50b618e_0_932[5U]) 
           | ((IData)(((((QData)((IData)((0x008fU & 
                                          ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[5U] 
                                            << 6U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[4U] 
                                              >> 0x0000001aU))))) 
                         << 0x0000001cU) | (QData)((IData)(
                                                           (0x0023c08fU 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[4U] 
                                                                << 2U) 
                                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                                                                  >> 0x0000001eU)))))) 
                       >> 0x00000020U)) >> 2U));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[5U] 
        = ((0x000000ffU & vlSelfRef.__VdfgRegularize_he50b618e_0_932[5U]) 
           | (0x23c08f00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[5U]));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[6U] 
        = (0xfffffff0U & vlSelfRef.__VdfgRegularize_he50b618e_0_932[6U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[6U] 
        = ((0x0000000fU & vlSelfRef.__VdfgRegularize_he50b618e_0_932[6U]) 
           | (0x023c08f0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[6U]));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[7U] 
        = (IData)((((QData)((IData)((0x008fU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[8U] 
                                                 << 4U) 
                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[7U] 
                                                   >> 0x0000001cU))))) 
                    << 0x0000001cU) | (QData)((IData)(
                                                      (0x0023c08fU 
                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[7U])))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[8U] 
        = ((0xfffffc00U & vlSelfRef.__VdfgRegularize_he50b618e_0_932[8U]) 
           | (IData)(((((QData)((IData)((0x008fU & 
                                         ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[8U] 
                                           << 4U) | 
                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[7U] 
                                           >> 0x0000001cU))))) 
                        << 0x0000001cU) | (QData)((IData)(
                                                          (0x0023c08fU 
                                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[7U])))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[8U] 
        = ((0x000003ffU & vlSelfRef.__VdfgRegularize_he50b618e_0_932[8U]) 
           | ((IData)((((QData)((IData)((0x008fU & 
                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[9U] 
                                          >> 6U)))) 
                        << 0x0000001cU) | (QData)((IData)(
                                                          (0x0023c08fU 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[8U] 
                                                              >> 0x0000000aU)))))) 
              << 0x0000000aU));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[9U] 
        = ((0xfff00000U & vlSelfRef.__VdfgRegularize_he50b618e_0_932[9U]) 
           | (((IData)((((QData)((IData)((0x008fU & 
                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[9U] 
                                           >> 6U)))) 
                         << 0x0000001cU) | (QData)((IData)(
                                                           (0x0023c08fU 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[8U] 
                                                               >> 0x0000000aU)))))) 
               >> 0x00000016U) | ((IData)(((((QData)((IData)(
                                                             (0x008fU 
                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[9U] 
                                                                 >> 6U)))) 
                                             << 0x0000001cU) 
                                            | (QData)((IData)(
                                                              (0x0023c08fU 
                                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[8U] 
                                                                  >> 0x0000000aU))))) 
                                           >> 0x00000020U)) 
                                  << 0x0000000aU)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[9U] 
        = ((0x000fffffU & vlSelfRef.__VdfgRegularize_he50b618e_0_932[9U]) 
           | ((IData)((((QData)((IData)((0x008fU & 
                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                                          >> 0x00000010U)))) 
                        << 0x0000001cU) | (QData)((IData)(
                                                          (0x0023c08fU 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                                                               << 0x0000000cU) 
                                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[9U] 
                                                                 >> 0x00000014U))))))) 
              << 0x00000014U));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[0x0000000aU] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_he50b618e_0_932[0x0000000aU]) 
           | (((IData)((((QData)((IData)((0x008fU & 
                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                                           >> 0x00000010U)))) 
                         << 0x0000001cU) | (QData)((IData)(
                                                           (0x0023c08fU 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                                                                << 0x0000000cU) 
                                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[9U] 
                                                                  >> 0x00000014U))))))) 
               >> 0x0000000cU) | ((IData)(((((QData)((IData)(
                                                             (0x008fU 
                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                                                                 >> 0x00000010U)))) 
                                             << 0x0000001cU) 
                                            | (QData)((IData)(
                                                              (0x0023c08fU 
                                                               & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                                                                   << 0x0000000cU) 
                                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[9U] 
                                                                     >> 0x00000014U)))))) 
                                           >> 0x00000020U)) 
                                  << 0x00000014U)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[0x0000000aU] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_he50b618e_0_932[0x0000000aU]) 
           | ((IData)((((QData)((IData)((0x008fU & 
                                         ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000cU] 
                                           << 6U) | 
                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000bU] 
                                           >> 0x0000001aU))))) 
                        << 0x0000001cU) | (QData)((IData)(
                                                          (0x0023c08fU 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000bU] 
                                                               << 2U) 
                                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                                                                 >> 0x0000001eU))))))) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[0x0000000bU] 
        = (((IData)((((QData)((IData)((0x008fU & ((
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000cU] 
                                                   << 6U) 
                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000bU] 
                                                     >> 0x0000001aU))))) 
                      << 0x0000001cU) | (QData)((IData)(
                                                        (0x0023c08fU 
                                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000bU] 
                                                             << 2U) 
                                                            | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                                                               >> 0x0000001eU))))))) 
            >> 2U) | ((IData)(((((QData)((IData)((0x008fU 
                                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000cU] 
                                                      << 6U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000bU] 
                                                        >> 0x0000001aU))))) 
                                 << 0x0000001cU) | (QData)((IData)(
                                                                   (0x0023c08fU 
                                                                    & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000bU] 
                                                                        << 2U) 
                                                                       | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                                                                          >> 0x0000001eU)))))) 
                               >> 0x00000020U)) << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[0x0000000cU] 
        = ((0xffffff00U & vlSelfRef.__VdfgRegularize_he50b618e_0_932[0x0000000cU]) 
           | ((IData)(((((QData)((IData)((0x008fU & 
                                          ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000cU] 
                                            << 6U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000bU] 
                                              >> 0x0000001aU))))) 
                         << 0x0000001cU) | (QData)((IData)(
                                                           (0x0023c08fU 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000bU] 
                                                                << 2U) 
                                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                                                                  >> 0x0000001eU)))))) 
                       >> 0x00000020U)) >> 2U));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[0x0000000cU] 
        = ((0x000000ffU & vlSelfRef.__VdfgRegularize_he50b618e_0_932[0x0000000cU]) 
           | (0x23c08f00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000cU]));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[0x0000000dU] 
        = (0xfffffff0U & vlSelfRef.__VdfgRegularize_he50b618e_0_932[0x0000000dU]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[0x0000000dU] 
        = ((0x0000000fU & vlSelfRef.__VdfgRegularize_he50b618e_0_932[0x0000000dU]) 
           | (0x023c08f0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000dU]));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[0x0000000eU] 
        = (IData)((((QData)((IData)((0x008fU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000fU] 
                                                 << 4U) 
                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000eU] 
                                                   >> 0x0000001cU))))) 
                    << 0x0000001cU) | (QData)((IData)(
                                                      (0x0023c08fU 
                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000eU])))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_932[0x0000000fU] 
        = (0x000003ffU & (IData)(((((QData)((IData)(
                                                    (0x008fU 
                                                     & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000fU] 
                                                         << 4U) 
                                                        | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000eU] 
                                                           >> 0x0000001cU))))) 
                                    << 0x0000001cU) 
                                   | (QData)((IData)(
                                                     (0x0023c08fU 
                                                      & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000eU])))) 
                                  >> 0x00000020U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_367 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_12__q) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_oe_retreg_q) 
              >> 0x0000000cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_366 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_12__q) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_out_retreg_q) 
              >> 0x0000000cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_372 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_13__q) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_oe_retreg_q) 
              >> 0x0000000dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_371 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_13__q) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_out_retreg_q) 
              >> 0x0000000dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_357 
        = ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_10__q))) 
           || (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_oe_retreg_q) 
                     >> 0x0000000aU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_362 
        = ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_11__q))) 
           || (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_oe_retreg_q) 
                     >> 0x0000000bU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_timeout_err_sync__DOT__q_sync_d 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_timeout_err_sync__DOT__g_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_timeout_err_sync__DOT__q_sync_d 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_timeout_err_sync__DOT__g_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_timeout_err_sync__DOT__q_sync_d 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_timeout_err_sync__DOT__g_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_timeout_err_sync__DOT__q_sync_d 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_timeout_err_sync__DOT__g_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_timeout_err_sync__DOT__q_sync_d 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_timeout_err_sync__DOT__g_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__cio_tck_i 
        = (1U & (IData)(((2ULL | (0x0000001ffffffffcULL 
                                  & ((QData)((IData)(
                                                     ((IData)(vlSelfRef.chip_sim_tb__DOT__cio_uart_rx_p2d) 
                                                      << 0x00000019U))) 
                                     << 2U))) >> (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_47__q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__cio_tdi_i 
        = (1U & (IData)(((2ULL | (0x0000001ffffffffcULL 
                                  & ((QData)((IData)(
                                                     ((IData)(vlSelfRef.chip_sim_tb__DOT__cio_uart_rx_p2d) 
                                                      << 0x00000019U))) 
                                     << 2U))) >> (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_49__q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__i_usbdev_iomux__DOT__cio_usb_sense_i 
        = (1U & (IData)(((2ULL | (0x0000001ffffffffcULL 
                                  & ((QData)((IData)(
                                                     ((IData)(vlSelfRef.chip_sim_tb__DOT__cio_uart_rx_p2d) 
                                                      << 0x00000019U))) 
                                     << 2U))) >> (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_56__q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__cio_tms_i 
        = (1U & (IData)(((2ULL | (0x0000001ffffffffcULL 
                                  & ((QData)((IData)(
                                                     ((IData)(vlSelfRef.chip_sim_tb__DOT__cio_uart_rx_p2d) 
                                                      << 0x00000019U))) 
                                     << 2U))) >> (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_48__q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_sys_tpm_csb_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (1U & (IData)(((2ULL | (0x0000001ffffffffcULL 
                                  & ((QData)((IData)(
                                                     ((IData)(vlSelfRef.chip_sim_tb__DOT__cio_uart_rx_p2d) 
                                                      << 0x00000019U))) 
                                     << 2U))) >> (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_46__q))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_896 = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1156[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_896))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1156[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1156[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_896))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1156[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1156[1U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1156[2U] 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_measure_ctrl_regwen__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT____Vcellout__u_measure_ctrl_regwen__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_measure_ctrl_regwen__DOT__wr_data;
        }
        if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_timeout_sync.q_o) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__esc_timeout_lc_q = 1U;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__mubi_sync;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__mubi_sync;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__mubi_sync;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__mubi_sync;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__mubi_sync;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_lo__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_lo__DOT__committed_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_lo__DOT__committed_reg__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_hi__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_hi__DOT__committed_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_hi__DOT__committed_reg__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__dst_qs 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__dst_ds_i;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__dst_qs 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT____Vcellout__u_io_div4_meas_ctrl_en__q;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT____Vcellout__u_measure_ctrl_regwen__q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__esc_timeout_lc_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 9U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 9U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 9U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 9U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 9U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_lo__DOT__committed_q = 0x6eU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_hi__DOT__committed_q = 0x82U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__dst_qs = 9U;
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q)))))))) {
        if ((0U != (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_reg_cdc_arb.sv:207: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_reg.u_io_div4_meas_ctrl_en_cdc.u_arb.gen_wr_req: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_reg_cdc_arb.sv", 207, "");
            }
        }
    }
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__mubi_sync 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__dst_update_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT____Vcellout__u_io_div4_meas_ctrl_en__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en__DOT__wr_data;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__ast_init_done;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__mubi_sync = 9U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT____Vcellout__u_io_div4_meas_ctrl_en__q = 9U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 9U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_timeout_err__DOT__de 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_timeout_err_sync__DOT__q_sync_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_timeout_err_sync__DOT__q_sync_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_timeout_err_sync__DOT__g_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__ref_timeout_err));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_div2_timeout_err__DOT__de 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_timeout_err_sync__DOT__q_sync_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_timeout_err_sync__DOT__q_sync_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_timeout_err_sync__DOT__g_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__ref_timeout_err));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_div4_timeout_err__DOT__de 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_timeout_err_sync__DOT__q_sync_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_timeout_err_sync__DOT__q_sync_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_timeout_err_sync__DOT__g_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__ref_timeout_err));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_main_timeout_err__DOT__de 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_timeout_err_sync__DOT__q_sync_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_timeout_err_sync__DOT__q_sync_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_timeout_err_sync__DOT__g_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__ref_timeout_err));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_usb_timeout_err__DOT__de 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_timeout_err_sync__DOT__q_sync_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_timeout_err_sync__DOT__q_sync_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_timeout_err_sync__DOT__g_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__ref_timeout_err));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1156[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1156[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
            << 1U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1156[2U]);
    __Vfunc_extract_d2h_rsp_intg__377__tl[0U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    __Vfunc_extract_d2h_rsp_intg__377__tl[1U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    __Vfunc_extract_d2h_rsp_intg__377__tl[2U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    __Vfunc_extract_d2h_rsp_intg__377__payload = ((0x00000038U 
                                                   & ((__Vfunc_extract_d2h_rsp_intg__377__tl[2U] 
                                                       << 5U) 
                                                      | (0x00000018U 
                                                         & (__Vfunc_extract_d2h_rsp_intg__377__tl[1U] 
                                                            >> 0x0000001bU)))) 
                                                  | ((6U 
                                                      & (__Vfunc_extract_d2h_rsp_intg__377__tl[1U] 
                                                         >> 0x00000018U)) 
                                                     | (1U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__377__tl[0U] 
                                                           >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__377__Vfuncout = __Vfunc_extract_d2h_rsp_intg__377__payload;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__377__Vfuncout;
    __Vfunc_mubi4_test_false_strict__397__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__mubi_sync;
    __Vfunc_mubi4_test_false_strict__397__Vfuncout 
        = (9U == (IData)(__Vfunc_mubi4_test_false_strict__397__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT____VdfgExtracted_hc71b66f0__0 
        = __Vfunc_mubi4_test_false_strict__397__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT____Vcellout__u_io_div4_meas__src_cfg_meas_en_valid_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT____Vcellout__u_io_div4_meas__src_cfg_meas_en_o 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT____Vcellout__u_io_div4_meas_ctrl_en__q;
    if ((([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_false_strict__417__val 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_calib_rdy_sync__DOT__gen_flops__DOT__mubi_sync;
                    vlSelfRef.__Vfunc_mubi4_test_false_strict__417__Vfuncout 
                        = (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_false_strict__417__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_false_strict__417__Vfuncout)) 
         & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__418__val 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT____Vcellout__u_io_div4_meas__src_cfg_meas_en_o;
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__418__Vfuncout 
                        = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__418__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__418__Vfuncout)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT____Vcellout__u_io_div4_meas__src_cfg_meas_en_valid_o = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT____Vcellout__u_io_div4_meas__src_cfg_meas_en_o = 9U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1155 = (
                                                   ((((((2U 
                                                         & (VL_REDXOR_32(
                                                                         (0x10U 
                                                                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              VL_REDXOR_32(
                                                                           (8U 
                                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & (VL_REDXOR_32(
                                                                           (4U 
                                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x22U 
                                                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & (VL_REDXOR_32(
                                                                           (0x21U 
                                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x98505586U 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)))))) 
                                                    << 8U) 
                                                   | (((((2U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0x2dcc624cU 
                                                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xc2c1323bU 
                                                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                        << 6U) 
                                                       | (((2U 
                                                            & ((~ 
                                                                VL_REDXOR_32(
                                                                             (0x31234ed1U 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x413d89aaU 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0xdeba8050U 
                                                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & (VL_REDXOR_32(
                                                                             (0x2606bd25U 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                                << 2U)) 
                                                            | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_896)))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_76 = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT____VdfgExtracted_hc71b66f0__0)
                                                  ? 3U
                                                  : 
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT____Vcellout__u_measure_ctrl_regwen__q) 
                                                  << 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x0000000cU][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0x0000000cU][0U]) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1155));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x0000000cU][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0x0000000cU][0U]) | ((IData)((0x0003ffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
                                  << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x0000000cU][1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x0000000cU][2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000000cU][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000000cU][0U]) | ((0x0000fffeU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1155)) 
                                  | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000000cU][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000000cU][0U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                    : 0U) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000000cU][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000000cU][1U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                    : 0U) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000000cU][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000000cU][1U]) | (0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1156[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000000cU][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000000cU][2U]) | (1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1156[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000000cU][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000000cU][2U]) | (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                                        << 1U)));
}

void Vsim___024root___nba_sequent__TOP__54(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__54\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_lc_to_mubi4__403__Vfuncout;
    __Vfunc_lc_to_mubi4__403__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_to_mubi4__403__val;
    __Vfunc_lc_to_mubi4__403__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__404__Vfuncout;
    __Vfunc_mubi4_and_hi__404__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__404__a;
    __Vfunc_mubi4_and_hi__404__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__404__b;
    __Vfunc_mubi4_and_hi__404__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__405__Vfuncout;
    __Vfunc_mubi4_and__405__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__405__a;
    __Vfunc_mubi4_and__405__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__405__b;
    __Vfunc_mubi4_and__405__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__405__a_in;
    __Vfunc_mubi4_and__405__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__405__b_in;
    __Vfunc_mubi4_and__405__b_in = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_fatal_err_code_shadow_storage_err__DOT__de 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_hi_err_storage_sync.q_o) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_lo_err_storage_sync.q_o) 
              | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_hi_err_storage_sync.q_o) 
                 | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_lo_err_storage_sync.q_o) 
                    | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_hi_err_storage_sync.q_o) 
                       | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_lo_err_storage_sync.q_o) 
                          | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_hi_err_storage_sync.q_o) 
                             | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_lo_err_storage_sync.q_o) 
                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_hi_err_storage_sync.q_o) 
                                   | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_lo_err_storage_sync.q_o))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__idle_cnt_err 
        = ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_otbn_trans__u_err_sync.q_o) 
             << 3U) | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_kmac_trans__DOT__u_err_sync.q_o) 
                       << 2U)) | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_hmac_trans__u_err_sync.q_o) 
                                   << 1U) | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_err_sync.q_o)));
    __Vfunc_lc_to_mubi4__403__val = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clkmgr_byp__DOT__u_en_sync.__PVT__lc_en;
    __Vfunc_lc_to_mubi4__403__Vfuncout = (3U ^ (IData)(__Vfunc_lc_to_mubi4__403__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clkmgr_byp__DOT__debug_en 
        = __Vfunc_lc_to_mubi4__403__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req 
        = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_div2_measure_err__DOT__de 
        = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_err_sync.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_err_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_err_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req 
        = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_usb_measure_err__DOT__de 
        = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_err_sync.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_err_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_err_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req 
        = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_measure_err__DOT__de 
        = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_err_sync.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_err_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_err_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req 
        = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_main_measure_err__DOT__de 
        = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_err_sync.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_err_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_err_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req 
        = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_meas__DOT__valid_o 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_meas__DOT__u_sync_ref__DOT__dst_level_q) 
            ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_meas__DOT__u_sync_ref__DOT__prim_flop_2sync.q_o)) 
           & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_meas__DOT__cnt)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__src_level 
        = vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__src_level;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_0_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_0_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_0_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_1_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_1_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_1_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_2_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_2_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_2_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_3_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_3_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_3_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_4_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_4_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_4_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_5_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_5_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_5_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_6_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_6_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_6_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_7_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_7_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_7_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_hi_err_update_sync__DOT__src_level 
        = vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_hi_err_update_sync__DOT__src_level;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_lo_err_update_sync__DOT__src_level 
        = vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_lo_err_update_sync__DOT__src_level;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_shadow_update_err__DOT__de 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_hi_err_update_sync__DOT__dst_level_q) 
            ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_hi_err_update_sync__DOT__prim_flop_2sync.q_o)) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_lo_err_update_sync__DOT__dst_level_q) 
               ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_lo_err_update_sync__DOT__prim_flop_2sync.q_o)) 
              | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_hi_err_update_sync__DOT__dst_level_q) 
                  ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_hi_err_update_sync__DOT__prim_flop_2sync.q_o)) 
                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_lo_err_update_sync__DOT__dst_level_q) 
                     ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_lo_err_update_sync__DOT__prim_flop_2sync.q_o)) 
                    | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_hi_err_update_sync__DOT__dst_level_q) 
                        ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_hi_err_update_sync__DOT__prim_flop_2sync.q_o)) 
                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_lo_err_update_sync__DOT__dst_level_q) 
                           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_lo_err_update_sync__DOT__prim_flop_2sync.q_o)) 
                          | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_hi_err_update_sync__DOT__dst_level_q) 
                              ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_hi_err_update_sync__DOT__prim_flop_2sync.q_o)) 
                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_lo_err_update_sync__DOT__dst_level_q) 
                                 ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_lo_err_update_sync__DOT__prim_flop_2sync.q_o)) 
                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_hi_err_update_sync__DOT__dst_level_q) 
                                    ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_hi_err_update_sync__DOT__prim_flop_2sync.q_o)) 
                                   | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_lo_err_update_sync__DOT__dst_level_q) 
                                      ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_lo_err_update_sync__DOT__prim_flop_2sync.q_o)))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__dst_req_from_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__u_src_to_dst_req__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__u_src_to_dst_req__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__u_src_to_dst_req__DOT__src_level;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__dst_req_from_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_src_to_dst_req__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_src_to_dst_req__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_src_to_dst_req__DOT__src_level;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_0__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_0__DOT__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_0__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_2__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_2__DOT__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_2__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_4__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_4__DOT__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_4__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_6__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_6__DOT__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_6__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_1__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_1__DOT__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_1__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_3__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_3__DOT__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_3__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_5__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_5__DOT__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_5__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_7__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_7__DOT__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_7__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_clk_enables_clk_io_div2_peri_en__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT____Vcellout__u_clk_enables_clk_io_div4_peri_en__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_clk_enables_clk_io_div4_peri_en__DOT__wr_data;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_0__DOT__q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_2__DOT__q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_4__DOT__q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_6__DOT__q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_1__DOT__q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_3__DOT__q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_5__DOT__q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_regwen_7__DOT__q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT____Vcellout__u_clk_enables_clk_io_div4_peri_en__q = 1U;
    }
    __Vfunc_mubi4_and_hi__404__b = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clkmgr_byp__DOT__debug_en;
    __Vfunc_mubi4_and_hi__404__a = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT____Vcellout__u_extclk_ctrl_sel__q;
    __Vfunc_mubi4_and__405__b = __Vfunc_mubi4_and_hi__404__b;
    __Vfunc_mubi4_and__405__a = __Vfunc_mubi4_and_hi__404__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi4_and__405__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11666975156767243984ull);
    __Vfunc_mubi4_and__405__a_in = __Vfunc_mubi4_and__405__a;
    __Vfunc_mubi4_and__405__b_in = __Vfunc_mubi4_and__405__b;
    vlSelfRef.__Vfunc_mubi4_and__405__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi4_and__405__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi4_and__405__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__405__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi4_and__405__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__405__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__405__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__405__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi4_and__405__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__405__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi4_and__405__a_in) 
                                                        & (IData)(__Vfunc_mubi4_and__405__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_mubi4_and__405__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__405__out;
    __Vfunc_mubi4_and_hi__404__Vfuncout = __Vfunc_mubi4_and__405__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clkmgr_byp__DOT__all_clk_byp_req_d 
        = __Vfunc_mubi4_and_hi__404__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_0_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_0_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_0_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_1_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_1_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_1_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_2_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_2_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_2_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_3_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_3_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_3_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_4_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_4_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_4_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_5_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_5_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_5_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_6_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_6_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_6_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_7_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_7_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_cnt_th_7_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__dst_re_o 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__txn_bits_q) 
            >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__dst_req_from_src));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_hi__DOT__wr_en_data_arb__DOT__we 
        = (IData)(((5U == (5U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__txn_bits_q))) 
                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__dst_req_from_src)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__dst_req_from_src) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req_q));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_hi__DOT__wr_en_data_arb__DOT__we) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_hi__DOT__committed_reg__DOT__wd 
            = (0x000000ffU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__src_q));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_lo__DOT__committed_reg__DOT__wd 
            = (0x000000ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__src_q) 
                              >> 8U));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_hi__DOT__committed_reg__DOT__wd = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_lo__DOT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__dst_req 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en__DOT__we 
        = (IData)(((5U == (5U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__txn_bits_q))) 
                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__dst_req)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en__DOT__we)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__src_q)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT____Vcellout__u_io_div4_meas__src_cfg_meas_en_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__dst_update_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT____Vcellout__u_io_div4_meas__src_cfg_meas_en_valid_o) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en__DOT__we));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__dst_update_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__dst_ds_i 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en__DOT__wr_data;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__dst_update 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__dst_qs) 
               != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__dst_ds_i));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__dst_ds_i 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT____Vcellout__u_io_div4_meas_ctrl_en__q;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__dst_update = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q = 0U;
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q)))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__dst_update) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req)))) {
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__dst_update)))) {
                if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__dst_qs) 
                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT____Vcellout__u_io_div4_meas_ctrl_en__q))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q = 1U;
                }
            }
        }
    }
}

void Vsim___024root___nba_sequent__TOP__55(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__55\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack 
        = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__ack_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__ack_sync.q_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req 
        = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__src_err_req 
        = vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__src_err_req;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_div4_measure_err__DOT__de 
        = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_err_sync.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_err_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_err_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o)));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 0U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__dst_update) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__dst_qs) 
                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT____Vcellout__u_io_div4_meas_ctrl_en__q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__src_ack 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__id_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__dst_to_src 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__src_ack) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__src_busy_q)) 
           | ((~ ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__src_ack)) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__src_busy_q))) 
              & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__id_q) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))));
}

extern const VlUnpacked<SData/*15:0*/, 256> Vsim__ConstPool__TABLE_h55356e1a_0;

void Vsim___024root___nba_sequent__TOP__56(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__56\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hb453e96e__1;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hb453e96e__1 = 0;
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__470__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__470__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__470__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__470__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__470__payload;
    __Vfunc_extract_d2h_rsp_intg__470__payload = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__513__Vfuncout;
    __Vfunc_mubi4_test_true_loose__513__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__513__val;
    __Vfunc_mubi4_test_true_loose__513__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__534__Vfuncout;
    __Vfunc_mubi4_test_true_loose__534__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__534__val;
    __Vfunc_mubi4_test_true_loose__534__val = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__595__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__595__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__595__state_in;
    __Vfunc_prince_mult_prime_64bit__595__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__596__Vfuncout;
    __Vfunc_prince_nibble_red16__596__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__596__vect;
    __Vfunc_prince_nibble_red16__596__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__597__Vfuncout;
    __Vfunc_prince_nibble_red16__597__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__597__vect;
    __Vfunc_prince_nibble_red16__597__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__598__Vfuncout;
    __Vfunc_prince_nibble_red16__598__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__598__vect;
    __Vfunc_prince_nibble_red16__598__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__599__Vfuncout;
    __Vfunc_prince_nibble_red16__599__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__599__vect;
    __Vfunc_prince_nibble_red16__599__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__600__Vfuncout;
    __Vfunc_prince_nibble_red16__600__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__600__vect;
    __Vfunc_prince_nibble_red16__600__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__601__Vfuncout;
    __Vfunc_prince_nibble_red16__601__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__601__vect;
    __Vfunc_prince_nibble_red16__601__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__602__Vfuncout;
    __Vfunc_prince_nibble_red16__602__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__602__vect;
    __Vfunc_prince_nibble_red16__602__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__603__Vfuncout;
    __Vfunc_prince_nibble_red16__603__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__603__vect;
    __Vfunc_prince_nibble_red16__603__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__604__Vfuncout;
    __Vfunc_prince_nibble_red16__604__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__604__vect;
    __Vfunc_prince_nibble_red16__604__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__605__Vfuncout;
    __Vfunc_prince_nibble_red16__605__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__605__vect;
    __Vfunc_prince_nibble_red16__605__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__606__Vfuncout;
    __Vfunc_prince_nibble_red16__606__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__606__vect;
    __Vfunc_prince_nibble_red16__606__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__607__Vfuncout;
    __Vfunc_prince_nibble_red16__607__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__607__vect;
    __Vfunc_prince_nibble_red16__607__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__608__Vfuncout;
    __Vfunc_prince_nibble_red16__608__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__608__vect;
    __Vfunc_prince_nibble_red16__608__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__609__Vfuncout;
    __Vfunc_prince_nibble_red16__609__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__609__vect;
    __Vfunc_prince_nibble_red16__609__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__610__Vfuncout;
    __Vfunc_prince_nibble_red16__610__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__610__vect;
    __Vfunc_prince_nibble_red16__610__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__611__Vfuncout;
    __Vfunc_prince_nibble_red16__611__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__611__vect;
    __Vfunc_prince_nibble_red16__611__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__612__Vfuncout;
    __Vfunc_sbox4_64bit__612__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__612__state_in;
    __Vfunc_sbox4_64bit__612__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__613__Vfuncout;
    __Vfunc_sbox4_8bit__613__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__613__state_in;
    __Vfunc_sbox4_8bit__613__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__614__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__614__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__614__state_in;
    __Vfunc_prince_mult_prime_64bit__614__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__615__Vfuncout;
    __Vfunc_prince_nibble_red16__615__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__615__vect;
    __Vfunc_prince_nibble_red16__615__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__616__Vfuncout;
    __Vfunc_prince_nibble_red16__616__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__616__vect;
    __Vfunc_prince_nibble_red16__616__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__617__Vfuncout;
    __Vfunc_prince_nibble_red16__617__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__617__vect;
    __Vfunc_prince_nibble_red16__617__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__618__Vfuncout;
    __Vfunc_prince_nibble_red16__618__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__618__vect;
    __Vfunc_prince_nibble_red16__618__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__619__Vfuncout;
    __Vfunc_prince_nibble_red16__619__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__619__vect;
    __Vfunc_prince_nibble_red16__619__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__620__Vfuncout;
    __Vfunc_prince_nibble_red16__620__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__620__vect;
    __Vfunc_prince_nibble_red16__620__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__621__Vfuncout;
    __Vfunc_prince_nibble_red16__621__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__621__vect;
    __Vfunc_prince_nibble_red16__621__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__622__Vfuncout;
    __Vfunc_prince_nibble_red16__622__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__622__vect;
    __Vfunc_prince_nibble_red16__622__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__623__Vfuncout;
    __Vfunc_prince_nibble_red16__623__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__623__vect;
    __Vfunc_prince_nibble_red16__623__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__624__Vfuncout;
    __Vfunc_prince_nibble_red16__624__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__624__vect;
    __Vfunc_prince_nibble_red16__624__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__625__Vfuncout;
    __Vfunc_prince_nibble_red16__625__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__625__vect;
    __Vfunc_prince_nibble_red16__625__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__626__Vfuncout;
    __Vfunc_prince_nibble_red16__626__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__626__vect;
    __Vfunc_prince_nibble_red16__626__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__627__Vfuncout;
    __Vfunc_prince_nibble_red16__627__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__627__vect;
    __Vfunc_prince_nibble_red16__627__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__628__Vfuncout;
    __Vfunc_prince_nibble_red16__628__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__628__vect;
    __Vfunc_prince_nibble_red16__628__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__629__Vfuncout;
    __Vfunc_prince_nibble_red16__629__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__629__vect;
    __Vfunc_prince_nibble_red16__629__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__630__Vfuncout;
    __Vfunc_prince_nibble_red16__630__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__630__vect;
    __Vfunc_prince_nibble_red16__630__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__631__Vfuncout;
    __Vfunc_sbox4_64bit__631__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__631__state_in;
    __Vfunc_sbox4_64bit__631__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__632__Vfuncout;
    __Vfunc_sbox4_8bit__632__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__632__state_in;
    __Vfunc_sbox4_8bit__632__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__633__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__633__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__633__state_in;
    __Vfunc_prince_mult_prime_64bit__633__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__634__Vfuncout;
    __Vfunc_prince_nibble_red16__634__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__634__vect;
    __Vfunc_prince_nibble_red16__634__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__635__Vfuncout;
    __Vfunc_prince_nibble_red16__635__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__635__vect;
    __Vfunc_prince_nibble_red16__635__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__636__Vfuncout;
    __Vfunc_prince_nibble_red16__636__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__636__vect;
    __Vfunc_prince_nibble_red16__636__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__637__Vfuncout;
    __Vfunc_prince_nibble_red16__637__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__637__vect;
    __Vfunc_prince_nibble_red16__637__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__638__Vfuncout;
    __Vfunc_prince_nibble_red16__638__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__638__vect;
    __Vfunc_prince_nibble_red16__638__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__639__Vfuncout;
    __Vfunc_prince_nibble_red16__639__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__639__vect;
    __Vfunc_prince_nibble_red16__639__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__640__Vfuncout;
    __Vfunc_prince_nibble_red16__640__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__640__vect;
    __Vfunc_prince_nibble_red16__640__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__641__Vfuncout;
    __Vfunc_prince_nibble_red16__641__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__641__vect;
    __Vfunc_prince_nibble_red16__641__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__642__Vfuncout;
    __Vfunc_prince_nibble_red16__642__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__642__vect;
    __Vfunc_prince_nibble_red16__642__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__643__Vfuncout;
    __Vfunc_prince_nibble_red16__643__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__643__vect;
    __Vfunc_prince_nibble_red16__643__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__644__Vfuncout;
    __Vfunc_prince_nibble_red16__644__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__644__vect;
    __Vfunc_prince_nibble_red16__644__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__645__Vfuncout;
    __Vfunc_prince_nibble_red16__645__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__645__vect;
    __Vfunc_prince_nibble_red16__645__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__646__Vfuncout;
    __Vfunc_prince_nibble_red16__646__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__646__vect;
    __Vfunc_prince_nibble_red16__646__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__647__Vfuncout;
    __Vfunc_prince_nibble_red16__647__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__647__vect;
    __Vfunc_prince_nibble_red16__647__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__648__Vfuncout;
    __Vfunc_prince_nibble_red16__648__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__648__vect;
    __Vfunc_prince_nibble_red16__648__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__649__Vfuncout;
    __Vfunc_prince_nibble_red16__649__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__649__vect;
    __Vfunc_prince_nibble_red16__649__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__650__Vfuncout;
    __Vfunc_sbox4_64bit__650__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__650__state_in;
    __Vfunc_sbox4_64bit__650__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__651__Vfuncout;
    __Vfunc_sbox4_8bit__651__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__651__state_in;
    __Vfunc_sbox4_8bit__651__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__652__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__652__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__652__state_in;
    __Vfunc_prince_mult_prime_64bit__652__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__653__Vfuncout;
    __Vfunc_prince_nibble_red16__653__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__653__vect;
    __Vfunc_prince_nibble_red16__653__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__654__Vfuncout;
    __Vfunc_prince_nibble_red16__654__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__654__vect;
    __Vfunc_prince_nibble_red16__654__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__655__Vfuncout;
    __Vfunc_prince_nibble_red16__655__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__655__vect;
    __Vfunc_prince_nibble_red16__655__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__656__Vfuncout;
    __Vfunc_prince_nibble_red16__656__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__656__vect;
    __Vfunc_prince_nibble_red16__656__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__657__Vfuncout;
    __Vfunc_prince_nibble_red16__657__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__657__vect;
    __Vfunc_prince_nibble_red16__657__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__658__Vfuncout;
    __Vfunc_prince_nibble_red16__658__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__658__vect;
    __Vfunc_prince_nibble_red16__658__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__659__Vfuncout;
    __Vfunc_prince_nibble_red16__659__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__659__vect;
    __Vfunc_prince_nibble_red16__659__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__660__Vfuncout;
    __Vfunc_prince_nibble_red16__660__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__660__vect;
    __Vfunc_prince_nibble_red16__660__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__661__Vfuncout;
    __Vfunc_prince_nibble_red16__661__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__661__vect;
    __Vfunc_prince_nibble_red16__661__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__662__Vfuncout;
    __Vfunc_prince_nibble_red16__662__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__662__vect;
    __Vfunc_prince_nibble_red16__662__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__663__Vfuncout;
    __Vfunc_prince_nibble_red16__663__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__663__vect;
    __Vfunc_prince_nibble_red16__663__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__664__Vfuncout;
    __Vfunc_prince_nibble_red16__664__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__664__vect;
    __Vfunc_prince_nibble_red16__664__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__665__Vfuncout;
    __Vfunc_prince_nibble_red16__665__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__665__vect;
    __Vfunc_prince_nibble_red16__665__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__666__Vfuncout;
    __Vfunc_prince_nibble_red16__666__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__666__vect;
    __Vfunc_prince_nibble_red16__666__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__667__Vfuncout;
    __Vfunc_prince_nibble_red16__667__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__667__vect;
    __Vfunc_prince_nibble_red16__667__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__668__Vfuncout;
    __Vfunc_prince_nibble_red16__668__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__668__vect;
    __Vfunc_prince_nibble_red16__668__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__669__Vfuncout;
    __Vfunc_sbox4_64bit__669__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__669__state_in;
    __Vfunc_sbox4_64bit__669__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__670__Vfuncout;
    __Vfunc_sbox4_8bit__670__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__670__state_in;
    __Vfunc_sbox4_8bit__670__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__677__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__677__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__677__state_in;
    __Vfunc_prince_shiftrows_64bit__677__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__678__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__678__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__678__state_in;
    __Vfunc_prince_shiftrows_64bit__678__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__679__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__679__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__679__state_in;
    __Vfunc_prince_shiftrows_64bit__679__state_in = 0;
    CData/*7:0*/ __Vtableidx100;
    __Vtableidx100 = 0;
    CData/*1:0*/ __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    // Body
    vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__u_src_to_dst_req__DOT__src_level) 
               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__src_we_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__gen_max_len_sva__DOT__perturbed_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__gen_max_len_sva__DOT__perturbed_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__u_decode_esc__DOT__level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__u_decode_esc__DOT__level_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_intr_state__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_intr_state__DOT__d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_data_reg__DOT__valid_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__valid_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__u_match_sync.dst_req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__intr_sysrst_ctrl_aon_event_detected 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_intr_state__DOT__d) 
               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_intr_enable__q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_status_ast_init_done__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_init_chg__DOT__q_sync_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_init_chg__DOT__q_sync_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_init_chg__DOT__q_sync_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__init_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__init_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__missed_err_gnt_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__error_o) 
               & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT____VdfgRegularize_hba58573d_0_0)) 
                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
                     >> 0x0000000cU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_in_value_pwrb_in__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT____Vcellout__u_cfg_ac_present_i_pin__q_o) 
                     >> 7U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_in_value_key0_in__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT____Vcellout__u_cfg_ac_present_i_pin__q_o) 
                     >> 6U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_in_value_key1_in__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT____Vcellout__u_cfg_ac_present_i_pin__q_o) 
                     >> 5U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_in_value_key2_in__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT____Vcellout__u_cfg_ac_present_i_pin__q_o) 
                     >> 4U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_in_value_lid_open__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT____Vcellout__u_cfg_ac_present_i_pin__q_o) 
                     >> 3U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_in_value_ac_present__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT____Vcellout__u_cfg_ac_present_i_pin__q_o) 
                     >> 2U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_in_value_ec_rst_l__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT____Vcellout__u_cfg_ac_present_i_pin__q_o) 
                     >> 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_in_value_flash_wp_l__DOT__q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT____Vcellout__u_cfg_ac_present_i_pin__q_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__u_decode_esc__DOT__gen_no_async__DOT__diff_pq 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__u_decode_esc__DOT__gen_no_async__DOT__u_xnor2_sigint__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__intr_sensor_ctrl_aon_io_status_change 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_intr_state_io_status_change__q) 
               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_intr_enable_io_status_change__q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__intr_sensor_ctrl_aon_init_status_change 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_intr_state_init_status_change__q) 
               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_intr_enable_init_status_change__q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__inst_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__req_q_b));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__intg_error_r_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_intg_error__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__esc_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__esc_req) 
               | ((0x003fffffU == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__u_prim_count__DOT__err_q))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__unnamedblk4__DOT__kk = 4U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
            vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
            __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
            __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt 
        = (2U & ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                     >> 1U)) << 1U));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__gen_max_len_sva__DOT__cnt_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__gen_max_len_sva__DOT__cnt_d;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rw_collision) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_scr_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_diffuse_data__BRA__0__KET____DOT__u_prim_subst_perm_enc__DOT__data_i;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__state_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__state_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_d;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__gen_max_len_sva__DOT__cnt_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_scr_q = 0ULL;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__state_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q = 0x626001ccU;
    }
    vlSelfRef.__VdfgRegularize_he50b618e_0_947 = ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                                      >> 0x0000001eU)) 
                                                  | (1U 
                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                                        >> 0x00000012U)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_status__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_ulp_status__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_status__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_en_b) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__waddr_scr_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_o;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__txn_bits_q 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__src_we_i) 
                   << 2U);
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_combo_intr_status_combo0_h2l__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_combo_intr_status_combo0_h2l__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_combo_intr_status_combo0_h2l__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_combo_intr_status_combo1_h2l__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_combo_intr_status_combo1_h2l__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_combo_intr_status_combo1_h2l__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_combo_intr_status_combo2_h2l__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_combo_intr_status_combo2_h2l__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_combo_intr_status_combo2_h2l__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_combo_intr_status_combo3_h2l__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_combo_intr_status_combo3_h2l__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_combo_intr_status_combo3_h2l__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_pwrb_h2l__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_pwrb_h2l__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_pwrb_h2l__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_key0_in_h2l__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_key0_in_h2l__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_key0_in_h2l__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_key1_in_h2l__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_key1_in_h2l__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_key1_in_h2l__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_key2_in_h2l__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_key2_in_h2l__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_key2_in_h2l__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_ac_present_h2l__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_ac_present_h2l__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_ac_present_h2l__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_ec_rst_l_h2l__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_ec_rst_l_h2l__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_ec_rst_l_h2l__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_flash_wp_l_h2l__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_flash_wp_l_h2l__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_flash_wp_l_h2l__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_pwrb_l2h__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_pwrb_l2h__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_pwrb_l2h__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_key0_in_l2h__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_key0_in_l2h__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_key0_in_l2h__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_key1_in_l2h__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_key1_in_l2h__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_key1_in_l2h__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_key2_in_l2h__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_key2_in_l2h__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_key2_in_l2h__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_ac_present_l2h__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_ac_present_l2h__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_ac_present_l2h__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_ec_rst_l_l2h__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_ec_rst_l_l2h__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_ec_rst_l_l2h__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_flash_wp_l_l2h__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_flash_wp_l_l2h__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_status_flash_wp_l_l2h__DOT__wr_data;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_ulp_status__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__waddr_scr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_combo_intr_status_combo0_h2l__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_combo_intr_status_combo1_h2l__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_combo_intr_status_combo2_h2l__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_combo_intr_status_combo3_h2l__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_pwrb_h2l__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_key0_in_h2l__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_key1_in_h2l__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_key2_in_h2l__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_ac_present_h2l__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_ec_rst_l_h2l__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_flash_wp_l_h2l__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_pwrb_l2h__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_key0_in_l2h__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_key1_in_l2h__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_key2_in_l2h__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_ac_present_l2h__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_ec_rst_l_l2h__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_flash_wp_l_l2h__q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__key_intr_status_i 
        = (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_flash_wp_l_l2h__q) 
                << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_ec_rst_l_l2h__q) 
                          << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_ac_present_l2h__q) 
                                      << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_key2_in_l2h__q))) 
             << 0x0000000aU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_key1_in_l2h__q) 
                                 << 9U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_key0_in_l2h__q) 
                                            << 8U) 
                                           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_pwrb_l2h__q) 
                                              << 7U)))) 
           | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_flash_wp_l_h2l__q) 
                  << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_ec_rst_l_h2l__q) 
                            << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_ac_present_h2l__q) 
                                        << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_key2_in_h2l__q))) 
               << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_key1_in_h2l__q) 
                          << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_key0_in_h2l__q) 
                                     << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_status_pwrb_h2l__q)))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__txn_bits_q 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__src_we_i) 
                   << 2U);
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__txn_bits_q 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__src_we_i) 
                   << 2U);
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__txn_bits_q 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__src_we_i) 
                   << 2U);
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__txn_bits_q 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_we_i) 
                   << 2U);
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__txn_bits_q 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__src_we_i) 
                   << 2U);
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__txn_bits_q 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__src_we_i) 
                   << 2U);
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__txn_bits_q 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__src_we_i) 
                   << 2U);
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__readback_error_q = 1U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_en_b) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__intg_error_w_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_intg_error__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_pending_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_write_pending_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_en_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_en_d;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__read_en_b) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__raddr_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_i;
        }
        if (((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__gen_cmd_intg_check__DOT__u_cmd_intg_chk.err_o) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__err_o)) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__err_o)) 
             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__err_o))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__intg_error_q = 1U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_intr_state_wdog_timer_bark__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_intr_state_wkup_timer_expired__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_intr_state_wkup_timer_expired__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_intr_state_wdog_timer_bark__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_intr_state_wdog_timer_bark__DOT__wr_data;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_check_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_check_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_intg_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_intg_d;
        if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__u_match_sync.dst_req_o) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__req_hold_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__aon_req_hold_q;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__readback_error_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__intg_error_w_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_pending_q = 9U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_en_q = 9U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__raddr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__intg_error_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_intr_state_wkup_timer_expired__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_intr_state_wdog_timer_bark__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q = 0x7eU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_check_q = 9U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_q = 9U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_intg_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__req_hold_q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_status__DOT__de 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__dst_ack_q) 
           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__req_hold_q 
              >> 0x00000012U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__combo_intr 
        = (0x0000000fU & (((- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__dst_ack_q))) 
                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__req_hold_q) 
                          >> 0x0000000eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__h2l_key_intr 
        = (0x0000007fU & (((- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__dst_ack_q))) 
                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__req_hold_q) 
                          >> 7U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__l2h_key_intr 
        = (0x0000007fU & ((- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__dst_ack_q))) 
                          & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__req_hold_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_init_chg__DOT__q_sync_d 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_init_chg__DOT__g_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__txn_bits_q 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__src_we_i) 
                    << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_regwen__DOT__q));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__src_busy_q = 1U;
        } else {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__dst_to_src) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__txn_bits_q = 0U;
            }
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__src_ack) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__src_busy_q = 0U;
            }
        }
        if (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.err_o) 
             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__err_q = 1U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__txn_bits_q 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__src_we_i) 
                    << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__txn_bits_q 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__src_we_i) 
                    << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__txn_bits_q 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__src_we_i) 
                    << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__txn_bits_q 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__src_we_i) 
                    << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__txn_bits_q 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__src_we_i) 
                    << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__txn_bits_q 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__src_we_i) 
                    << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__txn_bits_q 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__src_we_i) 
                    << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__txn_bits_q 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__src_we_i) 
                    << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__txn_bits_q 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__src_we_i) 
                    << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__txn_bits_q 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__src_we_i) 
                    << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__txn_bits_q 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__src_we_i) 
                    << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__txn_bits_q 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__src_we_i) 
                    << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__txn_bits_q 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__src_we_i) 
                    << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__txn_bits_q 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__src_we_i) 
                    << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q));
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__txn_bits_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_cfg_regwen__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_cfg_regwen__DOT__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_cfg_regwen__DOT__wr_data;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_status_io_pok__DOT__q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_io_status_chg__DOT__q_sync_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_io_status_chg__DOT__q_sync_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_io_status_chg__DOT__q_sync_d;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__nonce_q[0U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__nonce_out_q[0U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__nonce_q[1U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__nonce_out_q[1U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__nonce_q[2U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__nonce_out_q[2U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__nonce_q[3U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__nonce_out_q[3U];
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__local_esc) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__nonce_q[0U] = 0x9b01c95aU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__nonce_q[1U] = 0xd13a0fe3U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__nonce_q[2U] = 0xc2a1ba65U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__nonce_q[3U] = 0x5f1aeb58U;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_intr_sync__DOT__q_sync_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_intr_sync__DOT__q_sync_d;
        if ((0x00000010U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_input_disable_q 
                = ((0x0eU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_input_disable_q)) 
                   | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U] 
                            >> 5U)));
        }
        if ((0x00000400U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_input_disable_q 
                = ((0x0dU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_input_disable_q)) 
                   | (2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U] 
                            >> 0x0000000aU)));
        }
        if ((0x00010000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_input_disable_q 
                = ((0x0bU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_input_disable_q)) 
                   | (4U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U] 
                            >> 0x0000000fU)));
        }
        if ((0x00400000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_input_disable_q 
                = ((7U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_input_disable_q)) 
                   | (8U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U] 
                            >> 0x00000014U)));
        }
        if ((4U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_pull_select_q 
                = ((0x0eU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_pull_select_q)) 
                   | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U] 
                            >> 3U)));
        }
        if ((0x00000100U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_pull_select_q 
                = ((0x0dU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_pull_select_q)) 
                   | (2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U] 
                            >> 8U)));
        }
        if ((0x00004000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_pull_select_q 
                = ((0x0bU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_pull_select_q)) 
                   | (4U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U] 
                            >> 0x0000000dU)));
        }
        if ((0x00100000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_pull_select_q 
                = ((7U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_pull_select_q)) 
                   | (8U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U] 
                            >> 0x00000012U)));
        }
        if ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_pull_en_q 
                = ((0x0eU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_pull_en_q)) 
                   | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U] 
                            >> 1U)));
        }
        if ((0x00000040U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_pull_en_q 
                = ((0x0dU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_pull_en_q)) 
                   | (2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U] 
                            >> 6U)));
        }
        if ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_pull_en_q 
                = ((0x0bU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_pull_en_q)) 
                   | (4U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U] 
                            >> 0x0000000bU)));
        }
        if ((0x00040000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_pull_en_q 
                = ((7U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_pull_en_q)) 
                   | (8U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg2hw[0U] 
                            >> 0x00000010U)));
        }
        if (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.err_o) 
             | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_prim_reg_we_check.__PVT__u_prim_onehot_check__DOT__err_o))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__err_q = 1U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_1__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_1__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_1__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_2__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_2__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_2__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_3__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_3__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_3__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_4__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_4__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_4__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_5__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_5__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_5__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_6__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_6__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_6__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_7__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_7__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_7__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_8__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_8__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_8__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_9__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_9__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_9__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_0__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_0__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_0__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_10__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_10__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_recov_alert_val_10__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_val_0__DOT__de) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_0__q = 1U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_val_1__DOT__de) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_1__q = 1U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_val_2__DOT__de) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_2__q = 1U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_val_3__DOT__de) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_3__q = 1U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_val_4__DOT__de) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_4__q = 1U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_val_5__DOT__de) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_5__q = 1U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_val_6__DOT__de) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_6__q = 1U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_val_7__DOT__de) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_7__q = 1U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_val_8__DOT__de) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_8__q = 1U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_val_9__DOT__de) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_9__q = 1U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_val_10__DOT__de) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_10__q = 1U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_val_11__DOT__de) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_11__q = 1U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_10__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_10__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_10__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_0__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_0__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_0__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_1__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_1__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_1__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_2__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_2__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_2__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_3__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_3__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_3__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_4__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_4__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_4__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_5__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_5__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_5__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_6__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_6__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_6__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_7__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_7__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_7__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_8__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_8__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_8__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_9__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_9__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_en_9__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_trig_val_0__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_trig_val_5__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_trig_val_5__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_en_val_0__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_1__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_en_val_1__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_2__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_en_val_2__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_3__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_en_val_3__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_4__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_en_val_4__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_5__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_en_val_5__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_6__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_en_val_6__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_7__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_en_val_7__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_8__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_en_val_8__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_9__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_en_val_9__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_0__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_en_val_0__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_10__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_fatal_alert_en_val_10__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_manual_pad_attr_regwen_3__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_manual_pad_attr_regwen_3__DOT__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_manual_pad_attr_regwen_3__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_manual_pad_attr_regwen_0__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_manual_pad_attr_regwen_0__DOT__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_manual_pad_attr_regwen_0__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_manual_pad_attr_regwen_1__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_manual_pad_attr_regwen_1__DOT__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_manual_pad_attr_regwen_1__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_manual_pad_attr_regwen_2__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_manual_pad_attr_regwen_2__DOT__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_manual_pad_attr_regwen_2__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__error_q 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__error_i) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q 
                = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__error_i) 
                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__wr_req))
                    ? 0xffffffffU : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__reg_rdata_next);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__d_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__src_busy_q = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__src_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__src_busy_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__src_busy_q = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__src_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__src_busy_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__src_busy_q = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__src_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__src_busy_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__src_busy_q = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__src_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__src_busy_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_busy_q = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_busy_q = 0U;
        }
        if (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.err_o) 
             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__err_q = 1U;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__addr_collision_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__addr_collision_d;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__err_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__txn_bits_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_cfg_regwen__DOT__q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_status_io_pok__DOT__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_io_status_chg__DOT__q_sync_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__nonce_q[0U] = 0x9b01c95aU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__nonce_q[1U] = 0xd13a0fe3U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__nonce_q[2U] = 0xc2a1ba65U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__nonce_q[3U] = 0x5f1aeb58U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_intr_sync__DOT__q_sync_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_input_disable_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_pull_select_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__manual_pad_pull_en_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__err_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_1__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_2__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_3__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_4__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_5__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_6__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_7__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_8__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_9__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_0__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_recov_alert_val_10__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_0__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_1__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_2__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_3__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_4__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_5__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_6__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_7__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_8__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_9__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_10__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_val_11__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_10__q = 6U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_0__q = 6U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_1__q = 6U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_2__q = 6U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_3__q = 6U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_4__q = 6U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_5__q = 6U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_6__q = 6U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_7__q = 6U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_8__q = 6U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_en_9__q = 6U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_alert_trig_val_5__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_1__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_2__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_3__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_4__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_5__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_6__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_7__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_8__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_9__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_0__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_fatal_alert_en_val_10__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_manual_pad_attr_regwen_3__DOT__q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_manual_pad_attr_regwen_0__DOT__q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_manual_pad_attr_regwen_1__DOT__q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_manual_pad_attr_regwen_2__DOT__q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__error_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__err_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__addr_collision_q = 9U;
    }
    __Vfunc_mubi4_test_true_loose__513__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__addr_collision_q;
    __Vfunc_mubi4_test_true_loose__513__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__513__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_wr_collision 
        = __Vfunc_mubi4_test_true_loose__513__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_d)
            : 9U);
    __Vfunc_mubi4_test_true_loose__534__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
    __Vfunc_mubi4_test_true_loose__534__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__534__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__rvalid_o 
        = __Vfunc_mubi4_test_true_loose__534__Vfuncout;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rvalid_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__read_en;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__valid_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h36ab3cd7__1;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rvalid_q = 9U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_q = 0ULL;
    }
    __Vfunc_prince_mult_prime_64bit__595__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_q;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_prince_mult_prime_64bit__595__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12178481667083404922ull);
    __Vfunc_prince_nibble_red16__596__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__595__state_in));
    __Vfunc_prince_nibble_red16__596__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__596__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__596__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__596__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__596__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__596__Vfuncout)));
    __Vfunc_prince_nibble_red16__597__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__595__state_in));
    __Vfunc_prince_nibble_red16__597__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__597__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__597__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__597__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__597__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__597__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__598__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__595__state_in));
    __Vfunc_prince_nibble_red16__598__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__598__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__598__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__598__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__598__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__598__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__599__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__595__state_in));
    __Vfunc_prince_nibble_red16__599__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__599__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__599__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__599__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__599__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__599__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__600__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__595__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__600__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__600__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__600__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__600__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__600__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__600__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__601__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__595__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__601__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__601__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__601__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__601__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__601__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__601__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__602__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__595__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__602__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__602__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__602__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__602__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__602__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__602__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__603__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__595__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__603__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__603__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__603__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__603__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__603__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__603__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__604__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__595__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__604__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__604__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__604__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__604__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__604__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__604__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__605__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__595__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__605__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__605__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__605__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__605__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__605__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__605__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__606__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__595__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__606__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__606__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__606__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__606__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__606__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__606__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__607__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__595__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__607__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__607__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__607__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__607__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__607__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__607__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__608__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__595__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__608__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__608__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__608__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__608__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__608__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__608__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__609__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__595__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__609__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__609__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__609__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__609__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__609__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__609__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__610__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__595__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__610__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__610__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__610__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__610__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__610__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__610__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__611__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__595__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__611__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__611__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__611__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__611__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__611__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__611__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__595__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__595__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle 
        = __Vfunc_prince_mult_prime_64bit__595__Vfuncout;
    __Vfunc_sbox4_64bit__612__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle;
    vlSelf->__Vfunc_sbox4_64bit__612__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5108861901200265469ull);
    __Vfunc_sbox4_8bit__613__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__612__state_in));
    vlSelf->__Vfunc_sbox4_8bit__613__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4991071550797136760ull);
    vlSelfRef.__Vfunc_sbox4_8bit__613__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__613__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__613__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__613__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__613__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__613__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__613__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__613__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__612__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__612__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__613__Vfuncout)));
    __Vfunc_sbox4_8bit__613__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__612__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__613__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4991071550797136760ull);
    vlSelfRef.__Vfunc_sbox4_8bit__613__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__613__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__613__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__613__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__613__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__613__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__613__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__613__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__612__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__612__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__613__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__613__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__612__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__613__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4991071550797136760ull);
    vlSelfRef.__Vfunc_sbox4_8bit__613__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__613__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__613__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__613__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__613__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__613__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__613__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__613__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__612__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__612__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__613__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__613__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__612__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__613__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4991071550797136760ull);
    vlSelfRef.__Vfunc_sbox4_8bit__613__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__613__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__613__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__613__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__613__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__613__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__613__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__613__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__612__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__612__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__613__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__613__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__612__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__613__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4991071550797136760ull);
    vlSelfRef.__Vfunc_sbox4_8bit__613__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__613__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__613__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__613__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__613__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__613__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__613__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__613__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__612__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__612__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__613__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__613__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__612__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__613__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4991071550797136760ull);
    vlSelfRef.__Vfunc_sbox4_8bit__613__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__613__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__613__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__613__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__613__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__613__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__613__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__613__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__612__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__612__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__613__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__613__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__612__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__613__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4991071550797136760ull);
    vlSelfRef.__Vfunc_sbox4_8bit__613__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__613__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__613__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__613__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__613__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__613__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__613__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__613__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__612__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__612__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__613__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__613__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__612__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__613__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4991071550797136760ull);
    vlSelfRef.__Vfunc_sbox4_8bit__613__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__613__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__613__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__613__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__613__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__613__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__613__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__613__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__612__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__612__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__613__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__612__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__612__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle 
        = __Vfunc_sbox4_64bit__612__Vfuncout;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_en_b) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__incr_en_i)
                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_o
                    : (((QData)((IData)(((0x00001000U 
                                          & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U])
                                          ? (0x0000007fU 
                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
                                                >> 1U))
                                          : 0U))) << 0x00000020U) 
                       | (QData)((IData)(((0x00001000U 
                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U])
                                           ? ((((((
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
                                                   >> 0x0000001bU) 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__we_o))
                                                  ? 
                                                 (0x000000ffU 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
                                                     >> 0x00000010U))
                                                  : 0U) 
                                                << 0x00000018U) 
                                               | ((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
                                                     >> 0x0000001aU) 
                                                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__we_o))
                                                    ? 
                                                   (0x000000ffU 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
                                                       >> 8U))
                                                    : 0U) 
                                                  << 0x00000010U)) 
                                              | (((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
                                                     >> 0x00000019U) 
                                                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__we_o))
                                                    ? 
                                                   (0x000000ffU 
                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U])
                                                    : 0U) 
                                                  << 8U) 
                                                 | (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
                                                      >> 0x00000018U) 
                                                     & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__we_o))
                                                     ? 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
                                                     >> 0x00000018U)
                                                     : 0U)))
                                           : 0U)))));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__src_q 
                = (0x00001fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_wd_i);
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__src_q 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_ctrl_prescaler__q) 
                    << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_ctrl_enable__q));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__src_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_wd_i;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__src_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__dst_qs;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__src_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_wd_i;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__src_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__dst_qs;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__src_q 
                = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_wd_i);
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__src_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__dst_qs;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_wd_i;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__dst_qs;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__src_q 
                = (3U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_wd_i);
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__src_q 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_ctrl_pause_in_sleep__q) 
                    << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_ctrl_enable__q));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q 
                = (0x000000ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                   << 4U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q 
                = (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                         >> 4U));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__error_q 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__error_i) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q 
                = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__error_i) 
                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__wr_req))
                    ? 0xffffffffU : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__reg_rdata_next);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__d_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__src_busy_q = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__src_q 
                = (0x0000000fU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__src_ack) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__src_busy_q = 0U;
            }
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__dst_to_src) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__src_q 
                    = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_3_rst_req_3__q) 
                         << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_3_ec_rst_3__q) 
                                   << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_3_interrupt_3__q) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_3_bat_disable_3__q)));
            }
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__src_busy_q = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__src_q 
                = (0x0000000fU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__src_ack) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__src_busy_q = 0U;
            }
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__dst_to_src) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__src_q 
                    = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_0_rst_req_0__q) 
                         << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_0_ec_rst_0__q) 
                                   << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_0_interrupt_0__q) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_0_bat_disable_0__q)));
            }
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__src_busy_q = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__src_q 
                = (0x0000000fU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__src_ack) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__src_busy_q = 0U;
            }
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__dst_to_src) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__src_q 
                    = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_1_rst_req_1__q) 
                         << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_1_ec_rst_1__q) 
                                   << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_1_interrupt_1__q) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_1_bat_disable_1__q)));
            }
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__src_busy_q = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__src_q 
                = (0x0000000fU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__src_ack) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__src_busy_q = 0U;
            }
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__dst_to_src) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__src_q 
                    = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_2_rst_req_2__q) 
                         << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_2_ec_rst_2__q) 
                                   << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_2_interrupt_2__q) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_2_bat_disable_2__q)));
            }
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__src_busy_q = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__src_q 
                = (0x00003fffU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__src_ack) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__src_busy_q = 0U;
            }
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__dst_to_src) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__src_q 
                    = (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_flash_wp_l_l2h__q) 
                            << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_ec_rst_l_l2h__q) 
                                      << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_ac_present_l2h__q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_key2_in_l2h__q))) 
                         << 0x0000000aU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_key1_in_l2h__q) 
                                             << 9U) 
                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_key0_in_l2h__q) 
                                                << 8U) 
                                               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_pwrb_in_l2h__q) 
                                                  << 7U)))) 
                       | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_flash_wp_l_h2l__q) 
                              << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_ec_rst_l_h2l__q) 
                                        << 2U)) | (
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_ac_present_h2l__q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_key2_in_h2l__q))) 
                           << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_key1_in_h2l__q) 
                                      << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_key0_in_h2l__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_pwrb_in_h2l__q)))));
            }
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__src_busy_q = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__src_q 
                = (0x0000ffffU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__src_ack) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__src_busy_q = 0U;
            }
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__dst_to_src) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__src_q 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_ec_rst_ctl__q;
            }
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__src_busy_q = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__src_q 
                = (0x0000ffffU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__src_ack) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__src_busy_q = 0U;
            }
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__dst_to_src) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__src_q 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_ulp_ac_debounce_ctl__q;
            }
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__src_busy_q = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__src_q 
                = (0x0000ffffU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__src_ack) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__src_busy_q = 0U;
            }
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__dst_to_src) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__src_q 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_ulp_lid_debounce_ctl__q;
            }
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__src_busy_q = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__src_q 
                = (0x0000ffffU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__src_ack) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__src_busy_q = 0U;
            }
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__dst_to_src) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__src_q 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_ulp_pwrb_debounce_ctl__q;
            }
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__src_busy_q = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__src_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__src_busy_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__src_busy_q = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__src_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__src_busy_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__src_busy_q = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__src_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__src_busy_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__src_busy_q = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__src_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__src_busy_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__src_busy_q = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__src_q 
                = (0x0000ffffU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__src_ack) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__src_busy_q = 0U;
            }
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__dst_to_src) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__src_q 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q;
            }
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__src_busy_q = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__src_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__src_busy_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__src_busy_q = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__src_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__src_busy_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__src_busy_q = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__src_q 
                = (1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__src_ack) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__src_busy_q = 0U;
            }
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__dst_to_src) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__src_q 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__dst_qs;
            }
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_intr_test__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__u_sysrst_ctrl_intr_o__DOT__g_intr_status__DOT__test_q 
                = (1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[0U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT____Vcellout__u_key_out_anchor__q_o[0U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[1U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT____Vcellout__u_key_out_anchor__q_o[1U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[2U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT____Vcellout__u_key_out_anchor__q_o[2U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[3U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT____Vcellout__u_key_out_anchor__q_o[3U];
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__local_esc) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[0U] = 0x336e399eU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[1U] = 0xbaaa10d2U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[2U] = 0x6aeadb13U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[3U] = 0x9a0ffa95U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q = 0ULL;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__src_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__src_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__src_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__src_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__src_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__error_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__src_busy_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__u_sysrst_ctrl_intr_o__DOT__g_intr_status__DOT__test_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__src_q = 0x07d0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__src_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__src_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__src_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__src_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__src_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__src_q = 0x07d0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__src_q = 0x1f40U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__src_q = 0x1f40U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__src_q = 0x1f40U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__src_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[0U] = 0x336e399eU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[1U] = 0xbaaa10d2U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[2U] = 0x6aeadb13U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[3U] = 0x9a0ffa95U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0 
        = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[3U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[2U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0_prime_d 
        = (((QData)((IData)((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0)))) 
            << 0x0000003fU) | ((0x7ffffffffffffffeULL 
                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0 
                                   >> 1U)) | (QData)((IData)(
                                                             (1U 
                                                              & VL_REDXOR_64(
                                                                             (0x8000000000000002ULL 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0)))))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__src_q 
                = (0x0001ffffU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__src_q 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_auto_block_debounce_ctl_auto_block_enable__q) 
                    << 0x00000010U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_auto_block_debounce_ctl_debounce_timer__q));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__src_q 
                = (0x77U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__src_q 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_auto_block_out_ctl_key2_out_value__q) 
                    << 6U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_auto_block_out_ctl_key1_out_value__q) 
                               << 5U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_auto_block_out_ctl_key0_out_value__q) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_auto_block_out_ctl_key2_out_sel__q) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_auto_block_out_ctl_key1_out_sel__q) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_auto_block_out_ctl_key0_out_sel__q))))));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__src_q 
                = (0x000000ffU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__src_q 
                = ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_ctl_flash_wp_l__q) 
                       << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_ctl_z3_wakeup__q) 
                                 << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_ctl_key2_out__q) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_ctl_key1_out__q))) 
                    << 4U) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_ctl_key0_out__q) 
                                << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_ctl_pwrb_out__q) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_ctl_ec_rst_l__q) 
                                << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_ctl_bat_disable__q))));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__src_q 
                = (0x000000ffU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__src_q 
                = ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_value_flash_wp_l__q) 
                       << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_value_z3_wakeup__q) 
                                 << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_value_key2_out__q) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_value_key1_out__q))) 
                    << 4U) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_value_key0_out__q) 
                                << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_value_pwrb_out__q) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_value_ec_rst_l__q) 
                                << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_value_bat_disable__q))));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q 
                = (0x000000ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                   << 4U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q 
                = (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                         >> 4U));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__src_q 
                = (0x00000fffU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__src_q 
                = ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_invert_ctl_z3_wakeup__q) 
                       << 5U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_invert_ctl_lid_open__q) 
                                  << 4U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_invert_ctl_bat_disable__q) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_invert_ctl_ac_present__q) 
                         << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_invert_ctl_pwrb_out__q) 
                                    << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_invert_ctl_pwrb_in__q)))) 
                    << 6U) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_invert_ctl_key2_out__q) 
                                << 5U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_invert_ctl_key2_in__q) 
                                           << 4U) | 
                                          ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_invert_ctl_key1_out__q) 
                                           << 3U))) 
                              | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_invert_ctl_key1_in__q) 
                                  << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_invert_ctl_key0_out__q) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_invert_ctl_key0_in__q)))));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__src_we_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__src_q 
                = (0x0000ffffU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i);
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__dst_to_src) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__src_q 
                = (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_flash_wp_l_1__q) 
                        << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_z3_wakeup_1__q) 
                                  << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_key2_out_1__q) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_key1_out_1__q))) 
                     << 0x0000000cU) | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_key0_out_1__q) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_pwrb_out_1__q) 
                                           << 2U)) 
                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_ec_rst_l_1__q) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_bat_disable_1__q))) 
                                        << 8U)) | (
                                                   (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_flash_wp_l_0__q) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_z3_wakeup_0__q) 
                                                         << 2U)) 
                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_key2_out_0__q) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_key1_out_0__q))) 
                                                    << 4U) 
                                                   | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_key0_out_0__q) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_pwrb_out_0__q) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_ec_rst_l_0__q) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_bat_disable_0__q)))));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__error_q 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__error_i) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q 
                = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__error_i) 
                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__wr_req))
                    ? 0xffffffffU : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__reg_rdata_next);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__d_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__src_q = 0x000007d0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__src_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__src_q = 0x82U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__src_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__src_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__src_q = 0x0082U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__error_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
    }
    vlSelfRef.__VdfgRegularize_he50b618e_0_946 = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__u_prim_count__DOT__err_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (0x003fffffU != (0x007fffffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
                                              + vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q 
                = (0x000000ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                   << 4U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q 
                = (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                         >> 4U));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_intr_enable__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_intr_enable__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_intr_enable__DOT__wr_data;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_io_status_chg__DOT__q_sync_d 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_io_status_chg__DOT__g_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_intr_sync__DOT__q_sync_d 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_intr_sync__DOT__g_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT____Vcellout__u_cfg_ac_present_i_pin__q_o 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT__u_cfg_ac_present_i_pin__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_intr_state_io_status_change__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_intr_state_io_status_change__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_intr_state_io_status_change__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_intr_enable_init_status_change__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_intr_enable_io_status_change__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_intr_enable_io_status_change__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_intr_enable_init_status_change__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_intr_enable_init_status_change__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_intr_state_init_status_change__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_intr_state_init_status_change__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_intr_state_init_status_change__DOT__wr_data;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_io_status_chg__DOT__g_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_io_status_chg__DOT__g_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_intr_sync__DOT__g_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__aon_intr_set;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT__u_cfg_ac_present_i_pin__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT__cio_pwrb_in_i) 
                   << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT__cio_key0_in_i) 
                             << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT__cio_key1_in_i) 
                                         << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT__cio_key2_in_i))) 
                << 4U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT__cio_lid_open_i) 
                           << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT__cio_ac_present_i) 
                                     << 2U)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_intr_enable__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_io_status_chg__DOT__q_sync_d = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_intr_sync__DOT__q_sync_d = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT____Vcellout__u_cfg_ac_present_i_pin__q_o = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_intr_state_io_status_change__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_intr_enable_io_status_change__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_intr_state_init_status_change__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_intr_enable_init_status_change__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_io_status_chg__DOT__g_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_intr_sync__DOT__g_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT__u_cfg_ac_present_i_pin__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0x003fffffU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i 
        = ((((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                        >> 4U)) | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                         >> 0x00000019U))) 
                << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                  >> 0x00000016U)) 
                           | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                    >> 6U))) << 4U)) 
              | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                          >> 9U)) | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                           >> 0x00000013U))) 
                  << 2U) | ((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                   >> 0x0000000dU)) 
                            | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                     >> 0x0000000cU))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                           >> 0x0000001bU)) 
                                    | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                             >> 0x00000010U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                                    >> 0x00000018U))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                             >> 0x00000013U)) 
                                      | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                               >> 0x0000001bU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                                   >> 0x0000001cU)) 
                                               | (1U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                                     >> 3U))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                        << 1U)) | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                         >> 0x0000000bU))) 
                << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                  >> 8U)) | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                                   >> 2U))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                              >> 0x00000010U)) 
                                       | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                                >> 0x00000016U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                                    >> 0x0000000eU)) 
                                                | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                                      >> 0x00000015U))))) 
             << 8U) | (((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                 >> 3U)) | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                                  >> 1U))) 
                         << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                             >> 0x0000000dU))) 
                                   << 4U)) | ((8U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                                >> 0x00000017U)) 
                                              | ((4U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q 
                                                     >> 0x0000001cU)) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_947))))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_899 = ((
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_combo_intr_status_combo3_h2l__q) 
                                                    << 0x00000011U) 
                                                   | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_combo_intr_status_combo2_h2l__q) 
                                                      << 0x00000010U)) 
                                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_combo_intr_status_combo1_h2l__q) 
                                                      << 0x0000000fU) 
                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_combo_intr_status_combo0_h2l__q) 
                                                         << 0x0000000eU) 
                                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__key_intr_status_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__combo_intr_status_o 
        = ((0xfeU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__combo_intr_status_o)) 
           | (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__combo_intr) 
                    >> 3U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__combo_intr_status_o 
        = ((0xfbU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__combo_intr_status_o)) 
           | (4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__combo_intr)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__combo_intr_status_o 
        = ((0xefU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__combo_intr_status_o)) 
           | (0x00000010U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__combo_intr) 
                             << 3U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__combo_intr_status_o 
        = ((0xbfU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__combo_intr_status_o)) 
           | (0x00000040U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__combo_intr) 
                             << 6U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o 
        = ((0x0bffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o) 
           | (0x04000000U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__h2l_key_intr) 
                             << 0x00000014U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o 
        = ((0x0effffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o) 
           | (0x01000000U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__h2l_key_intr) 
                             << 0x00000013U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o 
        = ((0x0fbfffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o) 
           | (0x00400000U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__h2l_key_intr) 
                             << 0x00000012U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o 
        = ((0x0fefffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o) 
           | (0x00100000U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__h2l_key_intr) 
                             << 0x00000011U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o 
        = ((0x0ffbffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o) 
           | (0x00040000U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__h2l_key_intr) 
                             << 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o 
        = ((0x0ffeffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o) 
           | (0x00010000U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__h2l_key_intr) 
                             << 0x0000000fU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o 
        = ((0x0fffbfffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o) 
           | (0x00004000U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__h2l_key_intr) 
                             << 0x0000000eU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o 
        = ((0x0fffefffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o) 
           | (0x00001000U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__l2h_key_intr) 
                             << 6U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o 
        = ((0x0ffffbffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o) 
           | (0x00000400U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__l2h_key_intr) 
                             << 5U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o 
        = ((0x0ffffeffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o) 
           | (0x00000100U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__l2h_key_intr) 
                             << 4U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o 
        = ((0x0fffffbfU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o) 
           | (0x00000040U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__l2h_key_intr) 
                             << 3U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o 
        = ((0x0fffffefU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o) 
           | (0x00000010U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__l2h_key_intr) 
                             << 2U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o 
        = ((0x0ffffffbU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o) 
           | (4U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__l2h_key_intr) 
                    << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o 
        = ((0x0ffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_intr__key_intr_status_o) 
           | (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__l2h_key_intr)));
    __Vfunc_prince_shiftrows_64bit__677__state_in = 
        (0xc882d32f25323c54ULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle 
                                  ^ (((QData)((IData)(
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[3U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[2U])))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__677__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17350361898526402552ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__677__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__677__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__677__state_in 
                                                       >> 0x18U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__677__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__677__state_in 
                                                           >> 0x30U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__677__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__677__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__677__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(__Vfunc_prince_shiftrows_64bit__677__state_in) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__677__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__677__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__677__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__677__state_in 
                                                        >> 0x10U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__677__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__677__state_in 
                                                            >> 0x28U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__677__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__677__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__677__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__677__state_in 
                                                           >> 0x38U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__677__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__677__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__677__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__677__state_in 
                                                        >> 8U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__677__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__677__state_in 
                                                            >> 0x20U))))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__677__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__677__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__677__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__677__Vfuncout = vlSelfRef.__Vfunc_prince_shiftrows_64bit__677__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hc734f68f__1 
        = __Vfunc_prince_shiftrows_64bit__677__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1170[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_946))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1170[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1170[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_946))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1170[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1170[1U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1170[2U] 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_o 
        = (((QData)((IData)(((((2U & (VL_REDXOR_32(
                                                   (0xc1610c74U 
                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q)) 
                                      << 1U)) | (1U 
                                                 & (~ 
                                                    (1U 
                                                     & VL_REDXOR_32(
                                                                    (0x5c999e02U 
                                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q)))))) 
                              << 2U) | ((2U & ((VL_REDXOR_32(
                                                             (0x1601e32cU 
                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q)) 
                                                ^ VL_REDXOR_2(vlSelfRef.__VdfgRegularize_he50b618e_0_947)) 
                                               << 1U)) 
                                        | (1U & (~ 
                                                 (1U 
                                                  & VL_REDXOR_32(
                                                                 (0x20c6b8daU 
                                                                  & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q))))))))) 
            << 0x00000023U) | (((QData)((IData)((1U 
                                                 & VL_REDXOR_32(
                                                                (0x8f321199U 
                                                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q))))) 
                                << 0x00000022U) | (
                                                   ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (1U 
                                                                         & VL_REDXOR_32(
                                                                                (0x331864e3U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q))))))) 
                                                    << 0x00000021U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & VL_REDXOR_32(
                                                                                (0x68ee4305U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__lfsr_q))))) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_intr_state__DOT__d 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_ulp_status__q) 
            | (IData)(((0U != (0x0003c000U & vlSelfRef.__VdfgRegularize_he50b618e_0_899)) 
                       | (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__key_intr_status_i))))) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__u_sysrst_ctrl_intr_o__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_init_chg__DOT__g_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT____Vcellinp__u_init_chg__d_i));
    __Vtableidx100 = (((((2U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT____Vcellout__u_cfg_ac_present_i_pin__q_o) 
                                << 1U)) | (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT____Vcellout__u_cfg_ac_present_i_pin__q_o) 
                                                 >> 1U))) 
                        << 6U) | (((2U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT____Vcellout__u_cfg_ac_present_i_pin__q_o) 
                                          >> 1U)) | 
                                   (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT____Vcellout__u_cfg_ac_present_i_pin__q_o) 
                                          >> 3U))) 
                                  << 4U)) | ((((2U 
                                                & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT____Vcellout__u_cfg_ac_present_i_pin__q_o) 
                                                   >> 3U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT____Vcellout__u_cfg_ac_present_i_pin__q_o) 
                                                     >> 5U))) 
                                              << 2U) 
                                             | ((2U 
                                                 & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT____Vcellout__u_cfg_ac_present_i_pin__q_o) 
                                                    >> 5U)) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT____Vcellout__u_cfg_ac_present_i_pin__q_o) 
                                                      >> 7U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_sysrst_ctrl_pin__pin_in_value_o 
        = Vsim__ConstPool__TABLE_h55356e1a_0[__Vtableidx100];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hc734f68f__1;
    __Vfunc_prince_mult_prime_64bit__614__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_prince_mult_prime_64bit__614__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17908830336836949622ull);
    __Vfunc_prince_nibble_red16__615__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__614__state_in));
    __Vfunc_prince_nibble_red16__615__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__615__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__615__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__615__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__615__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__615__Vfuncout)));
    __Vfunc_prince_nibble_red16__616__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__614__state_in));
    __Vfunc_prince_nibble_red16__616__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__616__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__616__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__616__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__616__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__616__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__617__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__614__state_in));
    __Vfunc_prince_nibble_red16__617__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__617__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__617__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__617__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__617__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__617__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__618__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__614__state_in));
    __Vfunc_prince_nibble_red16__618__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__618__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__618__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__618__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__618__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__618__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__619__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__614__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__619__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__619__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__619__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__619__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__619__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__619__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__620__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__614__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__620__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__620__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__620__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__620__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__620__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__620__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__621__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__614__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__621__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__621__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__621__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__621__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__621__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__621__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__622__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__614__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__622__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__622__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__622__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__622__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__622__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__622__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__623__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__614__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__623__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__623__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__623__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__623__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__623__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__623__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__624__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__614__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__624__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__624__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__624__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__624__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__624__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__624__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__625__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__614__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__625__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__625__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__625__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__625__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__625__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__625__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__626__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__614__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__626__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__626__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__626__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__626__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__626__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__626__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__627__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__614__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__627__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__627__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__627__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__627__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__627__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__627__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__628__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__614__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__628__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__628__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__628__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__628__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__628__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__628__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__629__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__614__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__629__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__629__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__629__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__629__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__629__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__629__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__630__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__614__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__630__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__630__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__630__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__630__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__630__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__630__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__614__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__614__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd 
        = __Vfunc_prince_mult_prime_64bit__614__Vfuncout;
    __Vfunc_sbox4_64bit__631__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_sbox4_64bit__631__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17340587977277052374ull);
    __Vfunc_sbox4_8bit__632__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__631__state_in));
    vlSelf->__Vfunc_sbox4_8bit__632__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12681629105970100704ull);
    vlSelfRef.__Vfunc_sbox4_8bit__632__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__632__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__632__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__632__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__632__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__632__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__632__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__632__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__631__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__631__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__632__Vfuncout)));
    __Vfunc_sbox4_8bit__632__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__631__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__632__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12681629105970100704ull);
    vlSelfRef.__Vfunc_sbox4_8bit__632__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__632__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__632__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__632__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__632__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__632__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__632__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__632__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__631__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__631__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__632__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__632__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__631__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__632__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12681629105970100704ull);
    vlSelfRef.__Vfunc_sbox4_8bit__632__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__632__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__632__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__632__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__632__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__632__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__632__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__632__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__631__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__631__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__632__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__632__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__631__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__632__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12681629105970100704ull);
    vlSelfRef.__Vfunc_sbox4_8bit__632__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__632__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__632__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__632__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__632__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__632__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__632__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__632__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__631__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__631__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__632__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__632__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__631__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__632__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12681629105970100704ull);
    vlSelfRef.__Vfunc_sbox4_8bit__632__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__632__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__632__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__632__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__632__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__632__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__632__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__632__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__631__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__631__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__632__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__632__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__631__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__632__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12681629105970100704ull);
    vlSelfRef.__Vfunc_sbox4_8bit__632__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__632__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__632__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__632__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__632__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__632__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__632__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__632__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__631__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__631__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__632__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__632__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__631__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__632__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12681629105970100704ull);
    vlSelfRef.__Vfunc_sbox4_8bit__632__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__632__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__632__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__632__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__632__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__632__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__632__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__632__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__631__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__631__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__632__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__632__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__631__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__632__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12681629105970100704ull);
    vlSelfRef.__Vfunc_sbox4_8bit__632__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__632__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__632__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__632__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__632__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__632__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__632__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__632__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__631__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__631__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__632__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__631__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__631__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi__BRA__127__03a64__KET__ 
        = __Vfunc_sbox4_64bit__631__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1170[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1170[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
            << 1U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1170[2U]);
    __Vfunc_prince_shiftrows_64bit__678__state_in = 
        (0x64a51195e0e3610dULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi__BRA__127__03a64__KET__ 
                                  ^ (((QData)((IData)(
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[1U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[0U])))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__678__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5541505550567057782ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__678__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__678__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__678__state_in 
                                                       >> 0x18U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__678__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__678__state_in 
                                                           >> 0x30U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__678__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__678__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__678__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(__Vfunc_prince_shiftrows_64bit__678__state_in) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__678__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__678__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__678__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__678__state_in 
                                                        >> 0x10U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__678__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__678__state_in 
                                                            >> 0x28U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__678__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__678__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__678__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__678__state_in 
                                                           >> 0x38U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__678__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__678__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__678__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__678__state_in 
                                                        >> 8U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__678__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__678__state_in 
                                                            >> 0x20U))))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__678__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__678__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__678__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__678__Vfuncout = vlSelfRef.__Vfunc_prince_shiftrows_64bit__678__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h09fdf4ef__1 
        = __Vfunc_prince_shiftrows_64bit__678__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__470__tl[0U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    __Vfunc_extract_d2h_rsp_intg__470__tl[1U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    __Vfunc_extract_d2h_rsp_intg__470__tl[2U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    __Vfunc_extract_d2h_rsp_intg__470__payload = ((0x00000038U 
                                                   & ((__Vfunc_extract_d2h_rsp_intg__470__tl[2U] 
                                                       << 5U) 
                                                      | (0x00000018U 
                                                         & (__Vfunc_extract_d2h_rsp_intg__470__tl[1U] 
                                                            >> 0x0000001bU)))) 
                                                  | ((6U 
                                                      & (__Vfunc_extract_d2h_rsp_intg__470__tl[1U] 
                                                         >> 0x00000018U)) 
                                                     | (1U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__470__tl[0U] 
                                                           >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__470__Vfuncout = __Vfunc_extract_d2h_rsp_intg__470__payload;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__470__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h09fdf4ef__1;
    __Vfunc_prince_mult_prime_64bit__633__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_prince_mult_prime_64bit__633__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11799113491458061493ull);
    __Vfunc_prince_nibble_red16__634__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__633__state_in));
    __Vfunc_prince_nibble_red16__634__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__634__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__634__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__634__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__634__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__634__Vfuncout)));
    __Vfunc_prince_nibble_red16__635__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__633__state_in));
    __Vfunc_prince_nibble_red16__635__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__635__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__635__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__635__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__635__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__635__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__636__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__633__state_in));
    __Vfunc_prince_nibble_red16__636__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__636__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__636__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__636__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__636__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__636__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__637__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__633__state_in));
    __Vfunc_prince_nibble_red16__637__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__637__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__637__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__637__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__637__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__637__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__638__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__633__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__638__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__638__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__638__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__638__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__638__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__638__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__639__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__633__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__639__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__639__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__639__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__639__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__639__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__639__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__640__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__633__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__640__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__640__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__640__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__640__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__640__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__640__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__641__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__633__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__641__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__641__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__641__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__641__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__641__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__641__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__642__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__633__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__642__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__642__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__642__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__642__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__642__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__642__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__643__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__633__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__643__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__643__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__643__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__643__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__643__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__643__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__644__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__633__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__644__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__644__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__644__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__644__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__644__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__644__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__645__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__633__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__645__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__645__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__645__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__645__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__645__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__645__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__646__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__633__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__646__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__646__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__646__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__646__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__646__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__646__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__647__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__633__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__647__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__647__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__647__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__647__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__647__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__647__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__648__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__633__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__648__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__648__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__648__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__648__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__648__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__648__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__649__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__633__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__649__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__649__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__649__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__649__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__649__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__649__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__633__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__633__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd 
        = __Vfunc_prince_mult_prime_64bit__633__Vfuncout;
    __Vfunc_sbox4_64bit__650__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_sbox4_64bit__650__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6956302518588475405ull);
    __Vfunc_sbox4_8bit__651__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__650__state_in));
    vlSelf->__Vfunc_sbox4_8bit__651__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6153693576355193531ull);
    vlSelfRef.__Vfunc_sbox4_8bit__651__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__651__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__651__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__651__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__651__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__651__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__651__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__651__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__650__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__650__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__651__Vfuncout)));
    __Vfunc_sbox4_8bit__651__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__650__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__651__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6153693576355193531ull);
    vlSelfRef.__Vfunc_sbox4_8bit__651__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__651__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__651__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__651__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__651__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__651__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__651__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__651__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__650__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__650__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__651__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__651__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__650__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__651__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6153693576355193531ull);
    vlSelfRef.__Vfunc_sbox4_8bit__651__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__651__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__651__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__651__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__651__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__651__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__651__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__651__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__650__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__650__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__651__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__651__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__650__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__651__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6153693576355193531ull);
    vlSelfRef.__Vfunc_sbox4_8bit__651__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__651__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__651__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__651__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__651__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__651__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__651__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__651__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__650__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__650__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__651__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__651__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__650__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__651__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6153693576355193531ull);
    vlSelfRef.__Vfunc_sbox4_8bit__651__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__651__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__651__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__651__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__651__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__651__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__651__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__651__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__650__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__650__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__651__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__651__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__650__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__651__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6153693576355193531ull);
    vlSelfRef.__Vfunc_sbox4_8bit__651__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__651__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__651__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__651__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__651__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__651__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__651__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__651__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__650__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__650__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__651__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__651__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__650__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__651__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6153693576355193531ull);
    vlSelfRef.__Vfunc_sbox4_8bit__651__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__651__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__651__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__651__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__651__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__651__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__651__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__651__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__650__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__650__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__651__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__651__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__650__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__651__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6153693576355193531ull);
    vlSelfRef.__Vfunc_sbox4_8bit__651__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__651__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__651__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__651__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__651__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__651__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__651__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__651__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__650__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__650__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__651__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__650__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__650__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi__BRA__191__03a128__KET__ 
        = __Vfunc_sbox4_64bit__650__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1169 = (
                                                   ((((((2U 
                                                         & (VL_REDXOR_32(
                                                                         (0x10U 
                                                                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              VL_REDXOR_32(
                                                                           (8U 
                                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & (VL_REDXOR_32(
                                                                           (4U 
                                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x22U 
                                                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & (VL_REDXOR_32(
                                                                           (0x21U 
                                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x98505586U 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)))))) 
                                                    << 8U) 
                                                   | (((((2U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0x2dcc624cU 
                                                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xc2c1323bU 
                                                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                        << 6U) 
                                                       | (((2U 
                                                            & ((~ 
                                                                VL_REDXOR_32(
                                                                             (0x31234ed1U 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x413d89aaU 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0xdeba8050U 
                                                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & (VL_REDXOR_32(
                                                                             (0x2606bd25U 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                                << 2U)) 
                                                            | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_946)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x007fffffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
                          + (0U < vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x007fffffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
                          - (0U < vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_rx__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    __Vfunc_prince_shiftrows_64bit__679__state_in = 
        (0xd3b5a399ca0c2399ULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi__BRA__191__03a128__KET__ 
                                  ^ (((QData)((IData)(
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[3U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[2U])))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__679__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12481024138281922195ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__679__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__679__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__679__state_in 
                                                       >> 0x18U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__679__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__679__state_in 
                                                           >> 0x30U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__679__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__679__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__679__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(__Vfunc_prince_shiftrows_64bit__679__state_in) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__679__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__679__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__679__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__679__state_in 
                                                        >> 0x10U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__679__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__679__state_in 
                                                            >> 0x28U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__679__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__679__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__679__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__679__state_in 
                                                           >> 0x38U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__679__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__679__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__679__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__679__state_in 
                                                        >> 8U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__679__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__679__state_in 
                                                            >> 0x20U))))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__679__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__679__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__679__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__679__Vfuncout = vlSelfRef.__Vfunc_prince_shiftrows_64bit__679__state_out;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hb453e96e__1 
        = __Vfunc_prince_shiftrows_64bit__679__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000012U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0x00000012U][0U]) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1169));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000012U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0x00000012U][0U]) | ((IData)((0x0003ffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
                                  << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000012U][1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000012U][2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000012U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000012U][0U]) | ((0x0000fffeU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1169)) 
                                  | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000012U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000012U][0U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                    : 0U) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000012U][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000012U][1U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                    : 0U) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000012U][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000012U][1U]) | (0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1170[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000012U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000012U][2U]) | (1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1170[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000012U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000012U][2U]) | (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                                        << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__3__KET____DOT__data_state_bwd 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hb453e96e__1;
    __Vfunc_prince_mult_prime_64bit__652__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__3__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_prince_mult_prime_64bit__652__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1387937694864291977ull);
    __Vfunc_prince_nibble_red16__653__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__652__state_in));
    __Vfunc_prince_nibble_red16__653__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__653__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__653__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__653__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__653__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__653__Vfuncout)));
    __Vfunc_prince_nibble_red16__654__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__652__state_in));
    __Vfunc_prince_nibble_red16__654__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__654__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__654__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__654__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__654__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__654__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__655__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__652__state_in));
    __Vfunc_prince_nibble_red16__655__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__655__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__655__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__655__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__655__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__655__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__656__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__652__state_in));
    __Vfunc_prince_nibble_red16__656__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__656__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__656__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__656__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__656__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__656__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__657__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__652__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__657__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__657__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__657__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__657__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__657__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__657__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__658__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__652__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__658__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__658__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__658__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__658__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__658__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__658__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__659__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__652__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__659__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__659__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__659__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__659__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__659__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__659__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__660__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__652__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__660__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__660__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__660__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__660__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__660__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__660__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__661__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__652__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__661__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__661__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__661__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__661__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__661__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__661__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__662__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__652__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__662__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__662__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__662__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__662__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__662__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__662__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__663__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__652__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__663__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__663__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__663__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__663__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__663__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__663__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__664__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__652__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__664__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__664__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__664__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__664__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__664__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__664__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__665__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__652__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__665__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__665__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__665__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__665__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__665__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__665__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__666__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__652__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__666__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__666__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__666__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__666__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__666__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__666__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__667__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__652__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__667__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__667__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__667__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__667__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__667__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__667__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__668__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__652__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__668__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__668__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__668__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__668__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__668__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__668__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__652__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__652__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__3__KET____DOT__data_state_bwd 
        = __Vfunc_prince_mult_prime_64bit__652__Vfuncout;
    __Vfunc_sbox4_64bit__669__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__3__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_sbox4_64bit__669__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10252854106104319827ull);
    __Vfunc_sbox4_8bit__670__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__669__state_in));
    vlSelf->__Vfunc_sbox4_8bit__670__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14648616715686252202ull);
    vlSelfRef.__Vfunc_sbox4_8bit__670__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__670__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__670__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__670__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__670__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__670__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__670__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__670__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__669__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__669__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__670__Vfuncout)));
    __Vfunc_sbox4_8bit__670__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__669__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__670__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14648616715686252202ull);
    vlSelfRef.__Vfunc_sbox4_8bit__670__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__670__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__670__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__670__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__670__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__670__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__670__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__670__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__669__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__669__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__670__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__670__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__669__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__670__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14648616715686252202ull);
    vlSelfRef.__Vfunc_sbox4_8bit__670__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__670__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__670__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__670__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__670__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__670__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__670__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__670__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__669__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__669__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__670__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__670__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__669__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__670__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14648616715686252202ull);
    vlSelfRef.__Vfunc_sbox4_8bit__670__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__670__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__670__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__670__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__670__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__670__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__670__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__670__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__669__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__669__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__670__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__670__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__669__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__670__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14648616715686252202ull);
    vlSelfRef.__Vfunc_sbox4_8bit__670__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__670__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__670__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__670__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__670__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__670__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__670__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__670__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__669__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__669__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__670__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__670__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__669__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__670__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14648616715686252202ull);
    vlSelfRef.__Vfunc_sbox4_8bit__670__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__670__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__670__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__670__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__670__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__670__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__670__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__670__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__669__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__669__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__670__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__670__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__669__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__670__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14648616715686252202ull);
    vlSelfRef.__Vfunc_sbox4_8bit__670__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__670__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__670__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__670__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__670__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__670__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__670__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__670__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__669__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__669__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__670__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__670__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__669__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__670__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14648616715686252202ull);
    vlSelfRef.__Vfunc_sbox4_8bit__670__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__670__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__670__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__670__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__670__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__670__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__670__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__670__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__669__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__669__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__670__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__669__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__669__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi__BRA__255__03a192__KET__ 
        = __Vfunc_sbox4_64bit__669__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_o 
        = (0xc0ac29b7c97c50ddULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi__BRA__255__03a192__KET__ 
                                    ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0_prime_d 
                                       ^ (((QData)((IData)(
                                                           vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[0U]))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_diffuse_data__BRA__0__KET____DOT__u_prim_subst_perm_enc__DOT__data_i 
        = (0x0000007fffffffffULL & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_o));
}

void Vsim___024root___nba_sequent__TOP__57(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__57\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_lc_tx_test_true_loose__473__Vfuncout;
    __Vfunc_lc_tx_test_true_loose__473__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_true_loose__473__val;
    __Vfunc_lc_tx_test_true_loose__473__val = 0;
    CData/*3:0*/ __Vfunc_lc_tx_inv__474__Vfuncout;
    __Vfunc_lc_tx_inv__474__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_inv__474__a;
    __Vfunc_lc_tx_inv__474__a = 0;
    CData/*3:0*/ __Vfunc_lc_tx_or_hi__475__Vfuncout;
    __Vfunc_lc_tx_or_hi__475__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_or_hi__475__a;
    __Vfunc_lc_tx_or_hi__475__a = 0;
    CData/*3:0*/ __Vfunc_lc_tx_or_hi__475__b;
    __Vfunc_lc_tx_or_hi__475__b = 0;
    CData/*3:0*/ __Vfunc_lc_tx_bool_to_lc_tx__476__Vfuncout;
    __Vfunc_lc_tx_bool_to_lc_tx__476__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_lc_tx_bool_to_lc_tx__476__val;
    __Vfunc_lc_tx_bool_to_lc_tx__476__val = 0;
    CData/*3:0*/ __Vfunc_lc_tx_or__477__Vfuncout;
    __Vfunc_lc_tx_or__477__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_or__477__a;
    __Vfunc_lc_tx_or__477__a = 0;
    CData/*3:0*/ __Vfunc_lc_tx_or__477__b;
    __Vfunc_lc_tx_or__477__b = 0;
    CData/*3:0*/ __Vfunc_lc_tx_or__477__a_in;
    __Vfunc_lc_tx_or__477__a_in = 0;
    CData/*3:0*/ __Vfunc_lc_tx_or__477__b_in;
    __Vfunc_lc_tx_or__477__b_in = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__local_esc_reg 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__Vcellout__u_status_escalated__q) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__Vcellout__u_status_init_error__q) 
              | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__Vcellout__u_status_bus_integ_error__q) 
                 | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__Vcellout__u_status_readback_error__q) 
                    | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__Vcellout__u_status_sram_alert__q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__clr_i 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__Vcellout__u_ctrl_init__q) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__init_q)) 
              & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__ctrl_qe)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000016U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0x00000016U][0U]) | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__VdfgRegularize_h6e95ff9d_0_1225));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000016U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0x00000016U][0U]) | ((IData)((0x0003ffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
                                  << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000016U][1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000016U][2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000016U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000016U][0U]) | ((0x0000fffeU & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__VdfgRegularize_h6e95ff9d_0_1225)) 
                                  | (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_reg_if__DOT__outstanding_q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000016U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000016U][0U]) | (((1U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_reg_if__DOT__rspop_q))
                                    ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_reg_if__DOT__rdata_q
                                    : 0U) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000016U][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000016U][1U]) | (((1U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_reg_if__DOT__rspop_q))
                                    ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_reg_if__DOT__rdata_q
                                    : 0U) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000016U][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000016U][1U]) | (0xffff0000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__VdfgRegularize_h6e95ff9d_0_1394[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000016U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000016U][2U]) | (1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__VdfgRegularize_h6e95ff9d_0_1394[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000016U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000016U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_reg_if__DOT__outstanding_q) 
                                        << 1U)));
    __Vfunc_lc_tx_test_true_loose__473__val = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_lc_sync.__PVT__lc_en;
    __Vfunc_lc_tx_test_true_loose__473__Vfuncout = 
        (0x0aU != (IData)(__Vfunc_lc_tx_test_true_loose__473__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__escalate 
        = __Vfunc_lc_tx_test_true_loose__473__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__err_o 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__err_q) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__err_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__err_o 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__err_q) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__err_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__err_o 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__err_q) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__err_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req 
        = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req 
        = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req 
        = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req 
        = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req 
        = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__req_sync.q_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__src_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__err_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (0x03ffU != (0x000007ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_regwen__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_regwen__DOT__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_regwen__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__wr_data;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_regwen__DOT__q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_regwen__DOT__q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0x03ffU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0U;
    }
    __Vfunc_lc_tx_bool_to_lc_tx__476__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__local_esc_reg;
    __Vfunc_lc_tx_bool_to_lc_tx__476__Vfuncout = ((IData)(__Vfunc_lc_tx_bool_to_lc_tx__476__val)
                                                   ? 5U
                                                   : 0x0aU);
    __Vfunc_lc_tx_or_hi__475__b = __Vfunc_lc_tx_bool_to_lc_tx__476__Vfuncout;
    __Vfunc_lc_tx_or_hi__475__a = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_lc_sync.__PVT__lc_en;
    __Vfunc_lc_tx_or__477__b = __Vfunc_lc_tx_or_hi__475__b;
    __Vfunc_lc_tx_or__477__a = __Vfunc_lc_tx_or_hi__475__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_lc_tx_or__477__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17063219605419917479ull);
    __Vfunc_lc_tx_or__477__a_in = __Vfunc_lc_tx_or__477__a;
    __Vfunc_lc_tx_or__477__b_in = __Vfunc_lc_tx_or__477__b;
    vlSelfRef.__Vfunc_lc_tx_or__477__out = ((0x0cU 
                                             & (IData)(vlSelfRef.__Vfunc_lc_tx_or__477__out)) 
                                            | ((2U 
                                                & ((IData)(__Vfunc_lc_tx_or__477__a_in) 
                                                   & (IData)(__Vfunc_lc_tx_or__477__b_in))) 
                                               | (1U 
                                                  & ((IData)(__Vfunc_lc_tx_or__477__a_in) 
                                                     | (IData)(__Vfunc_lc_tx_or__477__b_in)))));
    vlSelfRef.__Vfunc_lc_tx_or__477__out = ((3U & (IData)(vlSelfRef.__Vfunc_lc_tx_or__477__out)) 
                                            | (((2U 
                                                 & (((IData)(__Vfunc_lc_tx_or__477__a_in) 
                                                     & (IData)(__Vfunc_lc_tx_or__477__b_in)) 
                                                    >> 2U)) 
                                                | (1U 
                                                   & (((IData)(__Vfunc_lc_tx_or__477__a_in) 
                                                       | (IData)(__Vfunc_lc_tx_or__477__b_in)) 
                                                      >> 2U))) 
                                               << 2U));
    __Vfunc_lc_tx_or__477__Vfuncout = vlSelfRef.__Vfunc_lc_tx_or__477__out;
    __Vfunc_lc_tx_or_hi__475__Vfuncout = __Vfunc_lc_tx_or__477__Vfuncout;
    __Vfunc_lc_tx_inv__474__a = __Vfunc_lc_tx_or_hi__475__Vfuncout;
    __Vfunc_lc_tx_inv__474__Vfuncout = (0x0000000fU 
                                        & (~ (IData)(__Vfunc_lc_tx_inv__474__a)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__lc_tlul_gate_en 
        = __Vfunc_lc_tx_inv__474__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__gen_max_len_sva__DOT__perturbed_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_lfsr__DOT__gen_max_len_sva__DOT__perturbed_q) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__clr_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_ack_i))
                      : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_ack_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_req_pending_q))
                      : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_req_pending_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ec_rst_ctl_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ac_debounce_ctl_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_lid_debounce_ctl_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_pwrb_debounce_ctl_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_invert_ctl_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_allowed_ctl_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_ctl_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_pin_out_value_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_ctl_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_key_intr_debounce_ctl_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_debounce_ctl_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_auto_block_out_ctl_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_0_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_1_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_2_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_out_ctl_3_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_ctrl_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__dst_to_src 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__src_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_ctrl_cdc__DOT__src_busy_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_req_pending_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_req_pending_d));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sram_ctrl_ret_aon.u_prim_sync_reqack_data.u_prim_sync_reqack.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__req_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__req_sync.q_o)));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sram_ctrl_ret_aon.u_prim_sync_reqack_data.u_prim_sync_reqack.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_req 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__Vcellout__u_ctrl_renew_scr_key__q) 
           & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__ctrl_qe) 
              & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_req_pending_q)) 
                 & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__init_q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__ack_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__ack_sync.q_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_req_pending_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_req_pending_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_req) 
           | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o)) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_req_pending_q)));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim___024root___nba_sequent__TOP__58(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__58\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__15__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__15__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__15__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__15__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__15__payload;
    __Vfunc_extract_d2h_rsp_intg__15__payload = 0;
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__63__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__63__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__63__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__63__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__63__payload;
    __Vfunc_extract_d2h_rsp_intg__63__payload = 0;
    IData/*31:0*/ __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_q = 0;
    IData/*31:0*/ __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_en_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_en_q = 0;
    CData/*0:0*/ __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__polarity_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__polarity_q = 0;
    CData/*0:0*/ __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__inactive_level_pcl_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__inactive_level_pcl_q = 0;
    CData/*0:0*/ __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__inactive_level_pda_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__inactive_level_pda_q = 0;
    QData/*63:0*/ __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__data_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__data_q = 0;
    CData/*0:0*/ __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__pcl_int_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__pcl_int_q = 0;
    CData/*5:0*/ __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__bit_cnt_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__bit_cnt_q = 0;
    CData/*0:0*/ __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__complete_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__complete_q = 0;
    CData/*0:0*/ __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__polarity_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__polarity_q = 0;
    CData/*0:0*/ __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__inactive_level_pcl_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__inactive_level_pcl_q = 0;
    CData/*0:0*/ __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__inactive_level_pda_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__inactive_level_pda_q = 0;
    QData/*63:0*/ __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__data_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__data_q = 0;
    CData/*0:0*/ __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__pcl_int_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__pcl_int_q = 0;
    CData/*5:0*/ __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__bit_cnt_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__bit_cnt_q = 0;
    CData/*0:0*/ __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__complete_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__complete_q = 0;
    // Body
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__bit_cnt_q 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__bit_cnt_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__bit_cnt_q 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__bit_cnt_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__pcl_int_q 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__pcl_int_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__pcl_int_q 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__pcl_int_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__polarity_q 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__polarity_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__inactive_level_pcl_q 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__inactive_level_pcl_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__inactive_level_pda_q 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__inactive_level_pda_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__data_q 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__data_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__polarity_q 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__polarity_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__inactive_level_pcl_q 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__inactive_level_pcl_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__inactive_level_pda_q 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__inactive_level_pda_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__data_q 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__data_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__complete_q 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__complete_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__complete_q 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__complete_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_en_q 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_en_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_q 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0U][0U]) | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__VdfgRegularize_h6e95ff9d_0_1192));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0U][0U]) | ((IData)((0x0003ffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                      << 0x00000030U) 
                                     | (((QData)((IData)(
                                                         vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                           >> 0x00000010U))))) 
                         << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0U][1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0U][2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0U][0U]) | ((0x0000fffeU & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__VdfgRegularize_h6e95ff9d_0_1192)) 
                         | (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0U][0U]) | (((1U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                           ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q
                           : 0U) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0U][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0U][1U]) | (((1U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                           ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q
                           : 0U) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0U][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0U][1U]) | (0xffff0000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__VdfgRegularize_h6e95ff9d_0_1381[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0U][2U]) | (1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__VdfgRegularize_h6e95ff9d_0_1381[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[1U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [1U][0U]) | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__VdfgRegularize_h6e95ff9d_0_1193));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[1U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [1U][0U]) | ((IData)((0x0003ffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                      << 0x00000030U) 
                                     | (((QData)((IData)(
                                                         vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                           >> 0x00000010U))))) 
                         << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[1U][1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[1U][2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[1U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [1U][0U]) | ((0x0000fffeU & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__VdfgRegularize_h6e95ff9d_0_1193)) 
                         | (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[1U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [1U][0U]) | (((1U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                           ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q
                           : 0U) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[1U][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [1U][1U]) | (((1U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                           ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q
                           : 0U) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[1U][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [1U][1U]) | (0xffff0000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__VdfgRegularize_h6e95ff9d_0_1382[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[1U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [1U][2U]) | (1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__VdfgRegularize_h6e95ff9d_0_1382[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[1U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [1U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[2U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [2U][0U]) | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__VdfgRegularize_h6e95ff9d_0_1194));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[2U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [2U][0U]) | ((IData)((0x0003ffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                      << 0x00000030U) 
                                     | (((QData)((IData)(
                                                         vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                           >> 0x00000010U))))) 
                         << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[2U][1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[2U][2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[2U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [2U][0U]) | ((0x0000fffeU & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__VdfgRegularize_h6e95ff9d_0_1194)) 
                         | (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[2U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [2U][0U]) | (((1U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                           ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q
                           : 0U) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[2U][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [2U][1U]) | (((1U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                           ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q
                           : 0U) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[2U][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [2U][1U]) | (0xffff0000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__VdfgRegularize_h6e95ff9d_0_1383[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[2U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [2U][2U]) | (1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__VdfgRegularize_h6e95ff9d_0_1383[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[2U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [2U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[3U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [3U][0U]) | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__VdfgRegularize_h6e95ff9d_0_1195));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[3U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [3U][0U]) | ((IData)((0x0003ffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                      << 0x00000030U) 
                                     | (((QData)((IData)(
                                                         vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                           >> 0x00000010U))))) 
                         << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[3U][1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[3U][2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[3U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [3U][0U]) | ((0x0000fffeU & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__VdfgRegularize_h6e95ff9d_0_1195)) 
                         | (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[3U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [3U][0U]) | (((1U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                           ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q
                           : 0U) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[3U][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [3U][1U]) | (((1U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                           ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q
                           : 0U) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[3U][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [3U][1U]) | (0xffff0000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__VdfgRegularize_h6e95ff9d_0_1384[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[3U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [3U][2U]) | (1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__VdfgRegularize_h6e95ff9d_0_1384[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[3U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [3U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                               << 1U)));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__pcl_int_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__complete_q)
                ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__pcl_int_q)
                : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__pcl_int_d)));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__pcl_int_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__complete_q)
                ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__pcl_int_q)
                : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__pcl_int_d)));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__polarity_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch1__q)
                      ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__polarity_q)
                      : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch1_ctrl[3U] 
                         >> 0x00000012U))));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__inactive_level_pcl_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch1__q)
                      ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__inactive_level_pcl_q)
                      : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch1_ctrl[3U] 
                         >> 0x00000011U))));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__inactive_level_pda_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch1__q)
                      ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__inactive_level_pda_q)
                      : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch1_ctrl[3U] 
                         >> 0x00000010U))));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__polarity_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch0__q)
                      ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__polarity_q)
                      : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch0_ctrl[3U] 
                         >> 0x00000012U))));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__inactive_level_pcl_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch0__q)
                      ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__inactive_level_pcl_q)
                      : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch0_ctrl[3U] 
                         >> 0x00000011U))));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__inactive_level_pda_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch0__q)
                      ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__inactive_level_pda_q)
                      : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch0_ctrl[3U] 
                         >> 0x00000010U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__active_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__active_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__active_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__active_d));
    if ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT____Vcellout__u_hw_straps_data_in_valid__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT____Vcellout__u_hw_straps_data_in__q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_pattgen_pcl0_tx_d2p 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__active)
                      ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__polarity_q)
                          ? (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__pcl_int_q))
                          : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__pcl_int_q))
                      : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__inactive_level_pcl_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_pattgen_pcl1_tx_d2p 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__active)
                      ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__polarity_q)
                          ? (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__pcl_int_q))
                          : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__pcl_int_q))
                      : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__inactive_level_pcl_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_pattgen_pda0_tx_d2p 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__active)
                      ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__data_q 
                                 >> (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__bit_cnt_q)))
                      : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__inactive_level_pda_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_pattgen_pda1_tx_d2p 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__active)
                      ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__data_q 
                                 >> (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__bit_cnt_q)))
                      : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__inactive_level_pda_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__0__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__0__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__1__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__1__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__2__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__2__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__3__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__3__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__4__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__4__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__5__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__5__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__6__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__6__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__7__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__7__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__8__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__8__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__9__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__9__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__10__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__10__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__11__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__11__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__12__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__12__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__13__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__13__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__14__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__14__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__15__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__15__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__16__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__16__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__17__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__17__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__18__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__18__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__19__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__19__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__20__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__20__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__21__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__21__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__22__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__22__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__23__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__23__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__24__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__24__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__25__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__25__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__26__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__26__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__27__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__27__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__28__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__28__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__29__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__29__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__30__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__30__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__31__KET____DOT__u_filter__DOT__filter_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__31__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__intr_pattgen_done_ch0 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_intr_state_done_ch0__q) 
               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_intr_enable_done_ch0__q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__intr_pattgen_done_ch1 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_intr_state_done_ch1__q) 
               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_intr_enable_done_ch1__q)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__rep_cnt_q 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__rep_cnt_en)
                ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__rep_cnt_d)
                : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__rep_cnt_q));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__rep_cnt_q 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__rep_cnt_en)
                ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__rep_cnt_d)
                : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__rep_cnt_q));
        __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__bit_cnt_q 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__bit_cnt_en)
                ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__bit_cnt_d)
                : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__bit_cnt_q));
        __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__bit_cnt_q 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__bit_cnt_en)
                ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__bit_cnt_d)
                : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__bit_cnt_q));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__clk_cnt_q 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__complete_q)
                ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__clk_cnt_q
                : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__clk_cnt_d);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__clk_cnt_q 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__complete_q)
                ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__clk_cnt_q
                : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__clk_cnt_d);
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch1__q) {
            __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__data_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__data_q;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__reps_q 
                = (0x000003ffU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__reps_q));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__len_q 
                = (0x0000003fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__len_q));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__prediv_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__prediv_q;
        } else {
            __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__data_q 
                = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch1_ctrl[2U])) 
                    << 0x00000030U) | (((QData)((IData)(
                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch1_ctrl[1U])) 
                                        << 0x00000010U) 
                                       | ((QData)((IData)(
                                                          vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch1_ctrl[0U])) 
                                          >> 0x00000010U)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__reps_q 
                = (0x000003ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch1_ctrl[0U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__len_q 
                = (0x0000003fU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch1_ctrl[0U] 
                                   << 0x00000016U) 
                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch1_ctrl[0U] 
                                     >> 0x0000000aU)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__prediv_q 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch1_ctrl[3U] 
                    << 0x00000010U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch1_ctrl[2U] 
                                       >> 0x00000010U));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch0__q) {
            __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__data_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__data_q;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__reps_q 
                = (0x000003ffU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__reps_q));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__len_q 
                = (0x0000003fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__len_q));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__prediv_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__prediv_q;
        } else {
            __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__data_q 
                = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch0_ctrl[2U])) 
                    << 0x00000030U) | (((QData)((IData)(
                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch0_ctrl[1U])) 
                                        << 0x00000010U) 
                                       | ((QData)((IData)(
                                                          vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch0_ctrl[0U])) 
                                          >> 0x00000010U)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__reps_q 
                = (0x000003ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch0_ctrl[0U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__len_q 
                = (0x0000003fU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch0_ctrl[0U] 
                                   << 0x00000016U) 
                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch0_ctrl[0U] 
                                     >> 0x0000000aU)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__prediv_q 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch0_ctrl[3U] 
                    << 0x00000010U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch0_ctrl[2U] 
                                       >> 0x00000010U));
        }
        if ((0x00000020U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[8U])) {
            __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_en_q 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[9U] 
                    << 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[8U] 
                                       >> 6U));
        } else if ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[6U])) {
            __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_en_q 
                = ((0x0000ffffU & __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_en_q) 
                   | (((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[7U] 
                          << 0x0000000dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[6U] 
                                             >> 0x00000013U)) 
                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[6U] 
                            << 0x0000001eU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[6U] 
                                               >> 2U))) 
                       | ((~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[7U] 
                               << 0x0000000dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[6U] 
                                                  >> 0x00000013U))) 
                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_en_q 
                             >> 0x10U))) << 0x00000010U));
        } else if ((8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[7U])) {
            __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_en_q 
                = ((0xffff0000U & __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_en_q) 
                   | (0x0000ffffU & ((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[8U] 
                                        << 0x0000000bU) 
                                       | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[7U] 
                                          >> 0x00000015U)) 
                                      & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[7U] 
                                          << 0x0000001cU) 
                                         | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[7U] 
                                            >> 4U))) 
                                     | ((~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[8U] 
                                             << 0x0000000bU) 
                                            | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[7U] 
                                               >> 0x00000015U))) 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_en_q))));
        }
        if ((0x00000400U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[0x0000000bU])) {
            __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_q 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[0x0000000cU] 
                    << 0x00000015U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[0x0000000bU] 
                                       >> 0x0000000bU));
        } else if ((0x00000040U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[9U])) {
            __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_q 
                = ((0x0000ffffU & __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_q) 
                   | (((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[0x0000000aU] 
                          << 8U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[9U] 
                                    >> 0x00000018U)) 
                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[9U] 
                            << 0x00000019U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[9U] 
                                               >> 7U))) 
                       | ((~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[0x0000000aU] 
                               << 8U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[9U] 
                                         >> 0x00000018U))) 
                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_q 
                             >> 0x10U))) << 0x00000010U));
        } else if ((0x00000100U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[0x0000000aU])) {
            __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_q 
                = ((0xffff0000U & __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_q) 
                   | (0x0000ffffU & ((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[0x0000000bU] 
                                        << 6U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[0x0000000aU] 
                                                  >> 0x0000001aU)) 
                                      & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[0x0000000aU] 
                                          << 0x00000017U) 
                                         | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[0x0000000aU] 
                                            >> 9U))) 
                                     | ((~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[0x0000000bU] 
                                             << 6U) 
                                            | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__reg2hw[0x0000000aU] 
                                               >> 0x0000001aU))) 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_q))));
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__0__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__0__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__1__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__1__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__2__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__2__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__3__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__3__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__4__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__4__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__5__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__5__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__6__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__6__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__7__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__7__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__8__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__8__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__9__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__9__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__10__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__10__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__11__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__11__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__12__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__12__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__13__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__13__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__14__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__14__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__15__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__15__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__16__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__16__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__17__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__17__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__18__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__18__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__19__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__19__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__20__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__20__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__21__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__21__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__22__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__22__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__23__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__23__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__24__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__24__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__25__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__25__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__26__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__26__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__27__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__27__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__28__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__28__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__29__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__29__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__30__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__30__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__31__KET____DOT__u_filter__DOT__diff_ctr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__31__KET____DOT__u_filter__DOT__diff_ctr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_data_in__DOT__q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_data_in__DOT__d;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_1__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_data_ch0_1__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_1__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch1_0__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_data_ch1_0__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch1_0__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch1_1__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_data_ch1_1__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch1_1__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_size_len_ch0__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_size_len_ch1__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_size_len_ch1__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_size_reps_ch1__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_size_reps_ch1__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_size_len_ch0__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_size_len_ch0__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_size_reps_ch0__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_size_reps_ch0__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_prediv_ch1__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_prediv_ch1__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_prediv_ch1__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_prediv_ch0__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_prediv_ch0__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_prediv_ch0__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_data_ch0_0__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wr_data;
        }
        if (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.err_o) 
             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__err_q = 1U;
        }
        if (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.err_o) 
             | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_prim_reg_we_check.__PVT__u_prim_onehot_check__DOT__err_o))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__err_q = 1U;
        }
        __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__complete_q 
            = ((1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch1__q)) 
                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__rep_cnt_en) 
                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT____VdfgRegularize_hfae29bc2_0_3))))
                ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch1__q)
                : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__complete_q));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__complete_q2 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__complete_q;
        __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__complete_q 
            = ((1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch0__q)) 
                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__rep_cnt_en) 
                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT____VdfgRegularize_hfae29bc2_0_3))))
                ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch0__q)
                : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__complete_q));
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_ctrl_enable_ch0__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_polarity_ch1__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_ctrl_polarity_ch1__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_inactive_level_pcl_ch1__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_ctrl_inactive_level_pcl_ch1__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_inactive_level_pda_ch1__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_ctrl_inactive_level_pda_ch1__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_polarity_ch0__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_ctrl_polarity_ch0__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_inactive_level_pcl_ch0__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_ctrl_inactive_level_pcl_ch0__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_inactive_level_pda_ch0__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_ctrl_inactive_level_pda_ch0__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch1__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_ctrl_enable_ch1__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch0__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_ctrl_enable_ch0__DOT__wr_data;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__complete_q2 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__complete_q;
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__0__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__0__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__0__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__1__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__1__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__1__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__2__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__2__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__2__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__3__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__3__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__3__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__4__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__4__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__4__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__5__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__5__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__5__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__6__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__6__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__6__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__7__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__7__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__7__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__8__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__8__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__8__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__9__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__9__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__9__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__10__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__10__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__10__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__11__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__11__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__11__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__12__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__12__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__12__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__13__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__13__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__13__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__14__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__14__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__14__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__15__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__15__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__15__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__16__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__16__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__16__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__17__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__17__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__17__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__18__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__18__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__18__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__19__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__19__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__19__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__20__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__20__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__20__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__21__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__21__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__21__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__22__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__22__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__22__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__23__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__23__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__23__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__24__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__24__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__24__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__25__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__25__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__25__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__26__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__26__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__26__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__27__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__27__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__27__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__28__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__28__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__28__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__29__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__29__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__29__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__30__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__30__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__30__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__31__KET____DOT__u_filter__DOT__diff_ctr_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__31__KET____DOT__u_filter__DOT__stored_value_q 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__31__KET____DOT__u_filter__DOT__gen_async__DOT__prim_flop_2sync.q_o;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__intr_gpio_gpio 
            = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT____Vcellout__u_intr_state__q 
               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT____Vcellout__u_intr_enable__q);
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__error_q 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__error_i) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q 
                = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__error_i) 
                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__wr_req))
                    ? 0xffffffffU : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__reg_rdata_next);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q 
                = (0x000000ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                   << 4U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q 
                = (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                         >> 4U));
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__d_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__error_q 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT____Vcellinp__u_reg_if__error_i) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q 
                = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT____Vcellinp__u_reg_if__error_i) 
                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__wr_req))
                    ? 0xffffffffU : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__reg_rdata_next);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q 
                = (0x000000ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                   << 4U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q 
                = (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                         >> 4U));
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__d_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_intr_state_done_ch0__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_intr_state_done_ch0__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_intr_state_done_ch0__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_intr_enable_done_ch0__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_intr_enable_done_ch0__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_intr_enable_done_ch0__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_intr_enable_done_ch1__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_intr_enable_done_ch1__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_intr_state_done_ch1__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_intr_state_done_ch1__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_intr_state_done_ch1__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_state__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT____Vcellout__u_intr_state__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_state__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_enable__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT____Vcellout__u_intr_enable__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_enable__DOT__wr_data;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__rep_cnt_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__rep_cnt_q = 0U;
        __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__bit_cnt_q = 0U;
        __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__bit_cnt_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__clk_cnt_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__clk_cnt_q = 0U;
        __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__data_q = 0ULL;
        __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__data_q = 0ULL;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__reps_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__reps_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__len_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__len_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__prediv_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__prediv_q = 0U;
        __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_en_q = 0U;
        __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__0__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__1__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__2__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__3__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__4__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__5__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__6__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__7__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__8__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__9__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__10__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__11__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__12__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__13__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__14__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__15__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__16__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__17__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__18__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__19__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__20__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__21__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__22__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__23__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__24__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__25__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__26__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__27__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__28__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__29__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__30__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__31__KET____DOT__u_filter__DOT__diff_ctr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_data_in__DOT__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_data_ch0_1__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_data_ch1_0__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_data_ch1_1__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_size_len_ch1__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_size_reps_ch1__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_size_len_ch0__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_size_reps_ch0__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_prediv_ch1__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_prediv_ch0__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_data_ch0_0__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_polarity_ch1__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_inactive_level_pcl_ch1__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_inactive_level_pda_ch1__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_polarity_ch0__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_inactive_level_pcl_ch0__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_inactive_level_pda_ch0__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__err_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__err_q = 0U;
        __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__complete_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__complete_q2 = 0U;
        __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__complete_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__complete_q2 = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__0__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__1__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__2__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__3__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__4__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__5__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__6__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__7__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__8__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__9__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__10__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__11__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__12__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__13__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__14__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__15__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__16__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__17__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__18__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__19__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__20__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__21__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__22__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__23__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__24__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__25__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__26__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__27__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__28__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__29__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__30__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_filter__BRA__31__KET____DOT__u_filter__DOT__stored_value_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__intr_gpio_gpio = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__error_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__error_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch1__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch0__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_intr_state_done_ch0__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_intr_enable_done_ch0__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_intr_state_done_ch1__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_intr_enable_done_ch1__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT____Vcellout__u_intr_state__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT____Vcellout__u_intr_enable__q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_en_q 
        = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_en_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_q 
        = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__cio_gpio_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__complete_q 
        = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__complete_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__complete_q 
        = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__complete_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__polarity_q 
        = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__polarity_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__inactive_level_pcl_q 
        = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__inactive_level_pcl_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__pcl_int_q 
        = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__pcl_int_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__polarity_q 
        = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__polarity_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__inactive_level_pcl_q 
        = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__inactive_level_pcl_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__pcl_int_q 
        = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__pcl_int_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__data_q 
        = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__data_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__inactive_level_pda_q 
        = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__inactive_level_pda_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__bit_cnt_q 
        = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__bit_cnt_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__data_q 
        = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__data_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__inactive_level_pda_q 
        = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__inactive_level_pda_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__bit_cnt_q 
        = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__bit_cnt_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT____VdfgRegularize_hfae29bc2_0_3 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__rep_cnt_q) 
           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__reps_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT____VdfgRegularize_hfae29bc2_0_3 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__rep_cnt_q) 
           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__reps_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT____VdfgRegularize_hfae29bc2_0_0 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__clk_cnt_q 
           == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__prediv_q);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT____VdfgRegularize_hfae29bc2_0_0 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__clk_cnt_q 
           == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__prediv_q);
    vlSelfRef.__VdfgRegularize_he50b618e_0_857[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_data_ch1_0__q)) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_size_reps_ch1__q) 
                                                         << 0x00000016U) 
                                                        | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_size_len_ch1__q) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_size_reps_ch0__q) 
                                                           << 6U) 
                                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_size_len_ch0__q)))))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_857[1U] 
        = (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_data_ch1_0__q)) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_size_reps_ch1__q) 
                                                          << 0x00000016U) 
                                                         | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_size_len_ch1__q) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_size_reps_ch0__q) 
                                                            << 6U) 
                                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_size_len_ch0__q)))))) 
                   >> 0x00000020U));
    vlSelfRef.__VdfgRegularize_he50b618e_0_857[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_data_ch1_1__q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT____VdfgRegularize_hfae29bc2_0_2 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__bit_cnt_q) 
           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__len_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT____VdfgRegularize_hfae29bc2_0_2 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__bit_cnt_q) 
           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__len_q));
    vlSelfRef.__VdfgRegularize_he50b618e_0_860 = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_852 = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1143[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_860))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1143[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1143[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_860))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1143[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1143[1U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1143[2U] 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1140[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_852))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1140[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1140[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_852))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1140[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1140[1U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1140[2U] 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__pcl_int_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch1__q) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT____VdfgRegularize_hfae29bc2_0_0)
               ? (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__pcl_int_q))
               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__pcl_int_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch1_ctrl[0U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_857[2U])) 
                      << 0x00000020U) | (QData)((IData)(
                                                        vlSelfRef.__VdfgRegularize_he50b618e_0_857[1U])))) 
            << 0x00000010U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_size_len_ch1__q) 
                                << 0x0000000aU) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_size_reps_ch1__q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch1_ctrl[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_857[2U])) 
                      << 0x00000020U) | (QData)((IData)(
                                                        vlSelfRef.__VdfgRegularize_he50b618e_0_857[1U])))) 
            >> 0x00000010U) | ((IData)(((((QData)((IData)(
                                                          vlSelfRef.__VdfgRegularize_he50b618e_0_857[2U])) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.__VdfgRegularize_he50b618e_0_857[1U]))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch1_ctrl[2U] 
        = (((IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_857[2U])) 
                       << 0x00000020U) | (QData)((IData)(
                                                         vlSelfRef.__VdfgRegularize_he50b618e_0_857[1U]))) 
                     >> 0x00000020U)) >> 0x00000010U) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_prediv_ch1__q 
              << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch1_ctrl[3U] 
        = ((0x000f0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch1_ctrl[3U]) 
           | (0x000fffffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_prediv_ch1__q 
                             >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch1_ctrl[3U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch1_ctrl[3U]) 
           | (0x000fffffU & (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch1__q) 
                                << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_polarity_ch1__q) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_inactive_level_pcl_ch1__q) 
                                << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_inactive_level_pda_ch1__q))) 
                             << 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__bit_cnt_en 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch1__q)) 
                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__pcl_int_q) 
                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT____VdfgRegularize_hfae29bc2_0_0))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__active_d 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__complete_q)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__active_q) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch1__q)));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch1__q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__clk_cnt_d 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT____VdfgRegularize_hfae29bc2_0_0)
                ? 0U : ((IData)(1U) + vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__clk_cnt_q));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__bit_cnt_d 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT____VdfgRegularize_hfae29bc2_0_2)
                ? 0U : (0x0000003fU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__bit_cnt_q))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__rep_cnt_d 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT____VdfgRegularize_hfae29bc2_0_3)
                ? 0U : (0x000003ffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__rep_cnt_q))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__active 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__active_d;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__clk_cnt_d = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__bit_cnt_d = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__rep_cnt_d = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__active 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__active_q;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__pcl_int_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch0__q) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT____VdfgRegularize_hfae29bc2_0_0)
               ? (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__pcl_int_q))
               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__pcl_int_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__bit_cnt_en 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch0__q)) 
                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__pcl_int_q) 
                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT____VdfgRegularize_hfae29bc2_0_0))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__active_d 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__complete_q)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__active_q) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch0__q)));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch0__q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__clk_cnt_d 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT____VdfgRegularize_hfae29bc2_0_0)
                ? 0U : ((IData)(1U) + vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__clk_cnt_q));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__bit_cnt_d 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT____VdfgRegularize_hfae29bc2_0_2)
                ? 0U : (0x0000003fU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__bit_cnt_q))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__rep_cnt_d 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT____VdfgRegularize_hfae29bc2_0_3)
                ? 0U : (0x000003ffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__rep_cnt_q))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__active 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__active_d;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__clk_cnt_d = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__bit_cnt_d = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__rep_cnt_d = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__active 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__active_q;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch0_ctrl[0U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_data_ch0_0__q 
            << 0x00000010U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_size_len_ch0__q) 
                                << 0x0000000aU) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_size_reps_ch0__q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch0_ctrl[1U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_data_ch0_0__q 
            >> 0x00000010U) | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_prediv_ch0__q)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_data_ch0_1__q)))) 
                               << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch0_ctrl[2U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_prediv_ch0__q)) 
                      << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_data_ch0_1__q)))) 
            >> 0x00000010U) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_prediv_ch0__q)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_data_ch0_1__q))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch0_ctrl[3U] 
        = ((0x000f0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch0_ctrl[3U]) 
           | (0x000fffffU & ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_prediv_ch0__q)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_data_ch0_1__q))) 
                                      >> 0x00000020U)) 
                             >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch0_ctrl[3U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__ch0_ctrl[3U]) 
           | (0x000fffffU & (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch0__q) 
                                << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_polarity_ch0__q) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_inactive_level_pcl_ch0__q) 
                                << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_inactive_level_pda_ch0__q))) 
                             << 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1143[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1143[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
            << 1U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1143[2U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1140[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1140[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
            << 1U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1140[2U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__rep_cnt_en 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch1__q)) 
                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT__bit_cnt_en) 
                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan1__DOT____VdfgRegularize_hfae29bc2_0_2))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__rep_cnt_en 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT____Vcellout__u_ctrl_enable_ch0__q)) 
                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT__bit_cnt_en) 
                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_pattgen_core__DOT__chan0__DOT____VdfgRegularize_hfae29bc2_0_2))));
    __Vfunc_extract_d2h_rsp_intg__63__tl[0U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    __Vfunc_extract_d2h_rsp_intg__63__tl[1U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    __Vfunc_extract_d2h_rsp_intg__63__tl[2U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    __Vfunc_extract_d2h_rsp_intg__63__payload = ((0x00000038U 
                                                  & ((__Vfunc_extract_d2h_rsp_intg__63__tl[2U] 
                                                      << 5U) 
                                                     | (0x00000018U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__63__tl[1U] 
                                                           >> 0x0000001bU)))) 
                                                 | ((6U 
                                                     & (__Vfunc_extract_d2h_rsp_intg__63__tl[1U] 
                                                        >> 0x00000018U)) 
                                                    | (1U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__63__tl[0U] 
                                                          >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__63__Vfuncout = __Vfunc_extract_d2h_rsp_intg__63__payload;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__63__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__15__tl[0U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    __Vfunc_extract_d2h_rsp_intg__15__tl[1U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    __Vfunc_extract_d2h_rsp_intg__15__tl[2U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    __Vfunc_extract_d2h_rsp_intg__15__payload = ((0x00000038U 
                                                  & ((__Vfunc_extract_d2h_rsp_intg__15__tl[2U] 
                                                      << 5U) 
                                                     | (0x00000018U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__15__tl[1U] 
                                                           >> 0x0000001bU)))) 
                                                 | ((6U 
                                                     & (__Vfunc_extract_d2h_rsp_intg__15__tl[1U] 
                                                        >> 0x00000018U)) 
                                                    | (1U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__15__tl[0U] 
                                                          >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__15__Vfuncout = __Vfunc_extract_d2h_rsp_intg__15__payload;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__15__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1142 = (
                                                   ((((((2U 
                                                         & (VL_REDXOR_32(
                                                                         (0x10U 
                                                                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              VL_REDXOR_32(
                                                                           (8U 
                                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & (VL_REDXOR_32(
                                                                           (4U 
                                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x22U 
                                                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & (VL_REDXOR_32(
                                                                           (0x21U 
                                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x98505586U 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)))))) 
                                                    << 8U) 
                                                   | (((((2U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0x2dcc624cU 
                                                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xc2c1323bU 
                                                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                        << 6U) 
                                                       | (((2U 
                                                            & ((~ 
                                                                VL_REDXOR_32(
                                                                             (0x31234ed1U 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x413d89aaU 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0xdeba8050U 
                                                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & (VL_REDXOR_32(
                                                                             (0x2606bd25U 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                                << 2U)) 
                                                            | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_860)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1139 = (
                                                   ((((((2U 
                                                         & (VL_REDXOR_32(
                                                                         (0x10U 
                                                                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              VL_REDXOR_32(
                                                                           (8U 
                                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & (VL_REDXOR_32(
                                                                           (4U 
                                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x22U 
                                                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & (VL_REDXOR_32(
                                                                           (0x21U 
                                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x98505586U 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)))))) 
                                                    << 8U) 
                                                   | (((((2U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0x2dcc624cU 
                                                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xc2c1323bU 
                                                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                        << 6U) 
                                                       | (((2U 
                                                            & ((~ 
                                                                VL_REDXOR_32(
                                                                             (0x31234ed1U 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x413d89aaU 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0xdeba8050U 
                                                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & (VL_REDXOR_32(
                                                                             (0x2606bd25U 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                                << 2U)) 
                                                            | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_852)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[7U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [7U][0U]) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1142));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[7U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [7U][0U]) | ((IData)((0x0003ffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                      << 0x00000030U) 
                                     | (((QData)((IData)(
                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(
                                                           vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                           >> 0x00000010U))))) 
                         << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[7U][1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[7U][2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[7U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [7U][0U]) | ((0x0000fffeU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1142)) 
                         | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[7U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [7U][0U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                           ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                           : 0U) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[7U][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [7U][1U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                           ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                           : 0U) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[7U][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [7U][1U]) | (0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1143[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[7U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [7U][2U]) | (1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1143[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[7U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [7U][2U]) | (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[8U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [8U][0U]) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1139));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[8U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [8U][0U]) | ((IData)((0x0003ffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                      << 0x00000030U) 
                                     | (((QData)((IData)(
                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(
                                                           vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                           >> 0x00000010U))))) 
                         << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[8U][1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[8U][2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[8U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [8U][0U]) | ((0x0000fffeU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1139)) 
                         | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[8U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [8U][0U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                           ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                           : 0U) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[8U][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [8U][1U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                           ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                           : 0U) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[8U][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [8U][1U]) | (0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1140[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[8U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [8U][2U]) | (1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1140[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[8U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [8U][2U]) | (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                               << 1U)));
}
