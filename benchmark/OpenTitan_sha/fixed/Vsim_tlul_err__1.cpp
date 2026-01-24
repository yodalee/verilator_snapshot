// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__opcode_allowed = ((0U == (7U & 
                                               (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 9U))) 
                                       | ((1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 9U))) 
                                          | (4U == 
                                             (7U & 
                                              (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                               >> 9U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1749 = (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                        >> 9U))) 
                                                   | (1U 
                                                      == 
                                                      (7U 
                                                       & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                          >> 9U))));
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__u_err__1(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__u_err__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__103__Vfuncout;
    __Vfunc_mubi4_test_invalid__103__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__103__val;
    __Vfunc_mubi4_test_invalid__103__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__103__val = (0x0000000fU 
                                            & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[0U] 
                                               >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__103__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__103__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__103__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__103__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__102__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__102__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__102__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__102__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 9U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_hmac.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
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

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__105__Vfuncout;
    __Vfunc_mubi4_test_invalid__105__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__105__val;
    __Vfunc_mubi4_test_invalid__105__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__104__val 
                    = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [1U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__104__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__104__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__104__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__105__val = (0x0000000fU 
                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [1U][0U] 
                                               >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__105__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__105__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__105__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__105__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
         [1U][3U])) {
        if ((0U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                          [1U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [1U][1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [1U][1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [1U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                 [1U][1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [1U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [1U][1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [1U][1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [1U][3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [1U][3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                       [1U][3U] >> 4U))) 
                         << 2U) | (((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [1U][3U] 
                                                  >> 4U))) 
                                    << 1U) | (0U == 
                                              (3U & 
                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [1U][3U] 
                                                >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_kmac.u_tlul_adapter_msgfifo.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
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

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__107__Vfuncout;
    __Vfunc_mubi4_test_invalid__107__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__107__val;
    __Vfunc_mubi4_test_invalid__107__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__106__val 
                    = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [0U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__106__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__106__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__106__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__107__val = (0x0000000fU 
                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [0U][0U] 
                                               >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__107__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__107__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__107__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__107__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
         [0U][3U])) {
        if ((0U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                          [0U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [0U][1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [0U][1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [0U][1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [0U][1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [0U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                 [0U][1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [0U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [0U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [0U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [0U][1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [0U][1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [0U][3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [0U][3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                       [0U][3U] >> 4U))) 
                         << 2U) | (((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [0U][3U] 
                                                  >> 4U))) 
                                    << 1U) | (0U == 
                                              (3U & 
                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [0U][3U] 
                                                >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_kmac.u_staterd.u_tlul_adapter.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
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

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__109__Vfuncout;
    __Vfunc_mubi4_test_invalid__109__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__109__val;
    __Vfunc_mubi4_test_invalid__109__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__108__val 
                    = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [2U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__108__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__108__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__108__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__109__val = (0x0000000fU 
                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [2U][0U] 
                                               >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__109__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__109__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__109__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__109__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
         [2U][3U])) {
        if ((0U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                          [2U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [2U][1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [2U][1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [2U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                 [2U][1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [2U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [2U][1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [2U][3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [2U][3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                       [2U][3U] >> 4U))) 
                         << 2U) | (((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][3U] 
                                                  >> 4U))) 
                                    << 1U) | (0U == 
                                              (3U & 
                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [2U][3U] 
                                                >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_kmac.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
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

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__111__Vfuncout;
    __Vfunc_mubi4_test_invalid__111__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__111__val;
    __Vfunc_mubi4_test_invalid__111__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__110__val 
                    = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [0U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__110__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__110__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__110__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__111__val = (0x0000000fU 
                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [0U][0U] 
                                               >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__111__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__111__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__111__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__111__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
         [0U][3U])) {
        if ((0U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                          [0U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [0U][1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [0U][1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [0U][1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [0U][1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [0U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                 [0U][1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [0U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [0U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [0U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [0U][1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [0U][1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [0U][3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [0U][3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                       [0U][3U] >> 4U))) 
                         << 2U) | (((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [0U][3U] 
                                                  >> 4U))) 
                                    << 1U) | (0U == 
                                              (3U & 
                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [0U][3U] 
                                                >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otbn.u_tlul_adapter_sram_imem.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
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

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__113__Vfuncout;
    __Vfunc_mubi4_test_invalid__113__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__113__val;
    __Vfunc_mubi4_test_invalid__113__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__112__val 
                    = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [1U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__112__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__112__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__112__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__113__val = (0x0000000fU 
                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [1U][0U] 
                                               >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__113__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__113__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__113__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__113__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
         [1U][3U])) {
        if ((0U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                          [1U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [1U][1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [1U][1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [1U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                 [1U][1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [1U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [1U][1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [1U][1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [1U][3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [1U][3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                       [1U][3U] >> 4U))) 
                         << 2U) | (((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [1U][3U] 
                                                  >> 4U))) 
                                    << 1U) | (0U == 
                                              (3U & 
                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [1U][3U] 
                                                >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otbn.u_tlul_adapter_sram_dmem.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
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

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__115__Vfuncout;
    __Vfunc_mubi4_test_invalid__115__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__115__val;
    __Vfunc_mubi4_test_invalid__115__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__114__val 
                    = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [2U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__114__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__114__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__114__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__115__val = (0x0000000fU 
                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [2U][0U] 
                                               >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__115__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__115__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__115__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__115__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
         [2U][3U])) {
        if ((0U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                          [2U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [2U][1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [2U][1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [2U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                 [2U][1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [2U][3U] >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [2U][1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [2U][3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [2U][3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                       [2U][3U] >> 4U))) 
                         << 2U) | (((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][3U] 
                                                  >> 4U))) 
                                    << 1U) | (0U == 
                                              (3U & 
                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [2U][3U] 
                                                >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otbn.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
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

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__117__Vfuncout;
    __Vfunc_mubi4_test_invalid__117__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__117__val;
    __Vfunc_mubi4_test_invalid__117__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__117__val = (0x0000000fU 
                                            & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                               >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__117__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__117__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__117__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__117__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__116__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__116__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__116__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__116__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 9U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_keymgr.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.tl_i[3U] 
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

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__119__Vfuncout;
    __Vfunc_mubi4_test_invalid__119__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__119__val;
    __Vfunc_mubi4_test_invalid__119__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__119__val = (0x0000000fU 
                                            & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                               >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__119__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__119__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__119__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__119__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__118__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__118__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__118__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__118__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_47.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_47.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 9U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_47.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_47.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_csrng.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.tl_i[3U] 
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

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__121__Vfuncout;
    __Vfunc_mubi4_test_invalid__121__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__121__val;
    __Vfunc_mubi4_test_invalid__121__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__121__val = (0x0000000fU 
                                            & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                               >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__121__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__121__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__121__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__121__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__120__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__120__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__120__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__120__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_46.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_46.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 9U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_46.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_46.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_entropy_src.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.tl_i[3U] 
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

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__123__Vfuncout;
    __Vfunc_mubi4_test_invalid__123__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__123__val;
    __Vfunc_mubi4_test_invalid__123__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__123__val = (0x0000000fU 
                                            & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[0U] 
                                               >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__123__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__123__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__123__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__123__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__122__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__122__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__122__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__122__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 9U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sram_ctrl_main.u_reg_regs.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__u_chk.tl_i[3U] 
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

void Vsim_tlul_err___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__125__Vfuncout;
    __Vfunc_mubi4_test_invalid__125__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__125__val;
    __Vfunc_mubi4_test_invalid__125__val = 0;
    // Body
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__124__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__124__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__124__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__124__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                     >> 9U)))));
    __Vfunc_mubi4_test_invalid__125__val = (0x0000000fU 
                                            & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                               >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__125__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__125__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__125__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__125__Vfuncout;
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sram_ctrl_main.u_tlul_adapter_sram.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
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

void Vsim_tlul_err___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__127__Vfuncout;
    __Vfunc_mubi4_test_invalid__127__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__127__val;
    __Vfunc_mubi4_test_invalid__127__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__127__val = (0x0000000fU 
                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[0U] 
                                               >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__127__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__127__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__127__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__127__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__126__val 
                    = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__126__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__126__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__126__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 9U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rom_ctrl.u_tl_adapter_rom.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U] 
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

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__129__Vfuncout;
    __Vfunc_mubi4_test_invalid__129__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__129__val;
    __Vfunc_mubi4_test_invalid__129__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__129__val = (0x0000000fU 
                                            & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[0U] 
                                               >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__129__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__129__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__129__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__129__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__128__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__128__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__128__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__128__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 9U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rom_ctrl.u_reg_regs.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.tl_i[3U] 
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

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_reg_if__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_reg_if__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__opcode_allowed = ((0U == (7U & 
                                               (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 9U))) 
                                       | ((1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 9U))) 
                                          | (4U == 
                                             (7U & 
                                              (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                               >> 9U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_318 = ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                       >> 9U))) 
                                                  | (1U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                         >> 9U))));
}

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_reg_if__DOT__u_err__1(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_reg_if__DOT__u_err__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__131__Vfuncout;
    __Vfunc_mubi4_test_invalid__131__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__131__val;
    __Vfunc_mubi4_test_invalid__131__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__131__val = (0x0000000fU 
                                            & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[0U] 
                                               >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__131__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__131__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__131__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__131__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__130__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__130__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__130__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__130__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 9U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_reg_cfg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
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

void Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_sim_sram__DOT__gen_no_sram__DOT__u_tlul_sink__DOT__u_err__0(Vsim_tlul_err* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_err___nba_comb__TOP__chip_sim_tb__DOT__u_sim_sram__DOT__gen_no_sram__DOT__u_tlul_sink__DOT__u_err__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__133__Vfuncout;
    __Vfunc_mubi4_test_invalid__133__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__133__val;
    __Vfunc_mubi4_test_invalid__133__val = 0;
    // Body
    __Vfunc_mubi4_test_invalid__133__val = (0x0000000fU 
                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[0U] 
                                               >> 0x0000000fU));
    __Vfunc_mubi4_test_invalid__133__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__133__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__133__val)))));
    vlSelfRef.__PVT__instr_type_err = __Vfunc_mubi4_test_invalid__133__Vfuncout;
    vlSelfRef.__PVT__instr_wr_err = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__132__val 
                    = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__132__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__132__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__132__Vfuncout)) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                     >> 9U)))));
    vlSelfRef.__PVT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__mask_chk = 0U;
    vlSelfRef.__PVT__fulldata_chk = 0U;
    if ((0x00001000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U])) {
        if ((0U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U] 
                          >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__mask_chk = (1U & (~ (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                          >> 0x00000018U)) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001cU)))))))));
            vlSelfRef.__PVT__fulldata_chk = (0U != 
                                             (0x0000000fU 
                                              & (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                     >> 0x00000018U)) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001cU))))));
        } else if ((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                   >> 0x0000001cU)));
            if ((0x20000000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U])) {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                     >> 0x0000001aU)));
            } else {
                vlSelfRef.__PVT__mask_chk = (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x0cU 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                        >> 0x00000018U)))));
                vlSelfRef.__PVT__fulldata_chk = (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                     >> 0x00000018U)));
            }
        } else if ((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U] 
                                 >> 4U)))) {
            vlSelfRef.__PVT__addr_sz_chk = (1U & (~ 
                                                  (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                       >> 0x0000001cU)))));
            vlSelfRef.__PVT__mask_chk = 1U;
            vlSelfRef.__PVT__fulldata_chk = (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
                                                    >> 0x00000018U)));
        } else {
            vlSelfRef.__PVT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__mask_chk = 0U;
            vlSelfRef.__PVT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Nchip_sim_tb.u_sim_sram.gen_no_sram.u_tlul_sink.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_tlul_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U] 
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
