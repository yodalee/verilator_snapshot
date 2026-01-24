// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__1__Vfuncout;
    __Vfunc_mubi4_test_invalid__1__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__1__val;
    __Vfunc_mubi4_test_invalid__1__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__1__val = (0x0000000fU 
                                          & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                             >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__1__Vfuncout = (1U & 
                                               (~ (
                                                   (6U 
                                                    == (IData)(__Vfunc_mubi4_test_invalid__1__val)) 
                                                   | (9U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__1__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__1__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__0__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__0__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__0__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__0__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.u_ast.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__3__Vfuncout;
    __Vfunc_mubi4_test_invalid__3__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__3__val;
    __Vfunc_mubi4_test_invalid__3__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__3__val = (0x0000000fU 
                                          & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[0U] 
                                             >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__3__Vfuncout = (1U & 
                                               (~ (
                                                   (6U 
                                                    == (IData)(__Vfunc_mubi4_test_invalid__3__val)) 
                                                   | (9U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__3__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__3__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__2__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__2__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__2__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__2__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart0.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__5__Vfuncout;
    __Vfunc_mubi4_test_invalid__5__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__5__val;
    __Vfunc_mubi4_test_invalid__5__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__5__val = (0x0000000fU 
                                          & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[0U] 
                                             >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__5__Vfuncout = (1U & 
                                               (~ (
                                                   (6U 
                                                    == (IData)(__Vfunc_mubi4_test_invalid__5__val)) 
                                                   | (9U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__5__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__5__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__4__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__4__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__4__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__4__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart1.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__7__Vfuncout;
    __Vfunc_mubi4_test_invalid__7__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__7__val;
    __Vfunc_mubi4_test_invalid__7__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__7__val = (0x0000000fU 
                                          & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[0U] 
                                             >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__7__Vfuncout = (1U & 
                                               (~ (
                                                   (6U 
                                                    == (IData)(__Vfunc_mubi4_test_invalid__7__val)) 
                                                   | (9U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__7__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__7__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__6__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__6__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__6__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__6__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart2.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__9__Vfuncout;
    __Vfunc_mubi4_test_invalid__9__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__9__val;
    __Vfunc_mubi4_test_invalid__9__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__9__val = (0x0000000fU 
                                          & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[0U] 
                                             >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__9__Vfuncout = (1U & 
                                               (~ (
                                                   (6U 
                                                    == (IData)(__Vfunc_mubi4_test_invalid__9__val)) 
                                                   | (9U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__9__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__9__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__8__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__8__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__8__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__8__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart3.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__11__Vfuncout;
    __Vfunc_mubi4_test_invalid__11__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__11__val;
    __Vfunc_mubi4_test_invalid__11__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__11__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__11__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__11__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__11__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__11__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__10__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__10__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__10__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__10__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_i2c0.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__13__Vfuncout;
    __Vfunc_mubi4_test_invalid__13__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__13__val;
    __Vfunc_mubi4_test_invalid__13__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__13__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__13__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__13__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__13__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__13__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__12__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__12__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__12__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__12__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_i2c1.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__15__Vfuncout;
    __Vfunc_mubi4_test_invalid__15__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__15__val;
    __Vfunc_mubi4_test_invalid__15__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__15__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__15__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__15__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__15__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__15__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__14__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__14__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__14__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__14__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_i2c2.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__17__Vfuncout;
    __Vfunc_mubi4_test_invalid__17__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__17__val;
    __Vfunc_mubi4_test_invalid__17__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__16__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [2U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__16__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__16__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__16__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__17__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                              [2U][0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__17__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__17__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__17__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__17__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
         [2U][3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                          [2U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [2U][1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [2U][1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [2U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                 [2U][1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [2U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [2U][1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [2U][3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [2U][3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                       [2U][3U] >> 4U))) 
                         << 2U) | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][3U] 
                                                  >> 4U))) 
                                    << 1U) | (0U == 
                                              (3U & 
                                               (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [2U][3U] 
                                                >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host0.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                           [2U][3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__19__Vfuncout;
    __Vfunc_mubi4_test_invalid__19__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__19__val;
    __Vfunc_mubi4_test_invalid__19__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__18__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [0U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__18__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__18__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__18__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__19__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                              [0U][0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__19__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__19__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__19__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__19__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
         [0U][3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                          [0U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [0U][1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [0U][1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [0U][1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [0U][1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [0U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                 [0U][1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [0U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [0U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [0U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [0U][1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [0U][1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [0U][3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [0U][3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                       [0U][3U] >> 4U))) 
                         << 2U) | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [0U][3U] 
                                                  >> 4U))) 
                                    << 1U) | (0U == 
                                              (3U & 
                                               (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [0U][3U] 
                                                >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host0.u_window.u_adapter_rx.tlul_adapter_reg.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                           [0U][3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__21__Vfuncout;
    __Vfunc_mubi4_test_invalid__21__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__21__val;
    __Vfunc_mubi4_test_invalid__21__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__20__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [1U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__20__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__20__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__20__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__21__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                              [1U][0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__21__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__21__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__21__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__21__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
         [1U][3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                          [1U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [1U][1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [1U][1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [1U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                 [1U][1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [1U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [1U][1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [1U][1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [1U][3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [1U][3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                       [1U][3U] >> 4U))) 
                         << 2U) | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [1U][3U] 
                                                  >> 4U))) 
                                    << 1U) | (0U == 
                                              (3U & 
                                               (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [1U][3U] 
                                                >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host0.u_window.u_adapter_tx.tlul_adapter_sram.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                           [1U][3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__23__Vfuncout;
    __Vfunc_mubi4_test_invalid__23__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__23__val;
    __Vfunc_mubi4_test_invalid__23__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__22__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [2U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__22__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__22__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__22__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__23__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                              [2U][0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__23__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__23__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__23__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__23__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
         [2U][3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                          [2U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [2U][1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [2U][1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [2U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                 [2U][1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [2U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [2U][1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [2U][3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [2U][3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                       [2U][3U] >> 4U))) 
                         << 2U) | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][3U] 
                                                  >> 4U))) 
                                    << 1U) | (0U == 
                                              (3U & 
                                               (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [2U][3U] 
                                                >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host1.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                           [2U][3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__25__Vfuncout;
    __Vfunc_mubi4_test_invalid__25__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__25__val;
    __Vfunc_mubi4_test_invalid__25__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__24__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [0U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__24__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__24__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__24__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__25__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                              [0U][0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__25__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__25__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__25__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__25__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
         [0U][3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                          [0U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [0U][1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [0U][1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [0U][1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [0U][1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [0U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                 [0U][1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [0U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [0U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [0U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [0U][1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [0U][1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [0U][3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [0U][3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                       [0U][3U] >> 4U))) 
                         << 2U) | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [0U][3U] 
                                                  >> 4U))) 
                                    << 1U) | (0U == 
                                              (3U & 
                                               (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [0U][3U] 
                                                >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host1.u_window.u_adapter_rx.tlul_adapter_reg.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                           [0U][3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__27__Vfuncout;
    __Vfunc_mubi4_test_invalid__27__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__27__val;
    __Vfunc_mubi4_test_invalid__27__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__26__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [1U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__26__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__26__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__26__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__27__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                              [1U][0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__27__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__27__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__27__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__27__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
         [1U][3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                          [1U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [1U][1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [1U][1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [1U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                 [1U][1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [1U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [1U][1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [1U][1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [1U][3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [1U][3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                       [1U][3U] >> 4U))) 
                         << 2U) | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [1U][3U] 
                                                  >> 4U))) 
                                    << 1U) | (0U == 
                                              (3U & 
                                               (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [1U][3U] 
                                                >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host1.u_window.u_adapter_tx.tlul_adapter_sram.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                           [1U][3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__29__Vfuncout;
    __Vfunc_mubi4_test_invalid__29__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__29__val;
    __Vfunc_mubi4_test_invalid__29__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__29__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__29__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__29__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__29__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__29__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__28__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__28__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__28__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__28__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 9U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn0.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__31__Vfuncout;
    __Vfunc_mubi4_test_invalid__31__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__31__val;
    __Vfunc_mubi4_test_invalid__31__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__31__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__31__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__31__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__31__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__31__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__30__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__30__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__30__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__30__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 9U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn1.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__33__Vfuncout;
    __Vfunc_mubi4_test_invalid__33__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__33__val;
    __Vfunc_mubi4_test_invalid__33__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__33__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__33__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__33__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__33__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__33__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__32__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__32__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__32__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__32__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_gpio.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_tlul2sram_egress__DOT__tlul_adapter_sram__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_tlul2sram_egress__DOT__tlul_adapter_sram__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__35__Vfuncout;
    __Vfunc_mubi4_test_invalid__35__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__35__val;
    __Vfunc_mubi4_test_invalid__35__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__34__val 
                    = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [0U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__34__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__34__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__34__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__35__val = (0x0000000fU 
                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                              [0U][0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__35__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__35__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__35__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__35__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
         [0U][3U])) {
        if ((0U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                          [0U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [0U][1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [0U][1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [0U][1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [0U][1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [0U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                 [0U][1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [0U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [0U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [0U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [0U][1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [0U][1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [0U][3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [0U][3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                       [0U][3U] >> 4U))) 
                         << 2U) | (((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [0U][3U] 
                                                  >> 4U))) 
                                    << 1U) | (0U == 
                                              (3U & 
                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [0U][3U] 
                                                >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.u_tlul2sram_egress.tlul_adapter_sram.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                           [0U][3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_tlul2sram_ingress__DOT__tlul_adapter_sram__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_tlul2sram_ingress__DOT__tlul_adapter_sram__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__37__Vfuncout;
    __Vfunc_mubi4_test_invalid__37__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__37__val;
    __Vfunc_mubi4_test_invalid__37__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__36__val 
                    = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [1U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__36__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__36__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__36__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__37__val = (0x0000000fU 
                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                              [1U][0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__37__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__37__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__37__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__37__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
         [1U][3U])) {
        if ((0U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                          [1U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [1U][1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [1U][1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [1U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                 [1U][1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [1U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [1U][1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [1U][1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [1U][3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [1U][3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                       [1U][3U] >> 4U))) 
                         << 2U) | (((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [1U][3U] 
                                                  >> 4U))) 
                                    << 1U) | (0U == 
                                              (3U & 
                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [1U][3U] 
                                                >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.u_tlul2sram_ingress.tlul_adapter_sram.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                           [1U][3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__39__Vfuncout;
    __Vfunc_mubi4_test_invalid__39__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__39__val;
    __Vfunc_mubi4_test_invalid__39__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__38__val 
                    = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [2U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__38__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__38__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__38__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__39__val = (0x0000000fU 
                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                              [2U][0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__39__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__39__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__39__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__39__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
         [2U][3U])) {
        if ((0U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                          [2U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [2U][1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [2U][1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [2U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                 [2U][1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [2U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [2U][1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [2U][3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [2U][3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                       [2U][3U] >> 4U))) 
                         << 2U) | (((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][3U] 
                                                  >> 4U))) 
                                    << 1U) | (0U == 
                                              (3U & 
                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [2U][3U] 
                                                >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                           [2U][3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__41__Vfuncout;
    __Vfunc_mubi4_test_invalid__41__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__41__val;
    __Vfunc_mubi4_test_invalid__41__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__41__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__41__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__41__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__41__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__41__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__40__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__40__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__40__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__40__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_pattgen.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__43__Vfuncout;
    __Vfunc_mubi4_test_invalid__43__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__43__val;
    __Vfunc_mubi4_test_invalid__43__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__43__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__43__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__43__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__43__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__43__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__42__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__42__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__42__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__42__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_timer.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__45__Vfuncout;
    __Vfunc_mubi4_test_invalid__45__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__45__val;
    __Vfunc_mubi4_test_invalid__45__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__45__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__45__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__45__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__45__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__45__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__44__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__44__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__44__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__44__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otp_ctrl.u_reg_core.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__47__Vfuncout;
    __Vfunc_mubi4_test_invalid__47__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__47__val;
    __Vfunc_mubi4_test_invalid__47__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__47__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__47__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__47__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__47__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__47__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__46__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__46__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__46__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__46__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otp_ctrl.u_tlul_adapter_sram.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__49__Vfuncout;
    __Vfunc_mubi4_test_invalid__49__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__49__val;
    __Vfunc_mubi4_test_invalid__49__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__48__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__48__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__48__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__48__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__49__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__49__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__49__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__49__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__49__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otp_ctrl.u_otp.gen_generic.u_impl_generic.u_reg_top.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__51__Vfuncout;
    __Vfunc_mubi4_test_invalid__51__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__51__val;
    __Vfunc_mubi4_test_invalid__51__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__51__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__51__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__51__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__51__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__51__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__50__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__50__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__50__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__50__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_lc_ctrl.u_reg_regs.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__53__Vfuncout;
    __Vfunc_mubi4_test_invalid__53__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__53__val;
    __Vfunc_mubi4_test_invalid__53__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__53__val = (0x0000000fU 
                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__53__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__53__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__53__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__53__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__52__val 
                    = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__52__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__52__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__52__Vfuncout)) 
                                     & ((0U == ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U]))
                                                 ? 0U
                                                 : 4U)) 
                                        | (1U == ((2U 
                                                   == 
                                                   (3U 
                                                    & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U]))
                                                   ? 0U
                                                   : 4U))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[3U])) {
        if ((0U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0eU 
                                                   & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[1U] 
                                                      >> 0x00000018U)))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (1U & 
                                              (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[1U] 
                                               >> 0x00000018U)));
        } else if ((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_lc_ctrl.u_reg_tap_dmi.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__55__Vfuncout;
    __Vfunc_mubi4_test_invalid__55__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__55__val;
    __Vfunc_mubi4_test_invalid__55__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__55__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__55__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__55__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__55__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__55__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__54__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__54__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__54__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__54__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.u_reg_wrap.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__57__Vfuncout;
    __Vfunc_mubi4_test_invalid__57__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__57__val;
    __Vfunc_mubi4_test_invalid__57__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__57__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__57__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__57__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__57__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__57__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__56__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__56__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__56__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__56__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_usbdev.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__opcode_allowed = ((0U == (7U & 
                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 8U))) 
                                       | ((1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U))) 
                                          | (4U == 
                                             (7U & 
                                              (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[3U] 
                                               >> 8U)))));
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_err__1(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_err__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__59__Vfuncout;
    __Vfunc_mubi4_test_invalid__59__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__59__val;
    __Vfunc_mubi4_test_invalid__59__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__59__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__59__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__59__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__59__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__59__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__58__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__58__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__58__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__58__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_usbdev.gen_no_stubbed_memory.u_tlul2sram.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__61__Vfuncout;
    __Vfunc_mubi4_test_invalid__61__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__61__val;
    __Vfunc_mubi4_test_invalid__61__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__61__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__61__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__61__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__61__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__61__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__60__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__60__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__60__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__60__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_pwrmgr_aon.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__63__Vfuncout;
    __Vfunc_mubi4_test_invalid__63__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__63__val;
    __Vfunc_mubi4_test_invalid__63__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__63__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__63__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__63__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__63__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__63__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__62__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__62__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__62__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__62__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__65__Vfuncout;
    __Vfunc_mubi4_test_invalid__65__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__65__val;
    __Vfunc_mubi4_test_invalid__65__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__65__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__65__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__65__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__65__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__65__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__64__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__64__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__64__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__64__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__67__Vfuncout;
    __Vfunc_mubi4_test_invalid__67__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__67__val;
    __Vfunc_mubi4_test_invalid__67__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__67__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__67__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__67__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__67__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__67__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__66__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__66__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__66__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__66__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sysrst_ctrl_aon.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__opcode_allowed = ((0U == (7U & 
                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 8U))) 
                                       | ((1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U))) 
                                          | (4U == 
                                             (7U & 
                                              (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                               >> 8U)))));
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__1(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__69__Vfuncout;
    __Vfunc_mubi4_test_invalid__69__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__69__val;
    __Vfunc_mubi4_test_invalid__69__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__69__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__69__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__69__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__69__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__69__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__68__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__68__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__68__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__68__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_adc_ctrl_aon.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__71__Vfuncout;
    __Vfunc_mubi4_test_invalid__71__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__71__val;
    __Vfunc_mubi4_test_invalid__71__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__71__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__71__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__71__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__71__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__71__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__70__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__70__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__70__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__70__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_pwm_aon.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__73__Vfuncout;
    __Vfunc_mubi4_test_invalid__73__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__73__val;
    __Vfunc_mubi4_test_invalid__73__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__73__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__73__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__73__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__73__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__73__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__72__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__72__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__72__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__72__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_pinmux_aon.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__75__Vfuncout;
    __Vfunc_mubi4_test_invalid__75__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__75__val;
    __Vfunc_mubi4_test_invalid__75__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__75__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__75__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__75__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__75__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__75__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__74__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__74__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__74__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__74__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_aon_timer_aon.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__77__Vfuncout;
    __Vfunc_mubi4_test_invalid__77__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__77__val;
    __Vfunc_mubi4_test_invalid__77__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__77__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__77__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__77__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__77__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__77__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__76__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__76__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__76__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__76__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sensor_ctrl_aon.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__79__Vfuncout;
    __Vfunc_mubi4_test_invalid__79__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__79__val;
    __Vfunc_mubi4_test_invalid__79__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__79__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__79__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__79__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__79__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__79__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__78__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__78__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__78__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__78__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 8U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001bU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sram_ctrl_ret_aon.u_reg_regs.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__81__Vfuncout;
    __Vfunc_mubi4_test_invalid__81__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__81__val;
    __Vfunc_mubi4_test_invalid__81__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__80__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__80__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__80__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__80__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__81__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__81__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__81__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__81__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__81__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sram_ctrl_ret_aon.u_tlul_adapter_sram.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__83__Vfuncout;
    __Vfunc_mubi4_test_invalid__83__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__83__val;
    __Vfunc_mubi4_test_invalid__83__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__82__val 
                    = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                      [2U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__82__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__82__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__82__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__83__val = (0x0000000fU 
                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                              [2U][0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__83__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__83__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__83__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__83__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
         [2U][3U])) {
        if ((0U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                          [2U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                          [2U][1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                              [2U][1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                 [2U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                 [2U][1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                 [2U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                    [2U][1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                 [2U][3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                    [2U][3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                       [2U][3U] >> 4U))) 
                         << 2U) | (((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][3U] 
                                                  >> 4U))) 
                                    << 1U) | (0U == 
                                              (3U & 
                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                [2U][3U] 
                                                >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_reg_core.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                           [2U][3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__85__Vfuncout;
    __Vfunc_mubi4_test_invalid__85__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__85__val;
    __Vfunc_mubi4_test_invalid__85__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__84__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__84__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__84__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__84__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__85__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__85__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__85__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__85__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__85__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_to_prog_fifo.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_rd_fifo__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_rd_fifo__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__87__Vfuncout;
    __Vfunc_mubi4_test_invalid__87__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__87__val;
    __Vfunc_mubi4_test_invalid__87__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__86__val 
                    = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                      [1U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__86__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__86__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__86__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__87__val = (0x0000000fU 
                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                              [1U][0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__87__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__87__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__87__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__87__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
         [1U][3U])) {
        if ((0U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                          [1U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                          [1U][1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                              [1U][1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                 [1U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                 [1U][1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                 [1U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                       [1U][1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                    [1U][1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                 [1U][3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                    [1U][3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                       [1U][3U] >> 4U))) 
                         << 2U) | (((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                  [1U][3U] 
                                                  >> 4U))) 
                                    << 1U) | (0U == 
                                              (3U & 
                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                [1U][3U] 
                                                >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_to_rd_fifo.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                           [1U][3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__89__Vfuncout;
    __Vfunc_mubi4_test_invalid__89__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__89__val;
    __Vfunc_mubi4_test_invalid__89__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__88__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__88__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__88__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__88__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__89__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__89__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__89__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__89__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__89__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_tl_adapter_eflash.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__91__Vfuncout;
    __Vfunc_mubi4_test_invalid__91__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__91__val;
    __Vfunc_mubi4_test_invalid__91__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__91__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__91__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__91__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__91__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__91__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__90__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__90__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__90__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__90__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_44.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_44.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 9U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_44.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_44.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_eflash.u_flash.gen_generic.u_impl_generic.u_reg_top.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__93__Vfuncout;
    __Vfunc_mubi4_test_invalid__93__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__93__val;
    __Vfunc_mubi4_test_invalid__93__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__93__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__93__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__93__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__93__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__93__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__92__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__92__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__92__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__92__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 9U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_dm.u_reg_regs.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__95__Vfuncout;
    __Vfunc_mubi4_test_invalid__95__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__95__val;
    __Vfunc_mubi4_test_invalid__95__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__94__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__94__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__94__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__94__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__95__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__95__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__95__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__95__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__95__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_dm.i_tlul_adapter_reg.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__97__Vfuncout;
    __Vfunc_mubi4_test_invalid__97__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__97__val;
    __Vfunc_mubi4_test_invalid__97__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__97__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__97__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__97__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__97__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__97__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__96__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__96__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__96__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__96__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_51.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_51.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 9U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_51.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_51.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_plic.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__99__Vfuncout;
    __Vfunc_mubi4_test_invalid__99__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__99__val;
    __Vfunc_mubi4_test_invalid__99__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__99__val = (0x0000000fU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                              >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__99__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__99__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__99__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__99__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__98__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__98__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__98__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__98__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 9U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_aes.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__101__Vfuncout;
    __Vfunc_mubi4_test_invalid__101__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__101__val;
    __Vfunc_mubi4_test_invalid__101__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__101__val = (0x0000000fU 
                                            & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[0U] 
                                               >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__101__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__101__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__101__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__101__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__100__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__100__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__100__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__100__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 9U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_hmac.u_tlul_adapter.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U] 
                                           >> 4U)));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__mask_chk = 0U;
        vlSelfRef.__PVT__fulldata_chk = 0U;
    }
}
