// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_sram_ctrl_regs_reg_top__pi22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__0(Vsim_sram_ctrl_regs_reg_top__pi22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_sram_ctrl_regs_reg_top__pi22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __VdfgRegularize_hd3d4c31d_1_1;
    __VdfgRegularize_hd3d4c31d_1_1 = 0;
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__0__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__0__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__0__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__0__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__0__payload;
    __Vfunc_extract_d2h_rsp_intg__0__payload = 0;
    // Body
    __VdfgRegularize_hd3d4c31d_1_1 = (((IData)(vlSelfRef.__PVT__u_reg_if__DOT__error_q) 
                                       << 1U) | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__PVT__u_reg_if__DOT__d_ack = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o)) 
                                             & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_258 = ((5U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_269 = ((0U 
                                                   == 
                                                   (0x0000003fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_270 = ((2U 
                                                   == 
                                                   (0x0000003fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_271 = ((3U 
                                                   == 
                                                   (0x0000003fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_272 = ((4U 
                                                   == 
                                                   (0x0000003fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_273 = ((0x0fU 
                                                   == 
                                                   (0x0000003fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__PVT__addr_hit = 0U;
    vlSelfRef.__PVT__addr_hit = ((0x01f8U & (IData)(vlSelfRef.__PVT__addr_hit)) 
                                 | (((8U == (0x0000003cU 
                                             & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                 << 5U) 
                                                | (0x0000001cU 
                                                   & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      >> 0x0000001bU))))) 
                                     << 2U) | (((4U 
                                                 == 
                                                 (0x0000003cU 
                                                  & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                      << 5U) 
                                                     | (0x0000001cU 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001bU))))) 
                                                << 1U) 
                                               | (0U 
                                                  == 
                                                  (0x0000003cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))))));
    vlSelfRef.__PVT__addr_hit = ((0x01c7U & (IData)(vlSelfRef.__PVT__addr_hit)) 
                                 | (((0x14U == (0x0000003cU 
                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                    << 5U) 
                                                   | (0x0000001cU 
                                                      & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                         >> 0x0000001bU))))) 
                                     << 5U) | (((0x10U 
                                                 == 
                                                 (0x0000003cU 
                                                  & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                      << 5U) 
                                                     | (0x0000001cU 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001bU))))) 
                                                << 4U) 
                                               | ((0x0cU 
                                                   == 
                                                   (0x0000003cU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 5U) 
                                                       | (0x0000001cU 
                                                          & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001bU))))) 
                                                  << 3U))));
    vlSelfRef.__PVT__addr_hit = ((0x003fU & (IData)(vlSelfRef.__PVT__addr_hit)) 
                                 | (((0x20U == (0x0000003cU 
                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                    << 5U) 
                                                   | (0x0000001cU 
                                                      & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                         >> 0x0000001bU))))) 
                                     << 8U) | (((0x1cU 
                                                 == 
                                                 (0x0000003cU 
                                                  & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                      << 5U) 
                                                     | (0x0000001cU 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001bU))))) 
                                                << 7U) 
                                               | ((0x18U 
                                                   == 
                                                   (0x0000003cU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 5U) 
                                                       | (0x0000001cU 
                                                          & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001bU))))) 
                                                  << 6U))));
    vlSelfRef.__PVT__racl_addr_hit_read = vlSelfRef.__PVT__addr_hit;
    vlSelfRef.__PVT__racl_addr_hit_write = vlSelfRef.__PVT__addr_hit;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_257 = ((0U 
                                                   != 
                                                   (1U 
                                                    & (~ 
                                                       ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                         << 9U) 
                                                        | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x00000017U))))) 
                                                  & ((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                           << 3U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001dU)))) 
                                                     | (1U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 3U) 
                                                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001dU))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_251 = ((0U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_252 = ((1U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_265 = ((0x0aU 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_266 = ((0x0cU 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_267 = ((0x0eU 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_268 = ((0x10U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_264 = ((6U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_259 = ((7U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 = ((9U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260 = ((8U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_253 = ((2U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_254 = ((3U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_255 = ((4U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001dU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U))))));
    vlSelfRef.__PVT__u_reg_if__DOT__wdata_o = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__22__KET____DOT__dev_select)
                                                ? (
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[0U] 
                                                      >> 0x00000017U))
                                                : 0xffffffffU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1394[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(__VdfgRegularize_hd3d4c31d_1_1))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1394[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1394[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(__VdfgRegularize_hd3d4c31d_1_1))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1394[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1394[1U]) 
           | ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1394[2U] 
        = (1U & ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
    if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.__PVT__racl_addr_hit_read))))) {
        if ((0U != (IData)(vlSelfRef.__PVT__racl_addr_hit_read))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: sram_ctrl_regs_reg_top.sv:778: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sram_ctrl_ret_aon.u_reg_regs: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/sram_ctrl_regs_reg_top.sv", 778, "");
            }
        }
    }
    vlSelfRef.__PVT__reg_rdata_next = 0U;
    vlSelfRef.__PVT__reg_rdata_next = ((IData)((0U 
                                                != 
                                                (0x00ffU 
                                                 & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))))
                                        ? ((1U & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                            ? (0xfffffffeU 
                                               & vlSelfRef.__PVT__reg_rdata_next)
                                            : ((2U 
                                                & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                                ? (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__reg_rdata_next) 
                                                   | ((((((IData)(vlSelfRef.__Vcellout__u_status_sram_alert__q) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.__Vcellout__u_status_readback_error__q) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__Vcellout__u_status_init_done__q) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.__Vcellout__u_status_scr_key_seed_valid__q))) 
                                                       << 4U) 
                                                      | ((((IData)(vlSelfRef.__PVT__u_status_scr_key_valid__DOT__q) 
                                                           << 3U) 
                                                          | ((IData)(vlSelfRef.__Vcellout__u_status_escalated__q) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelfRef.__Vcellout__u_status_init_error__q) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.__Vcellout__u_status_bus_integ_error__q)))))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                                    ? 
                                                   ((0xfffffffeU 
                                                     & vlSelfRef.__PVT__reg_rdata_next) 
                                                    | (IData)(vlSelfRef.__PVT__u_exec_regwen__DOT__q))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                                     ? 
                                                    ((0xfffffff0U 
                                                      & vlSelfRef.__PVT__reg_rdata_next) 
                                                     | (IData)(vlSelfRef.__Vcellout__u_exec__q))
                                                     : 
                                                    ((0x00000010U 
                                                      & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                                      ? 
                                                     ((0xfffffffeU 
                                                       & vlSelfRef.__PVT__reg_rdata_next) 
                                                      | (IData)(vlSelfRef.__PVT__u_ctrl_regwen__DOT__q))
                                                      : 
                                                     ((0x00000020U 
                                                       & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                                       ? 
                                                      (0xfffffffcU 
                                                       & vlSelfRef.__PVT__reg_rdata_next)
                                                       : 
                                                      ((0x00000040U 
                                                        & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                                        ? 
                                                       ((0xfffffff0U 
                                                         & vlSelfRef.__PVT__reg_rdata_next) 
                                                        | (IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__q))
                                                        : 
                                                       ((0xfffffffeU 
                                                         & vlSelfRef.__PVT__reg_rdata_next) 
                                                        | (IData)(vlSelfRef.__PVT__u_readback_regwen__DOT__q)))))))))
                                        : ((0x00000100U 
                                            & (IData)(vlSelfRef.__PVT__racl_addr_hit_read))
                                            ? ((0xfffffff0U 
                                                & vlSelfRef.__PVT__reg_rdata_next) 
                                               | (IData)(vlSelfRef.__Vcellout__u_readback__q))
                                            : 0xffffffffU));
    vlSelfRef.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1394[0U];
    vlSelfRef.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1394[1U];
    vlSelfRef.__PVT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (((IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q) 
            << 1U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1394[2U]);
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1225 = (
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
                                                            | (IData)(__VdfgRegularize_hd3d4c31d_1_1)))));
}

VL_ATTR_COLD void Vsim_sram_ctrl_regs_reg_top__pi22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__1(Vsim_sram_ctrl_regs_reg_top__pi22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_sram_ctrl_regs_reg_top__pi22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg_if__DOT__a_ack = ((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q)) 
                                             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__22__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i));
    vlSelfRef.__PVT__u_reg_if__DOT__instr_error = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__1__val 
                = (0x0000000fU & (vlSelf->__PVT__u_chk->tl_i[0U] 
                                  >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__1__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1__Vfuncout));
    vlSelfRef.__PVT__u_reg_if__DOT__rd_req = ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__a_ack) 
                                              & (0x0400U 
                                                 == 
                                                 (0x0700U 
                                                  & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.__PVT__u_reg_if__DOT__wr_req = ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__a_ack) 
                                              & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_25));
}

extern const VlUnpacked<CData/*0:0*/, 2048> Vsim__ConstPool__TABLE_hc5b01184_0;

VL_ATTR_COLD void Vsim_sram_ctrl_regs_reg_top__pi22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__2(Vsim_sram_ctrl_regs_reg_top__pi22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_sram_ctrl_regs_reg_top__pi22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__u_reg_if__DOT__err_internal = 
        (1U & (((IData)(vlSelfRef.__PVT__u_reg_if__DOT__wr_req) 
                & (0U != (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                >> 0x0000001bU)))) 
               | ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__instr_error) 
                  | ((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__opcode_allowed) 
                         & ((IData)(vlSelf->__PVT__u_reg_if__DOT__u_err->__PVT__addr_sz_chk) 
                            & ((IData)(vlSelf->__PVT__u_reg_if__DOT__u_err->__PVT__mask_chk) 
                               & ((4U == (7U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 8U))) 
                                  | ((1U == (7U & (
                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                   >> 8U))) 
                                     | (IData)(vlSelf->__PVT__u_reg_if__DOT__u_err->__PVT__fulldata_chk))))))) 
                     | ((IData)(vlSelf->__PVT__u_reg_if__DOT__u_err->__PVT__instr_type_err) 
                        | (IData)(vlSelf->__PVT__u_reg_if__DOT__u_err->__PVT__instr_wr_err))))));
    vlSelfRef.__PVT__u_reg_if__DOT__we_o = ((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__err_internal)) 
                                            & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__wr_req));
    __Vtableidx1 = (((0U != (1U & (~ ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                       << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x00000017U))))) 
                     << 0x0000000aU) | (((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                         << 1U) | (IData)(vlSelfRef.__PVT__u_reg_if__DOT__we_o)));
    vlSelfRef.__PVT__wr_err = Vsim__ConstPool__TABLE_hc5b01184_0
        [__Vtableidx1];
    vlSelfRef.__PVT__addrmiss = ((~ (0U != (IData)(vlSelfRef.__PVT__addr_hit))) 
                                 & (((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__err_internal)) 
                                     & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__rd_req)) 
                                    | (IData)(vlSelfRef.__PVT__u_reg_if__DOT__we_o)));
    vlSelfRef.__PVT__u_reg_if__DOT__error_i = ((IData)(vlSelfRef.__PVT__addrmiss) 
                                               | ((IData)(vlSelfRef.__PVT__wr_err) 
                                                  | (IData)(vlSelf->__PVT__u_chk->err_o)));
    vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2 = ((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__error_i)) 
                                                & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__we_o));
    vlSelfRef.__PVT__u_readback__DOT__we = ((((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                              >> 8U) 
                                             & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2)) 
                                            & (IData)(vlSelfRef.__PVT__u_readback_regwen__DOT__q));
    vlSelfRef.__PVT__u_alert_test__DOT__we = ((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2));
    vlSelfRef.__PVT__u_exec__DOT__we = ((((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                          >> 3U) & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2)) 
                                        & (IData)(vlSelfRef.__PVT__u_exec_regwen__DOT__q));
    vlSelfRef.__PVT__u_ctrl_init__DOT__we = ((((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                               >> 5U) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2)) 
                                             & (IData)(vlSelfRef.__PVT__u_ctrl_regwen__DOT__q));
    vlSelfRef.__PVT__u_exec_regwen__DOT__we = (((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                                >> 2U) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2));
    vlSelfRef.__PVT__u_ctrl_regwen__DOT__we = (((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                                >> 4U) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2));
    vlSelfRef.__PVT__u_readback_regwen__DOT__we = (
                                                   ((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                                    >> 7U) 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2));
    vlSelfRef.__PVT__u_scr_key_rotated__DOT__we = (
                                                   ((IData)(vlSelfRef.__PVT__racl_addr_hit_write) 
                                                    >> 6U) 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_0_2));
    vlSelfRef.__PVT__u_exec_regwen__DOT__wr_data = 
        ((IData)(vlSelfRef.__PVT__u_exec_regwen__DOT__q) 
         & ((~ (IData)(vlSelfRef.__PVT__u_exec_regwen__DOT__we)) 
            | vlSelfRef.__PVT__u_reg_if__DOT__wdata_o));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_exec_regwen__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_exec__DOT__we));
    vlSelfRef.__PVT__u_ctrl_regwen__DOT__wr_data = 
        ((IData)(vlSelfRef.__PVT__u_ctrl_regwen__DOT__q) 
         & ((~ (IData)(vlSelfRef.__PVT__u_ctrl_regwen__DOT__we)) 
            | vlSelfRef.__PVT__u_reg_if__DOT__wdata_o));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_ctrl_regwen__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_ctrl_init__DOT__we));
    vlSelfRef.__PVT__u_readback_regwen__DOT__wr_data 
        = ((IData)(vlSelfRef.__PVT__u_readback_regwen__DOT__q) 
           & ((~ (IData)(vlSelfRef.__PVT__u_readback_regwen__DOT__we)) 
              | vlSelfRef.__PVT__u_reg_if__DOT__wdata_o));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((((((IData)(vlSelfRef.__PVT__u_readback__DOT__we) 
               << 4U) | (((IData)(vlSelfRef.__PVT__u_readback_regwen__DOT__we) 
                          << 3U) | ((IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__we) 
                                    << 2U))) | (((IData)(vlSelfRef.__PVT__u_ctrl_init__DOT__we) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__u_ctrl_regwen__DOT__we))) 
            << 4U) | (((IData)(vlSelfRef.__PVT__u_exec__DOT__we) 
                       << 3U) | (((IData)(vlSelfRef.__PVT__u_exec_regwen__DOT__we) 
                                  << 2U) | (IData)(vlSelfRef.__PVT__u_alert_test__DOT__we))));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_readback_regwen__DOT__we));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_alert_test__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o 
        = ((((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
             & (IData)(vlSelfRef.__PVT__u_readback__DOT__we)) 
            | (((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
                & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__)) 
               | ((((IData)(vlSelfRef.__PVT__u_alert_test__DOT__we) 
                    & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
                   | ((IData)(vlSelfRef.__PVT__u_exec_regwen__DOT__we) 
                      & (IData)(vlSelfRef.__PVT__u_exec__DOT__we))) 
                  | (((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
                      & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__)) 
                     | (((IData)(vlSelfRef.__PVT__u_ctrl_regwen__DOT__we) 
                         & (IData)(vlSelfRef.__PVT__u_ctrl_init__DOT__we)) 
                        | ((IData)(vlSelfRef.__PVT__u_scr_key_rotated__DOT__we) 
                           & (IData)(vlSelfRef.__PVT__u_readback_regwen__DOT__we))))))) 
           | ((~ ((~ (IData)(vlSelfRef.__PVT__addrmiss)) 
                  & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__we_o))) 
              & ((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
                 | (IData)(vlSelfRef.__PVT__u_readback__DOT__we))));
}

VL_ATTR_COLD void Vsim_sram_ctrl_regs_reg_top__pi22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__0(Vsim_sram_ctrl_regs_reg_top__pi22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_sram_ctrl_regs_reg_top__pi22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__5__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__5__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__5__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__5__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__5__payload;
    __Vfunc_extract_d2h_rsp_intg__5__payload = 0;
    // Body
    vlSelfRef.__PVT__u_reg_if__DOT__d_ack = ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
                                             & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q));
    vlSelfRef.__VdfgRegularize_hd3d4c31d_1_1 = (((IData)(vlSelfRef.__PVT__u_reg_if__DOT__error_q) 
                                                 << 1U) 
                                                | (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__PVT__u_reg_if__DOT__a_ack = ((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q)) 
                                             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1395[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_1_1))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1395[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1395[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd3d4c31d_1_1))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1395[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1395[1U]) 
           | ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1395[2U] 
        = (1U & ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
    __Vfunc_extract_d2h_rsp_intg__5__tl[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1395[0U];
    __Vfunc_extract_d2h_rsp_intg__5__tl[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1395[1U];
    __Vfunc_extract_d2h_rsp_intg__5__tl[2U] = (((IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q) 
                                                << 1U) 
                                               | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1395[2U]);
    __Vfunc_extract_d2h_rsp_intg__5__payload = ((0x00000038U 
                                                 & ((__Vfunc_extract_d2h_rsp_intg__5__tl[2U] 
                                                     << 5U) 
                                                    | (0x00000018U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__5__tl[1U] 
                                                          >> 0x0000001bU)))) 
                                                | ((6U 
                                                    & (__Vfunc_extract_d2h_rsp_intg__5__tl[1U] 
                                                       >> 0x00000018U)) 
                                                   | (1U 
                                                      & (__Vfunc_extract_d2h_rsp_intg__5__tl[0U] 
                                                         >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__5__Vfuncout = __Vfunc_extract_d2h_rsp_intg__5__payload;
    vlSelfRef.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__5__Vfuncout;
}

VL_ATTR_COLD void Vsim_sram_ctrl_regs_reg_top__pi22___ctor_var_reset(Vsim_sram_ctrl_regs_reg_top__pi22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_sram_ctrl_regs_reg_top__pi22___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->tl_i, __VscopeHash, 717864233454436411ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->tl_o, __VscopeHash, 14475261017617439938ull);
    vlSelf->reg2hw = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 14106023928444074128ull);
    vlSelf->hw2reg = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 15323136289072650499ull);
    vlSelf->racl_policies_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14577879055449831761ull);
    vlSelf->racl_error_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11975622516046977850ull);
    vlSelf->__PVT__racl_error_log_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3784173351313067546ull);
    vlSelf->intg_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8789439780594604087ull);
    vlSelf->__PVT__addrmiss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9707087644304854113ull);
    vlSelf->__PVT__wr_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7057086562865516197ull);
    vlSelf->__PVT__reg_rdata_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5943804542038041692ull);
    vlSelf->__PVT__err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17273344676821249686ull);
    vlSelf->__Vcellout__u_status_bus_integ_error__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17737274772698550740ull);
    vlSelf->__Vcellout__u_status_init_error__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6589264432898352529ull);
    vlSelf->__Vcellout__u_status_escalated__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10159274187285006661ull);
    vlSelf->__Vcellout__u_status_scr_key_seed_valid__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15316486332964548484ull);
    vlSelf->__Vcellout__u_status_init_done__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7569283200525441154ull);
    vlSelf->__Vcellout__u_status_readback_error__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11265543074826965863ull);
    vlSelf->__Vcellout__u_status_sram_alert__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8668203920427325019ull);
    vlSelf->__Vcellout__u_exec__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4517135775908934239ull);
    vlSelf->__PVT__ctrl_qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15730192961837629486ull);
    vlSelf->__Vcellout__u_ctrl_renew_scr_key__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15020526582300543929ull);
    vlSelf->__Vcellout__u_ctrl_init__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7097146307862903449ull);
    vlSelf->__Vcellout__u_readback__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8256591692888646915ull);
    vlSelf->__PVT__addr_hit = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9756947971808524215ull);
    vlSelf->__PVT__racl_addr_hit_read = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10652110887931671250ull);
    vlSelf->__PVT__racl_addr_hit_write = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5082296154598667391ull);
    vlSelf->__VdfgRegularize_hd3d4c31d_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6344716763797466304ull);
    vlSelf->__PVT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9763081941515845664ull);
    vlSelf->__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15743962690141461334ull);
    vlSelf->__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15662364063595111423ull);
    vlSelf->__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7324528169243974668ull);
    vlSelf->__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1832549661355366881ull);
    vlSelf->__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6892844380990592015ull);
    vlSelf->__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3504875938397198690ull);
    vlSelf->__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2049695356799875421ull);
    vlSelf->__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18321401757461834718ull);
    vlSelf->__PVT__u_reg_if__DOT__we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16835999325112086797ull);
    vlSelf->__PVT__u_reg_if__DOT__wdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16928401678821916195ull);
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
    vlSelf->__PVT__u_alert_test__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18372255623806094963ull);
    vlSelf->__PVT__u_status_scr_key_valid__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13764966084041688980ull);
    vlSelf->__PVT__u_status_scr_key_valid__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3600167863264332316ull);
    vlSelf->__PVT__u_status_scr_key_valid__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17703745706872599645ull);
    vlSelf->__PVT__u_status_scr_key_seed_valid__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16183468906911711590ull);
    vlSelf->__PVT__u_status_init_done__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11915370101106824029ull);
    vlSelf->__PVT__u_status_init_done__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1226790106334590305ull);
    vlSelf->__PVT__u_status_readback_error__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7862871340990191409ull);
    vlSelf->__PVT__u_exec_regwen__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6636187257248740436ull);
    vlSelf->__PVT__u_exec_regwen__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9883296012332923248ull);
    vlSelf->__PVT__u_exec_regwen__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11536525903659890353ull);
    vlSelf->__PVT__u_exec__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1837225509181028192ull);
    vlSelf->__PVT__u_ctrl_regwen__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18163473555390604080ull);
    vlSelf->__PVT__u_ctrl_regwen__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8212362414788376604ull);
    vlSelf->__PVT__u_ctrl_regwen__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11562207078305111395ull);
    vlSelf->__PVT__u_ctrl_init__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13478267427982435168ull);
    vlSelf->__PVT__u_scr_key_rotated__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12345431739988036382ull);
    vlSelf->__PVT__u_scr_key_rotated__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15708163593152538605ull);
    vlSelf->__PVT__u_scr_key_rotated__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16778340630320287193ull);
    vlSelf->__PVT__u_scr_key_rotated__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7409208707669418633ull);
    vlSelf->__PVT__u_scr_key_rotated__DOT__wr_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5222968386452051148ull);
    vlSelf->__PVT__u_readback_regwen__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9836038919072961072ull);
    vlSelf->__PVT__u_readback_regwen__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3850774474259449695ull);
    vlSelf->__PVT__u_readback_regwen__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4177116459845265504ull);
    vlSelf->__PVT__u_readback__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18248024632455929047ull);
    vlSelf->__VdfgRegularize_hd3d4c31d_1_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2946433788922043652ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__1__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1628151262156786870ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__1__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6497513165002300816ull);
    vlSelf->__Vfunc_mubi4_and__4__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8197746457469078907ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__6__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13490389477559648229ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__6__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16949656769346261169ull);
    vlSelf->__Vfunc_mubi4_and__9__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2772168488978447702ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_251 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15726275151709197317ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_252 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2142831091044479776ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_253 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15186196717487828003ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_254 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10564377310283791897ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_255 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15535380069153621880ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_257 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12976822145394016010ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_258 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4696961297507553157ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_259 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4121649154542088193ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_260 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13026930072041690299ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_261 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17147762364328865534ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_264 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 439313563619167457ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_265 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16473595840047160611ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_266 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10793908077245374240ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_267 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2139019255010742050ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_268 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14898483286152228340ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_269 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2481919453508172739ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_270 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13814196395297002541ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_271 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17976783268772710931ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_272 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7611529917959358490ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_273 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3860675202296889826ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1225 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17731164775083812279ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1394, __VscopeHash, 8738647817489495655ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1395, __VscopeHash, 16819247500144294372ull);
}
