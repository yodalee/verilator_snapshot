// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_lc_ctrl_regs_reg_top___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__0(Vsim_lc_ctrl_regs_reg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_lc_ctrl_regs_reg_top___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __VdfgRegularize_hba25b58b_1_3;
    __VdfgRegularize_hba25b58b_1_3 = 0;
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__0__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__0__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__0__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__0__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__0__payload;
    __Vfunc_extract_d2h_rsp_intg__0__payload = 0;
    // Body
    __VdfgRegularize_hba25b58b_1_3 = (((IData)(vlSelfRef.__PVT__u_reg_if__DOT__error_q) 
                                       << 1U) | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__PVT__u_reg_if__DOT__d_ack = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o)) 
                                             & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q));
    vlSelfRef.__PVT__addr_hit = (((QData)((IData)((
                                                   ((0x22U 
                                                     == 
                                                     (0x0000003fU 
                                                      & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 3U) 
                                                         | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001dU)))) 
                                                    << 2U) 
                                                   | (((0x21U 
                                                        == 
                                                        (0x0000003fU 
                                                         & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 3U) 
                                                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001dU)))) 
                                                       << 1U) 
                                                      | (0x20U 
                                                         == 
                                                         (0x0000003fU 
                                                          & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                              << 3U) 
                                                             | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x0000001dU)))))))) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    (((((((((0x1fU 
                                                                             == 
                                                                             (0x0000003fU 
                                                                              & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                            << 3U) 
                                                                           | ((0x1eU 
                                                                               == 
                                                                               (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                              << 2U)) 
                                                                          | (((0x1dU 
                                                                               == 
                                                                               (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                              << 1U) 
                                                                             | (0x1cU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))))) 
                                                                         << 0x0000000cU) 
                                                                        | (((((0x1bU 
                                                                               == 
                                                                               (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                              << 3U) 
                                                                             | ((0x1aU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                << 2U)) 
                                                                            | (((0x19U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                << 1U) 
                                                                               | (0x18U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))))) 
                                                                           << 8U)) 
                                                                       | ((((((0x17U 
                                                                               == 
                                                                               (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                              << 3U) 
                                                                             | ((0x16U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                << 2U)) 
                                                                            | (((0x15U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                << 1U) 
                                                                               | (0x14U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))))) 
                                                                           << 4U) 
                                                                          | ((((0x13U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                               << 3U) 
                                                                              | ((0x12U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                << 2U)) 
                                                                             | (((0x11U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                << 1U) 
                                                                                | (0x10U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))))))) 
                                                                      << 0x00000010U) 
                                                                     | (((((((0x0fU 
                                                                              == 
                                                                              (0x0000003fU 
                                                                               & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                             << 3U) 
                                                                            | ((0x0eU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                               << 2U)) 
                                                                           | (((0x0dU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                               << 1U) 
                                                                              | (0x0cU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))))) 
                                                                          << 0x0000000cU) 
                                                                         | (((((0x0bU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                               << 3U) 
                                                                              | ((0x0aU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                << 2U)) 
                                                                             | (((9U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                << 1U) 
                                                                                | (8U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))))) 
                                                                            << 8U)) 
                                                                        | ((((((7U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                               << 3U) 
                                                                              | ((6U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                << 2U)) 
                                                                             | (((5U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                << 1U) 
                                                                                | (4U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))))) 
                                                                            << 4U) 
                                                                           | ((((3U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                << 3U) 
                                                                               | ((2U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                << 2U)) 
                                                                              | (((1U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU))))))))))));
    vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__17__KET____DOT__dev_select)
            ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[0U] 
                          >> 0x00000017U)) : 0xffffffffU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1392[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(__VdfgRegularize_hba25b58b_1_3))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1392[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1392[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(__VdfgRegularize_hba25b58b_1_3))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1392[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1392[1U]) 
           | ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1392[2U] 
        = (1U & ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
    if ((1U & (~ VL_ONEHOT_Q(vlSelfRef.__PVT__addr_hit)))) {
        if ((0ULL != vlSelfRef.__PVT__addr_hit)) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: lc_ctrl_regs_reg_top.sv:1336: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_lc_ctrl.u_reg_regs: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/lc_ctrl_regs_reg_top.sv", 1336, "");
            }
        }
    }
    vlSelfRef.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1392[0U];
    vlSelfRef.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1392[1U];
    vlSelfRef.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (((IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q) 
            << 1U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1392[2U]);
    __Vfunc_extract_d2h_rsp_intg__0__tl[0U] = vlSelfRef.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    __Vfunc_extract_d2h_rsp_intg__0__tl[1U] = vlSelfRef.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    __Vfunc_extract_d2h_rsp_intg__0__tl[2U] = vlSelfRef.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
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
    vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__0__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1220 = (
                                                   ((((((2U 
                                                         & (VL_REDXOR_32(
                                                                         (0x10U 
                                                                          & (IData)(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              VL_REDXOR_32(
                                                                           (8U 
                                                                            & (IData)(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & (VL_REDXOR_32(
                                                                           (4U 
                                                                            & (IData)(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x22U 
                                                                              & (IData)(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & (VL_REDXOR_32(
                                                                           (0x21U 
                                                                            & (IData)(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (VL_REDXOR_8(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x98505586U 
                                                                              & vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)))))) 
                                                    << 8U) 
                                                   | (((((2U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0x2dcc624cU 
                                                                            & vlSelfRef.__PVT__u_reg_if__DOT__rdata_q))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xc2c1323bU 
                                                                            & vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)))) 
                                                        << 6U) 
                                                       | (((2U 
                                                            & ((~ 
                                                                VL_REDXOR_32(
                                                                             (0x31234ed1U 
                                                                              & vlSelfRef.__PVT__u_reg_if__DOT__rdata_q))) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x413d89aaU 
                                                                              & vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)))) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0xdeba8050U 
                                                                            & vlSelfRef.__PVT__u_reg_if__DOT__rdata_q))) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & (VL_REDXOR_32(
                                                                             (0x2606bd25U 
                                                                              & vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)) 
                                                                << 2U)) 
                                                            | (IData)(__VdfgRegularize_hba25b58b_1_3)))));
}

VL_ATTR_COLD void Vsim_lc_ctrl_regs_reg_top___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__0(Vsim_lc_ctrl_regs_reg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_lc_ctrl_regs_reg_top___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__3__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__3__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__3__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__3__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__3__payload;
    __Vfunc_extract_d2h_rsp_intg__3__payload = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hba25b58b_1_3 = (((IData)(vlSelfRef.__PVT__u_reg_if__DOT__error_q) 
                                                 << 1U) 
                                                | (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__PVT__addr_hit = (((QData)((IData)((
                                                   ((0x22U 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                         >> 2U))) 
                                                    << 2U) 
                                                   | (((0x21U 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                            >> 2U))) 
                                                       << 1U) 
                                                      | (0x20U 
                                                         == 
                                                         (0x0000003fU 
                                                          & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                             >> 2U))))))) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    (((((((((0x1fU 
                                                                             == 
                                                                             (0x0000003fU 
                                                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                            << 3U) 
                                                                           | ((0x1eU 
                                                                               == 
                                                                               (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                              << 2U)) 
                                                                          | (((0x1dU 
                                                                               == 
                                                                               (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                              << 1U) 
                                                                             | (0x1cU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))))) 
                                                                         << 0x0000000cU) 
                                                                        | (((((0x1bU 
                                                                               == 
                                                                               (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                              << 3U) 
                                                                             | ((0x1aU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                            | (((0x19U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                                << 1U) 
                                                                               | (0x18U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))))) 
                                                                           << 8U)) 
                                                                       | ((((((0x17U 
                                                                               == 
                                                                               (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                              << 3U) 
                                                                             | ((0x16U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                            | (((0x15U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                                << 1U) 
                                                                               | (0x14U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))))) 
                                                                           << 4U) 
                                                                          | ((((0x13U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                               << 3U) 
                                                                              | ((0x12U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                             | (((0x11U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                                << 1U) 
                                                                                | (0x10U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))))))) 
                                                                      << 0x00000010U) 
                                                                     | (((((((0x0fU 
                                                                              == 
                                                                              (0x0000003fU 
                                                                               & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                             << 3U) 
                                                                            | ((0x0eU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                               << 2U)) 
                                                                           | (((0x0dU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                               << 1U) 
                                                                              | (0x0cU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))))) 
                                                                          << 0x0000000cU) 
                                                                         | (((((0x0bU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                               << 3U) 
                                                                              | ((0x0aU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                             | (((9U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                                << 1U) 
                                                                                | (8U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))))) 
                                                                            << 8U)) 
                                                                        | ((((((7U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                               << 3U) 
                                                                              | ((6U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                             | (((5U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                                << 1U) 
                                                                                | (4U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))))) 
                                                                            << 4U) 
                                                                           | ((((3U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                                << 3U) 
                                                                               | ((2U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                              | (((1U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                                >> 2U)))))))))));
    vlSelfRef.__PVT__u_reg_if__DOT__a_ack = ((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q)) 
                                             & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__req_i));
    vlSelfRef.__PVT__u_reg_if__DOT__instr_error = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__4__val 
                = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[0U] 
                                  >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__4__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__4__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__4__Vfuncout));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1393[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(vlSelfRef.__VdfgRegularize_hba25b58b_1_3))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1393[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1393[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(vlSelfRef.__VdfgRegularize_hba25b58b_1_3))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1393[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1393[1U]) 
           | ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1393[2U] 
        = (1U & ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
    if ((1U & (~ VL_ONEHOT_Q(vlSelfRef.__PVT__addr_hit)))) {
        if ((0ULL != vlSelfRef.__PVT__addr_hit)) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: lc_ctrl_regs_reg_top.sv:1336: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_lc_ctrl.u_reg_tap_dmi: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/lc_ctrl_regs_reg_top.sv", 1336, "");
            }
        }
    }
    vlSelfRef.__PVT__u_reg_if__DOT__rd_req = ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__a_ack) 
                                              & (4U 
                                                 == 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U]))
                                                   ? 0U
                                                   : 4U)));
    vlSelfRef.__PVT__u_reg_if__DOT__wr_req = ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__a_ack) 
                                              & ((0U 
                                                  == 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U]))
                                                    ? 0U
                                                    : 4U)) 
                                                 | (1U 
                                                    == 
                                                    ((2U 
                                                      == 
                                                      (3U 
                                                       & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U]))
                                                      ? 0U
                                                      : 4U))));
    vlSelfRef.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1393[0U];
    vlSelfRef.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1393[1U];
    vlSelfRef.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (((IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q) 
            << 1U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1393[2U]);
    __Vfunc_extract_d2h_rsp_intg__3__tl[0U] = vlSelfRef.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    __Vfunc_extract_d2h_rsp_intg__3__tl[1U] = vlSelfRef.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    __Vfunc_extract_d2h_rsp_intg__3__tl[2U] = vlSelfRef.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    __Vfunc_extract_d2h_rsp_intg__3__payload = ((0x00000038U 
                                                 & ((__Vfunc_extract_d2h_rsp_intg__3__tl[2U] 
                                                     << 5U) 
                                                    | (0x00000018U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__3__tl[1U] 
                                                          >> 0x0000001bU)))) 
                                                | ((6U 
                                                    & (__Vfunc_extract_d2h_rsp_intg__3__tl[1U] 
                                                       >> 0x00000018U)) 
                                                   | (1U 
                                                      & (__Vfunc_extract_d2h_rsp_intg__3__tl[0U] 
                                                         >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__3__Vfuncout = __Vfunc_extract_d2h_rsp_intg__3__payload;
    vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__3__Vfuncout;
    vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__u_rsp_gen__DOT__data_o 
        = (((QData)((IData)(((((2U & (VL_REDXOR_32(
                                                   (0x10U 
                                                    & (IData)(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                      << 1U)) | (1U 
                                                 & (~ 
                                                    VL_REDXOR_32(
                                                                 (8U 
                                                                  & (IData)(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                              << 2U) | ((2U & (VL_REDXOR_32(
                                                            (4U 
                                                             & (IData)(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                               << 1U)) 
                                        | (1U & (~ 
                                                 VL_REDXOR_32(
                                                              (0x22U 
                                                               & (IData)(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))))))))) 
            << 0x0000003cU) | (((QData)((IData)((1U 
                                                 & VL_REDXOR_32(
                                                                (0x21U 
                                                                 & (IData)(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                << 0x0000003bU) | (
                                                   ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        VL_REDXOR_32(
                                                                                (0x1fU 
                                                                                & (IData)(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))))))) 
                                                    << 0x0000003aU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & VL_REDXOR_8(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))) 
                                                       << 0x00000039U) 
                                                      | (QData)((IData)(vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1221 = (
                                                   (((0x000000feU 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__u_rsp_gen__DOT__data_o 
                                                                  >> 0x00000039U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_32(
                                                                       (0x98505586U 
                                                                        & vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)))) 
                                                    << 8U) 
                                                   | (((((2U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0x2dcc624cU 
                                                                            & vlSelfRef.__PVT__u_reg_if__DOT__rdata_q))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xc2c1323bU 
                                                                            & vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)))) 
                                                        << 6U) 
                                                       | (((2U 
                                                            & ((~ 
                                                                VL_REDXOR_32(
                                                                             (0x31234ed1U 
                                                                              & vlSelfRef.__PVT__u_reg_if__DOT__rdata_q))) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x413d89aaU 
                                                                              & vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)))) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0xdeba8050U 
                                                                            & vlSelfRef.__PVT__u_reg_if__DOT__rdata_q))) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & (VL_REDXOR_32(
                                                                             (0x2606bd25U 
                                                                              & vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)) 
                                                                << 2U)) 
                                                            | (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_1_3)))));
}

VL_ATTR_COLD void Vsim_lc_ctrl_regs_reg_top___ctor_var_reset(Vsim_lc_ctrl_regs_reg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_lc_ctrl_regs_reg_top___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->tl_i, __VscopeHash, 717864233454436411ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->tl_o, __VscopeHash, 14475261017617439938ull);
    VL_SCOPED_RAND_RESET_W(217, vlSelf->reg2hw, __VscopeHash, 14106023928444074128ull);
    VL_SCOPED_RAND_RESET_W(888, vlSelf->hw2reg, __VscopeHash, 15323136289072650499ull);
    vlSelf->intg_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8789439780594604087ull);
    vlSelf->__PVT__addrmiss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9707087644304854113ull);
    vlSelf->__PVT__wr_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7057086562865516197ull);
    vlSelf->__PVT__reg_rdata_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5943804542038041692ull);
    vlSelf->__PVT__err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17273344676821249686ull);
    vlSelf->__PVT__addr_hit = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 9756947971808524215ull);
    vlSelf->__VdfgRegularize_hba25b58b_0_40 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5860684079263792993ull);
    vlSelf->__PVT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 9763081941515845664ull);
    vlSelf->__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15743962690141461334ull);
    vlSelf->__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17745577749435674890ull);
    vlSelf->__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1155244130203076772ull);
    vlSelf->__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17316498955703173893ull);
    vlSelf->__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12206642526706676002ull);
    vlSelf->__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1476532846491240438ull);
    vlSelf->__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5938739533499149511ull);
    vlSelf->__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16049547351707016993ull);
    vlSelf->__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1832549661355366881ull);
    vlSelf->__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13412430452638843205ull);
    vlSelf->__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18321401757461834718ull);
    vlSelf->__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__u_rsp_gen__DOT__data_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17470125349207440383ull);
    vlSelf->__PVT__u_reg_if__DOT__re_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 388006126589376007ull);
    vlSelf->__PVT__u_reg_if__DOT__we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16835999325112086797ull);
    vlSelf->__PVT__u_reg_if__DOT__error_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17313151393063756937ull);
    vlSelf->__PVT__u_reg_if__DOT__outstanding_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10595714850747701368ull);
    vlSelf->__PVT__u_reg_if__DOT__a_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15454791589910555637ull);
    vlSelf->__PVT__u_reg_if__DOT__d_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1359761529048763453ull);
    vlSelf->__PVT__u_reg_if__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 443856955566117071ull);
    vlSelf->__PVT__u_reg_if__DOT__error_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 227431046248886421ull);
    vlSelf->__PVT__u_reg_if__DOT__err_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17934035731578694777ull);
    vlSelf->__PVT__u_reg_if__DOT__instr_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18218476661557837278ull);
    vlSelf->__PVT__u_reg_if__DOT__reqid_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12379020290905367281ull);
    vlSelf->__PVT__u_reg_if__DOT__reqsz_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 860490254374760064ull);
    vlSelf->__PVT__u_reg_if__DOT__rspop_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3359329684719607207ull);
    vlSelf->__PVT__u_reg_if__DOT__rd_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8315689688085816108ull);
    vlSelf->__PVT__u_reg_if__DOT__wr_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12949227394067542366ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i, __VscopeHash, 16680266541071765927ull);
    vlSelf->__PVT__u_alert_test_fatal_bus_integ_error__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2815465718873187258ull);
    vlSelf->__PVT__u_claim_transition_if_regwen__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6170166317162348272ull);
    vlSelf->__PVT__u_claim_transition_if_regwen__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4576428542176997806ull);
    vlSelf->__PVT__u_claim_transition_if_regwen__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3305920572821291659ull);
    vlSelf->__PVT__u_claim_transition_if__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928208477086235531ull);
    vlSelf->__PVT__u_transition_cmd__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11313882205534752486ull);
    vlSelf->__PVT__u_transition_ctrl_ext_clock_en__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9932776214967453410ull);
    vlSelf->__PVT__u_transition_token_0__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13407222410711102521ull);
    vlSelf->__PVT__u_transition_token_1__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10429176830531599350ull);
    vlSelf->__PVT__u_transition_token_2__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2975590810996636991ull);
    vlSelf->__PVT__u_transition_token_3__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6479629197021248420ull);
    vlSelf->__PVT__u_transition_target__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9181198187499822157ull);
    vlSelf->__PVT__u_otp_vendor_test_ctrl__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11897094299869588422ull);
    vlSelf->__PVT__u_otp_vendor_test_ctrl__DOT__wd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11970527487969834255ull);
    vlSelf->__VdfgRegularize_hba25b58b_1_3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15210664763335635038ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__1__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1628151262156786870ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__1__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6497513165002300816ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__4__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 703434038796944005ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__4__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10443713945620973568ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1220 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6473691109254158491ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1221 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12597434419912188049ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1392, __VscopeHash, 15012277504400608550ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1393, __VscopeHash, 8421986032734141703ull);
}
