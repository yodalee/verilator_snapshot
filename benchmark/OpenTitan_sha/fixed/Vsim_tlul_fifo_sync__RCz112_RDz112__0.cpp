// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket__gen_dfifo__BRA__0__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket__gen_dfifo__BRA__0__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                                 ? 
                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U]
                                                 : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket.__PVT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__wdepth_o)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x00000017U))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000017U))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000029U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 9U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x00000017U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000029U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 9U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x00000017U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000029U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x00000017U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000029U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000017U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket__gen_dfifo__BRA__1__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket__gen_dfifo__BRA__1__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                                 ? 
                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U]
                                                 : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket.__PVT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__wdepth_o)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x00000017U))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000017U))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000029U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 9U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x00000017U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000029U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 9U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x00000017U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000029U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x00000017U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000029U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000017U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket__gen_dfifo__BRA__2__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket__gen_dfifo__BRA__2__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                                 ? 
                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U]
                                                 : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket.__PVT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__wdepth_o)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x00000017U))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000017U))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000029U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 9U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x00000017U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000029U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 9U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x00000017U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000029U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x00000017U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000029U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000017U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket__gen_dfifo__BRA__0__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket__gen_dfifo__BRA__0__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                                 ? 
                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U]
                                                 : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket.__PVT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__wdepth_o)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x00000017U))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000017U))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000029U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 9U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x00000017U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000029U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 9U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x00000017U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000029U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x00000017U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000029U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000017U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket__gen_dfifo__BRA__1__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket__gen_dfifo__BRA__1__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                                 ? 
                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U]
                                                 : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket.__PVT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__wdepth_o)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x00000017U))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000017U))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000029U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 9U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x00000017U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000029U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 9U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x00000017U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000029U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x00000017U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000029U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000017U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket__gen_dfifo__BRA__2__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket__gen_dfifo__BRA__2__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                                 ? 
                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U]
                                                 : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket.__PVT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__wdepth_o)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x00000017U))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000017U))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000029U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 9U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x00000017U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000029U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 9U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x00000017U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000029U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x00000017U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000029U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000017U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__gen_dfifo__BRA__0__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__gen_dfifo__BRA__0__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = (IData)((((QData)((IData)(
                                                     ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                                       ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1
                                                       : 0xffffffffU))) 
                                     << 0x00000018U) 
                                    | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                                          ? vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364
                                                          : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__blanked_auser) 
                                                        << 1U) 
                                                       | (1U 
                                                          & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_h_i[1U] = ((0xff000000U & vlSelfRef.tl_h_i[1U]) 
                            | (IData)(((((QData)((IData)(
                                                         ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                                           ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1
                                                           : 0xffffffffU))) 
                                         << 0x00000018U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                                              ? vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364
                                                              : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__blanked_auser) 
                                                            << 1U) 
                                                           | (1U 
                                                              & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_i[1U] = ((0x00ffffffU & vlSelfRef.tl_h_i[1U]) 
                            | ((IData)((((QData)((IData)(
                                                         ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__fifo_h__DOT__reqfifo__DOT__wvalid_i) 
                                                          & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)))) 
                                         << 0x00000034U) 
                                        | (0x000fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                               << 0x00000029U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                  << 9U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                    >> 0x00000017U)))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((((QData)((IData)(
                                                       ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__fifo_h__DOT__reqfifo__DOT__wvalid_i) 
                                                        & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)))) 
                                       << 0x00000034U) 
                                      | (0x000fffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                             << 0x00000029U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                << 9U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                  >> 0x00000017U)))))) 
                             >> 8U) | ((IData)(((((QData)((IData)(
                                                                  ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__fifo_h__DOT__reqfifo__DOT__wvalid_i) 
                                                                   & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)))) 
                                                  << 0x00000034U) 
                                                 | (0x000fffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                        << 0x00000029U) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                             >> 0x00000017U))))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((IData)(
                                                   ((((QData)((IData)(
                                                                      ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__fifo_h__DOT__reqfifo__DOT__wvalid_i) 
                                                                       & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)))) 
                                                      << 0x00000034U) 
                                                     | (0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000029U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000017U))))) 
                                                    >> 0x00000020U)) 
                                           >> 8U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__gen_dfifo__BRA__1__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__gen_dfifo__BRA__1__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = (IData)((((QData)((IData)(
                                                     ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                                       ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1
                                                       : 0xffffffffU))) 
                                     << 0x00000018U) 
                                    | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                                          ? vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364
                                                          : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__blanked_auser) 
                                                        << 1U) 
                                                       | (1U 
                                                          & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_h_i[1U] = ((0xff000000U & vlSelfRef.tl_h_i[1U]) 
                            | (IData)(((((QData)((IData)(
                                                         ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                                           ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1
                                                           : 0xffffffffU))) 
                                         << 0x00000018U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                                              ? vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364
                                                              : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__blanked_auser) 
                                                            << 1U) 
                                                           | (1U 
                                                              & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_i[1U] = ((0x00ffffffU & vlSelfRef.tl_h_i[1U]) 
                            | ((IData)((((QData)((IData)(
                                                         ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__fifo_h__DOT__reqfifo__DOT__wvalid_i) 
                                                          & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)))) 
                                         << 0x00000034U) 
                                        | (0x000fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                               << 0x00000029U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                  << 9U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                    >> 0x00000017U)))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((((QData)((IData)(
                                                       ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__fifo_h__DOT__reqfifo__DOT__wvalid_i) 
                                                        & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)))) 
                                       << 0x00000034U) 
                                      | (0x000fffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                             << 0x00000029U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                << 9U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                  >> 0x00000017U)))))) 
                             >> 8U) | ((IData)(((((QData)((IData)(
                                                                  ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__fifo_h__DOT__reqfifo__DOT__wvalid_i) 
                                                                   & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)))) 
                                                  << 0x00000034U) 
                                                 | (0x000fffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                        << 0x00000029U) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                             >> 0x00000017U))))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((IData)(
                                                   ((((QData)((IData)(
                                                                      ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__fifo_h__DOT__reqfifo__DOT__wvalid_i) 
                                                                       & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)))) 
                                                      << 0x00000034U) 
                                                     | (0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000029U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000017U))))) 
                                                    >> 0x00000020U)) 
                                           >> 8U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__gen_dfifo__BRA__2__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__gen_dfifo__BRA__2__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = (IData)((((QData)((IData)(
                                                     ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                                       ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1
                                                       : 0xffffffffU))) 
                                     << 0x00000018U) 
                                    | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                                          ? vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364
                                                          : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__blanked_auser) 
                                                        << 1U) 
                                                       | (1U 
                                                          & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_h_i[1U] = ((0xff000000U & vlSelfRef.tl_h_i[1U]) 
                            | (IData)(((((QData)((IData)(
                                                         ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                                           ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1
                                                           : 0xffffffffU))) 
                                         << 0x00000018U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                                              ? vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364
                                                              : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__blanked_auser) 
                                                            << 1U) 
                                                           | (1U 
                                                              & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_i[1U] = ((0x00ffffffU & vlSelfRef.tl_h_i[1U]) 
                            | ((IData)((((QData)((IData)(
                                                         ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__fifo_h__DOT__reqfifo__DOT__wvalid_i) 
                                                          & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)))) 
                                         << 0x00000034U) 
                                        | (0x000fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                               << 0x00000029U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                  << 9U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                    >> 0x00000017U)))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((((QData)((IData)(
                                                       ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__fifo_h__DOT__reqfifo__DOT__wvalid_i) 
                                                        & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)))) 
                                       << 0x00000034U) 
                                      | (0x000fffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                             << 0x00000029U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                << 9U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                  >> 0x00000017U)))))) 
                             >> 8U) | ((IData)(((((QData)((IData)(
                                                                  ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__fifo_h__DOT__reqfifo__DOT__wvalid_i) 
                                                                   & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)))) 
                                                  << 0x00000034U) 
                                                 | (0x000fffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                        << 0x00000029U) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                             >> 0x00000017U))))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((IData)(
                                                   ((((QData)((IData)(
                                                                      ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__fifo_h__DOT__reqfifo__DOT__wvalid_i) 
                                                                       & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)))) 
                                                      << 0x00000034U) 
                                                     | (0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000029U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000017U))))) 
                                                    >> 0x00000020U)) 
                                           >> 8U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wready_o = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__gnt_i) 
                                                | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__missed_err_gnt_q)) 
                                               & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
                                                  & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(
                                                         ((0x00008000U 
                                                           != 
                                                           (0x0001c000U 
                                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)) 
                                                          | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__rvalid_o))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_247 = (((IData)(vlSelfRef.__PVT__rspfifo__DOT__wvalid_i) 
                                                   & (1U 
                                                      != 
                                                      (3U 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                                          >> 0x0000000fU))))
                                                   ? 0U
                                                   : 1U);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1694 = (
                                                   (((0x00004000U 
                                                      & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                                      ? 0x0000002aU
                                                      : 
                                                     ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__vld_rd_rsp)
                                                       ? 
                                                      (0x0000007fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
                                                                  >> 1U)))
                                                       : 0x0000002aU)) 
                                                    << 2U) 
                                                   | ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__d_error) 
                                                        & (IData)(vlSelfRef.__PVT__rspfifo__DOT__wvalid_i)) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.__PVT__reqfifo__DOT__wready_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1148[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelfRef.__PVT__rspfifo__DOT__wvalid_i)
                                      ? (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                               >> 8U))
                                      : 0U))) << 0x00000039U) 
                   | (((QData)((IData)(((IData)(vlSelfRef.__PVT__rspfifo__DOT__wvalid_i)
                                         ? (0x000000ffU 
                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                         : 0U))) << 0x00000031U) 
                      | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__d_data)) 
                          << 0x00000010U) | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1694))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1148[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1148[1U]) 
           | (IData)(((((QData)((IData)(((IData)(vlSelfRef.__PVT__rspfifo__DOT__wvalid_i)
                                          ? (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                                   >> 8U))
                                          : 0U))) << 0x00000039U) 
                       | (((QData)((IData)(((IData)(vlSelfRef.__PVT__rspfifo__DOT__wvalid_i)
                                             ? (0x000000ffU 
                                                & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                             : 0U))) 
                           << 0x00000031U) | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__d_data)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1694))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1148[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1148[1U]) 
           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_247) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1148[2U] 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_247) 
                 >> 2U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__fifo_h__DOT__reqfifo__DOT__wvalid_i) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_244)) 
                                     << 0x00000018U) 
                                    | (QData)((IData)(
                                                      ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_245 
                                                        << 1U) 
                                                       | (1U 
                                                          & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_h_i[1U] = ((0xff000000U & vlSelfRef.tl_h_i[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_244)) 
                                         << 0x00000018U) 
                                        | (QData)((IData)(
                                                          ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_245 
                                                            << 1U) 
                                                           | (1U 
                                                              & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_i[1U] = ((0x00ffffffU & vlSelfRef.tl_h_i[1U]) 
                            | ((IData)((((QData)((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                         << 0x00000034U) 
                                        | (0x000fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                               << 0x00000029U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                  << 9U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                    >> 0x00000017U)))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((((QData)((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                       << 0x00000034U) 
                                      | (0x000fffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                             << 0x00000029U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                << 9U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                  >> 0x00000017U)))))) 
                             >> 8U) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                                  << 0x00000034U) 
                                                 | (0x000fffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                        << 0x00000029U) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                             >> 0x00000017U))))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((IData)(
                                                   ((((QData)((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                                      << 0x00000034U) 
                                                     | (0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000029U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000017U))))) 
                                                    >> 0x00000020U)) 
                                           >> 8U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1695 = (
                                                   ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__error_q) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1147[0U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1695))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1147[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1147[1U]) 
           | (IData)(((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1695))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1147[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1147[1U]) 
           | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1147[2U] 
        = (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__fifo_h__DOT__reqfifo__DOT__wvalid_i) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd)) 
                                     << 0x00000018U) 
                                    | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                                          ? vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_370
                                                          : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__blanked_auser) 
                                                        << 1U) 
                                                       | (1U 
                                                          & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_h_i[1U] = ((0xff000000U & vlSelfRef.tl_h_i[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd)) 
                                         << 0x00000018U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                                              ? vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_370
                                                              : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__blanked_auser) 
                                                            << 1U) 
                                                           | (1U 
                                                              & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_i[1U] = ((0x00ffffffU & vlSelfRef.tl_h_i[1U]) 
                            | ((IData)((((QData)((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                         << 0x00000034U) 
                                        | (0x000fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                               << 0x00000029U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                  << 9U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                    >> 0x00000017U)))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((((QData)((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                       << 0x00000034U) 
                                      | (0x000fffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                             << 0x00000029U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                << 9U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                  >> 0x00000017U)))))) 
                             >> 8U) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                                  << 0x00000034U) 
                                                 | (0x000fffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                        << 0x00000029U) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                             >> 0x00000017U))))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((IData)(
                                                   ((((QData)((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                                      << 0x00000034U) 
                                                     | (0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000029U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000017U))))) 
                                                    >> 0x00000020U)) 
                                           >> 8U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(
                                                         ((0x00008000U 
                                                           != 
                                                           (0x0001c000U 
                                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__rdata_o)) 
                                                          | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_rspfifo__DOT__rvalid_o))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_250 = (((IData)(vlSelfRef.__PVT__rspfifo__DOT__wvalid_i) 
                                                   & (1U 
                                                      != 
                                                      (3U 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__rdata_o 
                                                          >> 0x0000000fU))))
                                                   ? 0U
                                                   : 1U);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_248)) 
                                     << 0x00000018U) 
                                    | (QData)((IData)(
                                                      ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_249 
                                                        << 1U) 
                                                       | (1U 
                                                          & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_h_i[1U] = ((0xff000000U & vlSelfRef.tl_h_i[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_248)) 
                                         << 0x00000018U) 
                                        | (QData)((IData)(
                                                          ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_249 
                                                            << 1U) 
                                                           | (1U 
                                                              & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__wdepth_o))))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_i[1U] = ((0x00ffffffU & vlSelfRef.tl_h_i[1U]) 
                            | ((IData)((((QData)((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                         << 0x00000034U) 
                                        | (0x000fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[3U])) 
                                               << 0x00000029U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                  << 9U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                    >> 0x00000017U)))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((((QData)((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                       << 0x00000034U) 
                                      | (0x000fffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[3U])) 
                                             << 0x00000029U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                << 9U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                  >> 0x00000017U)))))) 
                             >> 8U) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                                  << 0x00000034U) 
                                                 | (0x000fffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                        << 0x00000029U) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                             >> 0x00000017U))))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((IData)(
                                                   ((((QData)((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                                      << 0x00000034U) 
                                                     | (0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000029U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000017U))))) 
                                                    >> 0x00000020U)) 
                                           >> 8U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__2(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wready_o = (1U & 
                                               (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__mem_req_o)) 
                                                 | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__missed_err_gnt_q)) 
                                                & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
                                                   & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1689 = (
                                                   (((0x00004000U 
                                                      & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__rdata_o)
                                                      ? 0x0000002aU
                                                      : 
                                                     ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__vld_rd_rsp)
                                                       ? 
                                                      (0x0000007fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_rspfifo__DOT__rdata_o 
                                                                  >> 1U)))
                                                       : 0x0000002aU)) 
                                                    << 2U) 
                                                   | ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__d_error) 
                                                        & (IData)(vlSelfRef.__PVT__rspfifo__DOT__wvalid_i)) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.__PVT__reqfifo__DOT__wready_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1152[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelfRef.__PVT__rspfifo__DOT__wvalid_i)
                                      ? (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__rdata_o 
                                               >> 8U))
                                      : 0U))) << 0x00000039U) 
                   | (((QData)((IData)(((IData)(vlSelfRef.__PVT__rspfifo__DOT__wvalid_i)
                                         ? (0x000000ffU 
                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__rdata_o)
                                         : 0U))) << 0x00000031U) 
                      | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__d_data)) 
                          << 0x00000010U) | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1689))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1152[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1152[1U]) 
           | (IData)(((((QData)((IData)(((IData)(vlSelfRef.__PVT__rspfifo__DOT__wvalid_i)
                                          ? (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__rdata_o 
                                                   >> 8U))
                                          : 0U))) << 0x00000039U) 
                       | (((QData)((IData)(((IData)(vlSelfRef.__PVT__rspfifo__DOT__wvalid_i)
                                             ? (0x000000ffU 
                                                & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__rdata_o)
                                             : 0U))) 
                           << 0x00000031U) | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__d_data)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1689))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1152[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1152[1U]) 
           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_250) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1152[2U] 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_250) 
                 >> 2U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wready_o = (1U & 
                                               (~ (
                                                   ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__empty_rclk)) 
                                                    & ((0x0024U 
                                                        == 
                                                        (0x000003ffU 
                                                         & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 3U) 
                                                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001dU))))
                                                        ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_control_cdc__DOT__src_busy_q)
                                                        : 
                                                       ((0x0025U 
                                                         == 
                                                         (0x000003ffU 
                                                          & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                              << 3U) 
                                                             | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x0000001dU)))) 
                                                        & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__src_busy_q)))) 
                                                   | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1690 = (
                                                   ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__reqfifo__DOT__wready_o));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1151[0U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1690))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1151[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1151[1U]) 
           | (IData)(((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1690))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1151[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1151[1U]) 
           | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1151[2U] 
        = (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                                 ? 
                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U]
                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__wdepth_o)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 8U) | ((IData)((0x000fffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                    << 0x00000029U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                         >> 0x00000017U))))) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000029U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 9U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x00000017U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000029U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x00000017U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((0x00fff000U 
                                            & ((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                                               << 0x0000000cU)) 
                                           | ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000029U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000017U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket__gen_dfifo__BRA__0__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket__gen_dfifo__BRA__0__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001fU) 
                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 1U))
                                                 : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x00000018U))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000018U))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket__gen_dfifo__BRA__1__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket__gen_dfifo__BRA__1__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001fU) 
                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 1U))
                                                 : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x00000018U))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000018U))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket__gen_dfifo__BRA__2__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket__gen_dfifo__BRA__2__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001fU) 
                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 1U))
                                                 : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x00000018U))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000018U))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1752)) 
                                     << 0x00000018U) 
                                    | (QData)((IData)(
                                                      ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__VdfgRegularize_h6e95ff9d_0_1753 
                                                        << 1U) 
                                                       | (1U 
                                                          & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))))))));
    vlSelfRef.tl_h_i[1U] = ((0xff000000U & vlSelfRef.tl_h_i[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1752)) 
                                         << 0x00000018U) 
                                        | (QData)((IData)(
                                                          ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__VdfgRegularize_h6e95ff9d_0_1753 
                                                            << 1U) 
                                                           | (1U 
                                                              & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_i[1U] = ((0x00ffffffU & vlSelfRef.tl_h_i[1U]) 
                            | ((IData)((((QData)((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                         << 0x00000034U) 
                                        | (0x000fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                               << 0x00000028U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                    >> 0x00000018U)))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((((QData)((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                       << 0x00000034U) 
                                      | (0x000fffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                             << 0x00000028U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                << 8U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                  >> 0x00000018U)))))) 
                             >> 8U) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                                  << 0x00000034U) 
                                                 | (0x000fffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                        << 0x00000028U) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                           << 8U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                             >> 0x00000018U))))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((IData)(
                                                   ((((QData)((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                                      << 0x00000034U) 
                                                     | (0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000018U))))) 
                                                    >> 0x00000020U)) 
                                           >> 8U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wready_o = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__gnt_i) 
                                                | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__missed_err_gnt_q)) 
                                               & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
                                                  & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__2(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(
                                                         ((0x00008000U 
                                                           != 
                                                           (0x0001c000U 
                                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o)) 
                                                          | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__rvalid_o))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1750 = (
                                                   ((IData)(vlSelfRef.__PVT__rspfifo__DOT__wvalid_i) 
                                                    & (1U 
                                                       != 
                                                       (3U 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o 
                                                           >> 0x0000000fU))))
                                                    ? 0U
                                                    : 1U);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__3(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1765 = (
                                                   (((0x00004000U 
                                                      & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o)
                                                      ? 0x0000002aU
                                                      : 
                                                     ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__vld_rd_rsp)
                                                       ? 
                                                      (0x0000007fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__rdata_o 
                                                                  >> 1U)))
                                                       : 0x0000002aU)) 
                                                    << 2U) 
                                                   | ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__d_error) 
                                                        & (IData)(vlSelfRef.__PVT__rspfifo__DOT__wvalid_i)) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.__PVT__reqfifo__DOT__wready_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1757[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelfRef.__PVT__rspfifo__DOT__wvalid_i)
                                      ? (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o 
                                               >> 8U))
                                      : 0U))) << 0x00000039U) 
                   | (((QData)((IData)(((IData)(vlSelfRef.__PVT__rspfifo__DOT__wvalid_i)
                                         ? (0x000000ffU 
                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o)
                                         : 0U))) << 0x00000031U) 
                      | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__d_data)) 
                          << 0x00000010U) | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1765))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1757[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1757[1U]) 
           | (IData)(((((QData)((IData)(((IData)(vlSelfRef.__PVT__rspfifo__DOT__wvalid_i)
                                          ? (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o 
                                                   >> 8U))
                                          : 0U))) << 0x00000039U) 
                       | (((QData)((IData)(((IData)(vlSelfRef.__PVT__rspfifo__DOT__wvalid_i)
                                             ? (0x000000ffU 
                                                & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o)
                                             : 0U))) 
                           << 0x00000031U) | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__d_data)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1765))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1757[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1757[1U]) 
           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1750) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1757[2U] 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1750) 
                 >> 2U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1764 = (
                                                   ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1758[0U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1764))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1758[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1758[1U]) 
           | (IData)(((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1764))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1758[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1758[1U]) 
           | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1758[2U] 
        = (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001fU) 
                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 1U))
                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                             >> 8U) | ((IData)((0x000fffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                    << 0x00000028U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                       << 8U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                         >> 0x00000018U))))) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((0x00fff000U 
                                            & ((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                                               << 0x0000000cU)) 
                                           | ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__gen_dfifo__BRA__0__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__gen_dfifo__BRA__0__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001fU) 
                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 1U))
                                                 : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x00000018U))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000018U))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__gen_dfifo__BRA__1__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__gen_dfifo__BRA__1__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001fU) 
                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 1U))
                                                 : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x00000018U))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000018U))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__gen_dfifo__BRA__2__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__gen_dfifo__BRA__2__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001fU) 
                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 1U))
                                                 : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x00000018U))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000018U))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket__gen_dfifo__BRA__0__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket__gen_dfifo__BRA__0__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001fU) 
                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 1U))
                                                 : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x00000018U))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000018U))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket__gen_dfifo__BRA__1__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket__gen_dfifo__BRA__1__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001fU) 
                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 1U))
                                                 : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x00000018U))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000018U))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket__gen_dfifo__BRA__2__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket__gen_dfifo__BRA__2__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001fU) 
                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 1U))
                                                 : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x00000018U))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000018U))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1684 = (
                                                   ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_reg_if__DOT__error_q) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1187[0U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1684))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1187[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1187[1U]) 
           | (IData)(((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1684))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1187[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1187[1U]) 
           | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1187[2U] 
        = (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001fU) 
                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 1U))
                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_dbus_addr_matching_0__DOT__wd 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_dbus_addr_matching_0__DOT__wd 
                             >> 8U) | ((IData)((0x000fffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                    << 0x00000028U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                       << 8U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                         >> 0x00000018U))))) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((0x00fff000U 
                                            & ((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                                               << 0x0000000cU)) 
                                           | ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((~ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                   >> 0x00000011U)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                  >> 0x00000011U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((~ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                   >> 0x00000011U)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                  >> 0x00000011U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((~ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                   >> 0x00000011U)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                  >> 0x00000011U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_44__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_44__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((~ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_44.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                   >> 0x00000011U)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_44.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_44__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_44__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_44.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_44.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                  >> 0x00000011U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((~ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                   >> 0x00000011U)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                  >> 0x00000011U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_46__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_46__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((~ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_46.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                   >> 0x00000011U)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_46.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_46__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_46__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_46.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_46.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                  >> 0x00000011U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_47__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_47__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((~ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_47.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                   >> 0x00000011U)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_47.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_47__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_47__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_47.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_47.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                  >> 0x00000011U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((~ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                   >> 0x00000011U)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                  >> 0x00000011U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((~ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                   >> 0x00000011U)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                  >> 0x00000011U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((~ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                   >> 0x00000011U)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                  >> 0x00000011U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_51__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_51__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((~ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_51.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                   >> 0x00000011U)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_51.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_51__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_51__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_51.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_51.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                  >> 0x00000011U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((~ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                   >> 0x00000011U)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                  >> 0x00000011U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((~ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                   >> 0x00000011U)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                  >> 0x00000011U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((~ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                   >> 0x00000011U)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                  >> 0x00000011U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((~ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                   >> 0x00000011U)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                  >> 0x00000011U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((~ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                   >> 0x00000011U)) 
                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                  >> 0x00000011U));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_req_o) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_u_o__BRA__0__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1282[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1282[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1282[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1282[3U]);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1286[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1286[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1286[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (0U 
                                                  == 
                                                  (0x00060000U 
                                                   & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U])));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_req_o) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_u_o__BRA__1__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1283[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1283[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1283[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1283[3U]);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1289[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1289[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1289[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (0U 
                                                  == 
                                                  (0x00060000U 
                                                   & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U])));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_req_o) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_u_o__BRA__2__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1284[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1284[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1284[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1284[3U]);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x00060000U 
                                                         & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.tl_d2h_o[1U])) 
                                                       & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.tl_d2h_o[2U] 
                                                          >> 1U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_req_o) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_u_o__BRA__3__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1285[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1285[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1285[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1285[3U]);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1295[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1295[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1295[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (0U 
                                                  == 
                                                  (0x00060000U 
                                                   & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U])));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_o[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_520)) 
                                     << 0x00000010U) 
                                    | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1286[0U]) 
                                                       | (1U 
                                                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)))))));
    vlSelfRef.tl_h_o[1U] = ((0xffff0000U & vlSelfRef.tl_h_o[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_520)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1286[0U]) 
                                                           | (1U 
                                                              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_o[1U] = ((0x0000ffffU & vlSelfRef.tl_h_o[1U]) 
                            | ((IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                                        >> 0x0000002eU)) 
                               << 0x00000010U));
    vlSelfRef.tl_h_o[2U] = (3U & ((0x0000fffeU & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                                  << 1U)) 
                                  | (1U & ((IData)(
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                                                    >> 0x0000002eU)) 
                                           >> 0x00000010U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_o[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_520)) 
                                     << 0x00000010U) 
                                    | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1287[0U]) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                             >> 1U)))))));
    vlSelfRef.tl_h_o[1U] = ((0xffff0000U & vlSelfRef.tl_h_o[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_520)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1287[0U]) 
                                                           | (1U 
                                                              & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                                 >> 1U)))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_o[1U] = ((0x0000ffffU & vlSelfRef.tl_h_o[1U]) 
                            | ((IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                                        >> 0x0000002eU)) 
                               << 0x00000010U));
    vlSelfRef.tl_h_o[2U] = (3U & ((0x0000fffeU & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                                  << 1U)) 
                                  | (1U & ((IData)(
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                                                    >> 0x0000002eU)) 
                                           >> 0x00000010U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_o[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_520)) 
                                     << 0x00000010U) 
                                    | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1288[0U]) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                             >> 2U)))))));
    vlSelfRef.tl_h_o[1U] = ((0xffff0000U & vlSelfRef.tl_h_o[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_520)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1288[0U]) 
                                                           | (1U 
                                                              & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                                 >> 2U)))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_o[1U] = ((0x0000ffffU & vlSelfRef.tl_h_o[1U]) 
                            | ((IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                                        >> 0x0000002eU)) 
                               << 0x00000010U));
    vlSelfRef.tl_h_o[2U] = (3U & ((0x0000fffeU & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                                  << 1U)) 
                                  | (1U & ((IData)(
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                                                    >> 0x0000002eU)) 
                                           >> 0x00000010U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_o[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_521)) 
                                     << 0x00000010U) 
                                    | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1289[0U]) 
                                                       | (1U 
                                                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)))))));
    vlSelfRef.tl_h_o[1U] = ((0xffff0000U & vlSelfRef.tl_h_o[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_521)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1289[0U]) 
                                                           | (1U 
                                                              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_o[1U] = ((0x0000ffffU & vlSelfRef.tl_h_o[1U]) 
                            | ((IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                                        >> 0x0000002eU)) 
                               << 0x00000010U));
    vlSelfRef.tl_h_o[2U] = (3U & ((0x0000fffeU & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                                  << 1U)) 
                                  | (1U & ((IData)(
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                                                    >> 0x0000002eU)) 
                                           >> 0x00000010U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_o[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_521)) 
                                     << 0x00000010U) 
                                    | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1290[0U]) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                             >> 1U)))))));
    vlSelfRef.tl_h_o[1U] = ((0xffff0000U & vlSelfRef.tl_h_o[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_521)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1290[0U]) 
                                                           | (1U 
                                                              & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                                 >> 1U)))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_o[1U] = ((0x0000ffffU & vlSelfRef.tl_h_o[1U]) 
                            | ((IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                                        >> 0x0000002eU)) 
                               << 0x00000010U));
    vlSelfRef.tl_h_o[2U] = (3U & ((0x0000fffeU & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                                  << 1U)) 
                                  | (1U & ((IData)(
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                                                    >> 0x0000002eU)) 
                                           >> 0x00000010U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_o[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_521)) 
                                     << 0x00000010U) 
                                    | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1291[0U]) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                             >> 2U)))))));
    vlSelfRef.tl_h_o[1U] = ((0xffff0000U & vlSelfRef.tl_h_o[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_521)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1291[0U]) 
                                                           | (1U 
                                                              & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                                 >> 2U)))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_o[1U] = ((0x0000ffffU & vlSelfRef.tl_h_o[1U]) 
                            | ((IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                                        >> 0x0000002eU)) 
                               << 0x00000010U));
    vlSelfRef.tl_h_o[2U] = (3U & ((0x0000fffeU & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                                  << 1U)) 
                                  | (1U & ((IData)(
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                                                    >> 0x0000002eU)) 
                                           >> 0x00000010U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_o[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_522)) 
                                     << 0x00000010U) 
                                    | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_1292[0U]) 
                                                       | (1U 
                                                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)))))));
    vlSelfRef.tl_h_o[1U] = ((0xffff0000U & vlSelfRef.tl_h_o[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_522)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_1292[0U]) 
                                                           | (1U 
                                                              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_o[1U] = ((0x0000ffffU & vlSelfRef.tl_h_o[1U]) 
                            | ((IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____VdfgRegularize_he8dc8671_0_3 
                                        >> 0x0000002eU)) 
                               << 0x00000010U));
    vlSelfRef.tl_h_o[2U] = (3U & ((0x0000fffeU & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                                  << 1U)) 
                                  | (1U & ((IData)(
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____VdfgRegularize_he8dc8671_0_3 
                                                    >> 0x0000002eU)) 
                                           >> 0x00000010U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_o[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_522)) 
                                     << 0x00000010U) 
                                    | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_1293[0U]) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                             >> 1U)))))));
    vlSelfRef.tl_h_o[1U] = ((0xffff0000U & vlSelfRef.tl_h_o[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_522)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_1293[0U]) 
                                                           | (1U 
                                                              & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                                 >> 1U)))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_o[1U] = ((0x0000ffffU & vlSelfRef.tl_h_o[1U]) 
                            | ((IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____VdfgRegularize_he8dc8671_0_3 
                                        >> 0x0000002eU)) 
                               << 0x00000010U));
    vlSelfRef.tl_h_o[2U] = (3U & ((0x0000fffeU & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                                  << 1U)) 
                                  | (1U & ((IData)(
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____VdfgRegularize_he8dc8671_0_3 
                                                    >> 0x0000002eU)) 
                                           >> 0x00000010U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_o[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_522)) 
                                     << 0x00000010U) 
                                    | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_1294[0U]) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                             >> 2U)))))));
    vlSelfRef.tl_h_o[1U] = ((0xffff0000U & vlSelfRef.tl_h_o[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_522)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_1294[0U]) 
                                                           | (1U 
                                                              & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                                 >> 2U)))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_o[1U] = ((0x0000ffffU & vlSelfRef.tl_h_o[1U]) 
                            | ((IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____VdfgRegularize_he8dc8671_0_3 
                                        >> 0x0000002eU)) 
                               << 0x00000010U));
    vlSelfRef.tl_h_o[2U] = (3U & ((0x0000fffeU & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                                  << 1U)) 
                                  | (1U & ((IData)(
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____VdfgRegularize_he8dc8671_0_3 
                                                    >> 0x0000002eU)) 
                                           >> 0x00000010U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_o[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_523)) 
                                     << 0x00000010U) 
                                    | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1295[0U]) 
                                                       | (1U 
                                                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)))))));
    vlSelfRef.tl_h_o[1U] = ((0xffff0000U & vlSelfRef.tl_h_o[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_523)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1295[0U]) 
                                                           | (1U 
                                                              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_o[1U] = ((0x0000ffffU & vlSelfRef.tl_h_o[1U]) 
                            | ((IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                                        >> 0x0000002eU)) 
                               << 0x00000010U));
    vlSelfRef.tl_h_o[2U] = (3U & ((0x0000fffeU & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                                  << 1U)) 
                                  | (1U & ((IData)(
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                                                    >> 0x0000002eU)) 
                                           >> 0x00000010U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_o[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_523)) 
                                     << 0x00000010U) 
                                    | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1296[0U]) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                             >> 1U)))))));
    vlSelfRef.tl_h_o[1U] = ((0xffff0000U & vlSelfRef.tl_h_o[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_523)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1296[0U]) 
                                                           | (1U 
                                                              & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                                 >> 1U)))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_o[1U] = ((0x0000ffffU & vlSelfRef.tl_h_o[1U]) 
                            | ((IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                                        >> 0x0000002eU)) 
                               << 0x00000010U));
    vlSelfRef.tl_h_o[2U] = (3U & ((0x0000fffeU & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                                  << 1U)) 
                                  | (1U & ((IData)(
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                                                    >> 0x0000002eU)) 
                                           >> 0x00000010U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_o[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_523)) 
                                     << 0x00000010U) 
                                    | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1297[0U]) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                             >> 2U)))))));
    vlSelfRef.tl_h_o[1U] = ((0xffff0000U & vlSelfRef.tl_h_o[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_523)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1297[0U]) 
                                                           | (1U 
                                                              & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                                 >> 2U)))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_o[1U] = ((0x0000ffffU & vlSelfRef.tl_h_o[1U]) 
                            | ((IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                                        >> 0x0000002eU)) 
                               << 0x00000010U));
    vlSelfRef.tl_h_o[2U] = (3U & ((0x0000fffeU & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                                  << 1U)) 
                                  | (1U & ((IData)(
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                                                    >> 0x0000002eU)) 
                                           >> 0x00000010U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__0__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1298[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1298[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1298[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1298[3U]);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1287[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1287[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1287[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (0x00020000U 
                                                  == 
                                                  (0x00060000U 
                                                   & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U])));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = (1U | ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                                  | (0x00fffffeU & 
                                     (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                        ? (vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1060 
                                           >> 1U) : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__blanked_auser) 
                                      << 1U))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                 ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((0x00fff000U 
                                            & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)) 
                                               << 0x0000000cU)) 
                                           | ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__2__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1300[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1300[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1300[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1300[3U]);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1290[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1290[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1290[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (0x00020000U 
                                                  == 
                                                  (0x00060000U 
                                                   & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U])));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = (1U | ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                                  | (0x00fffffeU & 
                                     (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__3__KET____DOT__dev_select)
                                        ? (vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1060 
                                           >> 1U) : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__blanked_auser) 
                                      << 1U))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__3__KET____DOT__dev_select)
                                 ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__3__KET____DOT__dev_select)
                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((0x00fff000U 
                                            & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__3__KET____DOT__dev_select)) 
                                               << 0x0000000cU)) 
                                           | ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__4__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1302[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1302[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1302[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1302[3U]);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = (IData)(
                                                      ((0x00020000U 
                                                        == 
                                                        (0x00060000U 
                                                         & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.tl_d2h_o[1U])) 
                                                       & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.tl_d2h_o[2U] 
                                                          >> 1U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__5__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1303[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1303[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1303[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1303[3U]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1322[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o)))))) 
            << 1U) | (1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1322[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT____VdfgRegularize_h2c272aba_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1322[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = (1U & 
                                               ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__empty_rclk)) 
                                                & (~ (IData)(
                                                             (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o 
                                                              >> 0x00000030U)))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__2(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1303[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1303[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1303[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1303[3U]);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__3(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1322[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o)))))) 
            << 1U) | (1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1322[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT____VdfgRegularize_h2c272aba_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1322[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__6__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1304[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1304[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1304[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1304[3U]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1324[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o)))))) 
            << 1U) | (1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1324[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT____VdfgRegularize_h2c272aba_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1324[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = (1U & 
                                               ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__empty_rclk)) 
                                                & (~ (IData)(
                                                             (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o 
                                                              >> 0x00000030U)))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__2(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1304[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1304[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1304[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1304[3U]);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__3(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1324[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o)))))) 
            << 1U) | (1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1324[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT____VdfgRegularize_h2c272aba_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1324[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__7__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1305[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1305[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1305[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1305[3U]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1326[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o)))))) 
            << 1U) | (1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1326[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT____VdfgRegularize_h2c272aba_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1326[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = (1U & 
                                               ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__empty_rclk)) 
                                                & (~ (IData)(
                                                             (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o 
                                                              >> 0x00000030U)))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__2(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1305[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1305[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1305[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1305[3U]);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__3(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1326[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o)))))) 
            << 1U) | (1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1326[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT____VdfgRegularize_h2c272aba_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1326[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__8__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1306[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1306[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1306[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1306[3U]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1328[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o)))))) 
            << 1U) | (1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1328[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT____VdfgRegularize_h2c272aba_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1328[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = (1U & 
                                               ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__empty_rclk)) 
                                                & (~ (IData)(
                                                             (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o 
                                                              >> 0x00000030U)))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__2(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1306[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1306[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1306[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1306[3U]);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__3(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1328[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o)))))) 
            << 1U) | (1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1328[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT____VdfgRegularize_h2c272aba_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1328[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = (1U | ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                                  | (0x00fffffeU & 
                                     (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__9__KET____DOT__dev_select)
                                        ? (vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1060 
                                           >> 1U) : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__blanked_auser) 
                                      << 1U))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__9__KET____DOT__dev_select)
                                 ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__9__KET____DOT__dev_select)
                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((0x00fff000U 
                                            & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__9__KET____DOT__dev_select)) 
                                               << 0x0000000cU)) 
                                           | ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = (1U | ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                                  | (0x00fffffeU & 
                                     (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__10__KET____DOT__dev_select)
                                        ? (vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1060 
                                           >> 1U) : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__blanked_auser) 
                                      << 1U))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__10__KET____DOT__dev_select)
                                 ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__10__KET____DOT__dev_select)
                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((0x00fff000U 
                                            & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__10__KET____DOT__dev_select)) 
                                               << 0x0000000cU)) 
                                           | ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__11__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1309[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1309[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1309[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1309[3U]);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1296[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1296[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1296[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (0x00020000U 
                                                  == 
                                                  (0x00060000U 
                                                   & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U])));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = (1U | ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                                  | (0x00fffffeU & 
                                     (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__12__KET____DOT__dev_select)
                                        ? (vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1060 
                                           >> 1U) : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__blanked_auser) 
                                      << 1U))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__12__KET____DOT__dev_select)
                                 ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__12__KET____DOT__dev_select)
                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((0x00fff000U 
                                            & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__12__KET____DOT__dev_select)) 
                                               << 0x0000000cU)) 
                                           | ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__13__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__13__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = (1U | ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                                  | (0x00fffffeU & 
                                     (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__13__KET____DOT__dev_select)
                                        ? (vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1060 
                                           >> 1U) : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__blanked_auser) 
                                      << 1U))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__13__KET____DOT__dev_select)
                                 ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__13__KET____DOT__dev_select)
                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((0x00fff000U 
                                            & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__13__KET____DOT__dev_select)) 
                                               << 0x0000000cU)) 
                                           | ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__14__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__14__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = (1U | ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                                  | (0x00fffffeU & 
                                     (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__14__KET____DOT__dev_select)
                                        ? (vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1060 
                                           >> 1U) : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__blanked_auser) 
                                      << 1U))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__14__KET____DOT__dev_select)
                                 ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__14__KET____DOT__dev_select)
                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((0x00fff000U 
                                            & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__14__KET____DOT__dev_select)) 
                                               << 0x0000000cU)) 
                                           | ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__15__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__15__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = (1U | ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                                  | (0x00fffffeU & 
                                     (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__15__KET____DOT__dev_select)
                                        ? (vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1060 
                                           >> 1U) : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__blanked_auser) 
                                      << 1U))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__15__KET____DOT__dev_select)
                                 ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__15__KET____DOT__dev_select)
                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((0x00fff000U 
                                            & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__15__KET____DOT__dev_select)) 
                                               << 0x0000000cU)) 
                                           | ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__16__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__16__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = (1U | ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                                  | (0x00fffffeU & 
                                     (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__16__KET____DOT__dev_select)
                                        ? (vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1060 
                                           >> 1U) : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__blanked_auser) 
                                      << 1U))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__16__KET____DOT__dev_select)
                                 ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__16__KET____DOT__dev_select)
                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((0x00fff000U 
                                            & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__16__KET____DOT__dev_select)) 
                                               << 0x0000000cU)) 
                                           | ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__17__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__17__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = (1U | ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                                  | (0x00fffffeU & 
                                     (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__17__KET____DOT__dev_select)
                                        ? (vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1060 
                                           >> 1U) : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__blanked_auser) 
                                      << 1U))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__17__KET____DOT__dev_select)
                                 ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__17__KET____DOT__dev_select)
                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((0x00fff000U 
                                            & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__17__KET____DOT__dev_select)) 
                                               << 0x0000000cU)) 
                                           | ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__18__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__18__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = (1U | ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                                  | (0x00fffffeU & 
                                     (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__18__KET____DOT__dev_select)
                                        ? (vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1060 
                                           >> 1U) : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__blanked_auser) 
                                      << 1U))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__18__KET____DOT__dev_select)
                                 ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__18__KET____DOT__dev_select)
                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((0x00fff000U 
                                            & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__18__KET____DOT__dev_select)) 
                                               << 0x0000000cU)) 
                                           | ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__19__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__19__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = (1U | ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                                  | (0x00fffffeU & 
                                     (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__19__KET____DOT__dev_select)
                                        ? (vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1060 
                                           >> 1U) : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__blanked_auser) 
                                      << 1U))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__19__KET____DOT__dev_select)
                                 ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__19__KET____DOT__dev_select)
                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((0x00fff000U 
                                            & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__19__KET____DOT__dev_select)) 
                                               << 0x0000000cU)) 
                                           | ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__20__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__20__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = (1U | ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                                  | (0x00fffffeU & 
                                     (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__20__KET____DOT__dev_select)
                                        ? (vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1060 
                                           >> 1U) : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__blanked_auser) 
                                      << 1U))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__20__KET____DOT__dev_select)
                                 ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__20__KET____DOT__dev_select)
                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((0x00fff000U 
                                            & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__20__KET____DOT__dev_select)) 
                                               << 0x0000000cU)) 
                                           | ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = (1U | ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                                  | (0x00fffffeU & 
                                     (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__21__KET____DOT__dev_select)
                                        ? (vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1060 
                                           >> 1U) : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__blanked_auser) 
                                      << 1U))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__21__KET____DOT__dev_select)
                                 ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__21__KET____DOT__dev_select)
                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((0x00fff000U 
                                            & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__21__KET____DOT__dev_select)) 
                                               << 0x0000000cU)) 
                                           | ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__22__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__22__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = (1U | ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                                  | (0x00fffffeU & 
                                     (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__22__KET____DOT__dev_select)
                                        ? (vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1060 
                                           >> 1U) : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__blanked_auser) 
                                      << 1U))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__22__KET____DOT__dev_select)
                                 ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__22__KET____DOT__dev_select)
                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((0x00fff000U 
                                            & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__22__KET____DOT__dev_select)) 
                                               << 0x0000000cU)) 
                                           | ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__23__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__23__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = (1U | ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                                  | (0x00fffffeU & 
                                     (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__23__KET____DOT__dev_select)
                                        ? (vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1060 
                                           >> 1U) : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__blanked_auser) 
                                      << 1U))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__23__KET____DOT__dev_select)
                                 ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__23__KET____DOT__dev_select)
                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                            << 0x00000028U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                 >> 0x00000018U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                          << 0x00000028U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                               >> 0x00000018U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                          >> 0x00000018U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = (0x00001fffU & ((0x00fff000U 
                                            & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__23__KET____DOT__dev_select)) 
                                               << 0x0000000cU)) 
                                           | ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[3U])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1048[1U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_o[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_528)) 
                                     << 0x00000010U) 
                                    | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1322[0U]) 
                                                       | (1U 
                                                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)))))));
    vlSelfRef.tl_h_o[1U] = ((0xffff0000U & vlSelfRef.tl_h_o[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_528)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1322[0U]) 
                                                           | (1U 
                                                              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_o[1U] = ((0x0000ffffU & vlSelfRef.tl_h_o[1U]) 
                            | ((IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT____VdfgRegularize_h2c272aba_0_2 
                                        >> 0x0000002eU)) 
                               << 0x00000010U));
    vlSelfRef.tl_h_o[2U] = (3U & ((0x0000fffeU & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                                  << 1U)) 
                                  | (1U & ((IData)(
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT____VdfgRegularize_h2c272aba_0_2 
                                                    >> 0x0000002eU)) 
                                           >> 0x00000010U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_o[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_528)) 
                                     << 0x00000010U) 
                                    | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1323[0U]) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                             >> 1U)))))));
    vlSelfRef.tl_h_o[1U] = ((0xffff0000U & vlSelfRef.tl_h_o[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_528)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1323[0U]) 
                                                           | (1U 
                                                              & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                                 >> 1U)))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_o[1U] = ((0x0000ffffU & vlSelfRef.tl_h_o[1U]) 
                            | ((IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT____VdfgRegularize_h2c272aba_0_2 
                                        >> 0x0000002eU)) 
                               << 0x00000010U));
    vlSelfRef.tl_h_o[2U] = (3U & ((0x0000fffeU & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                                  << 1U)) 
                                  | (1U & ((IData)(
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT____VdfgRegularize_h2c272aba_0_2 
                                                    >> 0x0000002eU)) 
                                           >> 0x00000010U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_o[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_529)) 
                                     << 0x00000010U) 
                                    | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1324[0U]) 
                                                       | (1U 
                                                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)))))));
    vlSelfRef.tl_h_o[1U] = ((0xffff0000U & vlSelfRef.tl_h_o[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_529)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1324[0U]) 
                                                           | (1U 
                                                              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_o[1U] = ((0x0000ffffU & vlSelfRef.tl_h_o[1U]) 
                            | ((IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT____VdfgRegularize_h2c272aba_0_2 
                                        >> 0x0000002eU)) 
                               << 0x00000010U));
    vlSelfRef.tl_h_o[2U] = (3U & ((0x0000fffeU & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                                  << 1U)) 
                                  | (1U & ((IData)(
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT____VdfgRegularize_h2c272aba_0_2 
                                                    >> 0x0000002eU)) 
                                           >> 0x00000010U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_o[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_529)) 
                                     << 0x00000010U) 
                                    | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1325[0U]) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                             >> 1U)))))));
    vlSelfRef.tl_h_o[1U] = ((0xffff0000U & vlSelfRef.tl_h_o[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_529)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1325[0U]) 
                                                           | (1U 
                                                              & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                                 >> 1U)))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_o[1U] = ((0x0000ffffU & vlSelfRef.tl_h_o[1U]) 
                            | ((IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT____VdfgRegularize_h2c272aba_0_2 
                                        >> 0x0000002eU)) 
                               << 0x00000010U));
    vlSelfRef.tl_h_o[2U] = (3U & ((0x0000fffeU & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                                  << 1U)) 
                                  | (1U & ((IData)(
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT____VdfgRegularize_h2c272aba_0_2 
                                                    >> 0x0000002eU)) 
                                           >> 0x00000010U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_o[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_530)) 
                                     << 0x00000010U) 
                                    | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1326[0U]) 
                                                       | (1U 
                                                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)))))));
    vlSelfRef.tl_h_o[1U] = ((0xffff0000U & vlSelfRef.tl_h_o[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_530)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1326[0U]) 
                                                           | (1U 
                                                              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_o[1U] = ((0x0000ffffU & vlSelfRef.tl_h_o[1U]) 
                            | ((IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT____VdfgRegularize_h2c272aba_0_2 
                                        >> 0x0000002eU)) 
                               << 0x00000010U));
    vlSelfRef.tl_h_o[2U] = (3U & ((0x0000fffeU & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                                  << 1U)) 
                                  | (1U & ((IData)(
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT____VdfgRegularize_h2c272aba_0_2 
                                                    >> 0x0000002eU)) 
                                           >> 0x00000010U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_o[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_530)) 
                                     << 0x00000010U) 
                                    | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1327[0U]) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                             >> 1U)))))));
    vlSelfRef.tl_h_o[1U] = ((0xffff0000U & vlSelfRef.tl_h_o[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_530)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1327[0U]) 
                                                           | (1U 
                                                              & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                                 >> 1U)))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_o[1U] = ((0x0000ffffU & vlSelfRef.tl_h_o[1U]) 
                            | ((IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT____VdfgRegularize_h2c272aba_0_2 
                                        >> 0x0000002eU)) 
                               << 0x00000010U));
    vlSelfRef.tl_h_o[2U] = (3U & ((0x0000fffeU & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                                  << 1U)) 
                                  | (1U & ((IData)(
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT____VdfgRegularize_h2c272aba_0_2 
                                                    >> 0x0000002eU)) 
                                           >> 0x00000010U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_o[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_531)) 
                                     << 0x00000010U) 
                                    | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1328[0U]) 
                                                       | (1U 
                                                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)))))));
    vlSelfRef.tl_h_o[1U] = ((0xffff0000U & vlSelfRef.tl_h_o[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_531)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1328[0U]) 
                                                           | (1U 
                                                              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_o[1U] = ((0x0000ffffU & vlSelfRef.tl_h_o[1U]) 
                            | ((IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT____VdfgRegularize_h2c272aba_0_2 
                                        >> 0x0000002eU)) 
                               << 0x00000010U));
    vlSelfRef.tl_h_o[2U] = (3U & ((0x0000fffeU & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                                  << 1U)) 
                                  | (1U & ((IData)(
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT____VdfgRegularize_h2c272aba_0_2 
                                                    >> 0x0000002eU)) 
                                           >> 0x00000010U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_o[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_531)) 
                                     << 0x00000010U) 
                                    | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1329[0U]) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                             >> 1U)))))));
    vlSelfRef.tl_h_o[1U] = ((0xffff0000U & vlSelfRef.tl_h_o[1U]) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_531)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1329[0U]) 
                                                           | (1U 
                                                              & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                                 >> 1U)))))) 
                                       >> 0x00000020U)));
    vlSelfRef.tl_h_o[1U] = ((0x0000ffffU & vlSelfRef.tl_h_o[1U]) 
                            | ((IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT____VdfgRegularize_h2c272aba_0_2 
                                        >> 0x0000002eU)) 
                               << 0x00000010U));
    vlSelfRef.tl_h_o[2U] = (3U & ((0x0000fffeU & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                                  << 1U)) 
                                  | (1U & ((IData)(
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT____VdfgRegularize_h2c272aba_0_2 
                                                    >> 0x0000002eU)) 
                                           >> 0x00000010U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1288[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1288[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1288[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (0x00040000U 
                                                  == 
                                                  (0x00060000U 
                                                   & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U])));
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__0__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1330[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1330[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1330[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1330[3U]);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001bU) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 5U))
                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001cU))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x0000001cU))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000024U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x0000001cU))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000024U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x0000001cU))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000024U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x0000001cU)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000024U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 4U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x0000001cU)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1291[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1291[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1291[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (0x00040000U 
                                                  == 
                                                  (0x00060000U 
                                                   & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U])));
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__2__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1332[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1332[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1332[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1332[3U]);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__3__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001bU) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 5U))
                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__3__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001cU))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__3__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x0000001cU))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000024U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x0000001cU))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000024U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x0000001cU))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000024U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x0000001cU)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000024U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 4U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x0000001cU)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__3__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = (IData)(
                                                      ((0x00040000U 
                                                        == 
                                                        (0x00060000U 
                                                         & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.tl_d2h_o[1U])) 
                                                       & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.tl_d2h_o[2U] 
                                                          >> 1U)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__4__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1334[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1334[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1334[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1334[3U]);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1323[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o)))))) 
            << 1U) | (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1323[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT____VdfgRegularize_h2c272aba_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1323[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__5__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1335[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1335[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1335[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1335[3U]);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = (1U & 
                                               ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__empty_rclk)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o 
                                                           >> 0x00000030U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1325[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o)))))) 
            << 1U) | (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1325[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT____VdfgRegularize_h2c272aba_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1325[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__6__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1336[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1336[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1336[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1336[3U]);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = (1U & 
                                               ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__empty_rclk)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o 
                                                           >> 0x00000030U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1327[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o)))))) 
            << 1U) | (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1327[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT____VdfgRegularize_h2c272aba_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1327[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__7__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1337[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1337[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1337[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1337[3U]);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = (1U & 
                                               ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__empty_rclk)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o 
                                                           >> 0x00000030U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1329[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o)))))) 
            << 1U) | (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1329[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT____VdfgRegularize_h2c272aba_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1329[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT____VdfgRegularize_h2c272aba_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__8__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1338[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1338[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1338[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1338[3U]);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = (1U & 
                                               ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__empty_rclk)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o 
                                                           >> 0x00000030U))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__9__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001bU) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 5U))
                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__9__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001cU))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__9__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x0000001cU))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000024U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x0000001cU))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000024U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x0000001cU))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000024U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x0000001cU)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000024U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 4U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x0000001cU)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__9__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__10__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001bU) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 5U))
                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__10__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001cU))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__10__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x0000001cU))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000024U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x0000001cU))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000024U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x0000001cU))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000024U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x0000001cU)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000024U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 4U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x0000001cU)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__10__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1297[0U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1297[1U] 
        = (((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1297[2U] 
        = ((IData)((((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (0x00040000U 
                                                  == 
                                                  (0x00060000U 
                                                   & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U])));
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__11__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1341[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1341[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1341[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1341[3U]);
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__12__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001bU) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 5U))
                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__12__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001cU))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__12__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x0000001cU))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000024U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x0000001cU))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000024U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x0000001cU))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000024U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x0000001cU)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000024U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 4U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x0000001cU)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__12__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__13__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__13__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__13__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001bU) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 5U))
                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__13__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001cU))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__13__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x0000001cU))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000024U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x0000001cU))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000024U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x0000001cU))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000024U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x0000001cU)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000024U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 4U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x0000001cU)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__13__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__14__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__14__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__14__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001bU) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 5U))
                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__14__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001cU))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__14__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x0000001cU))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000024U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x0000001cU))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000024U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x0000001cU))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000024U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x0000001cU)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000024U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 4U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x0000001cU)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__14__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__15__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__15__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__15__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001bU) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 5U))
                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__15__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001cU))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__15__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x0000001cU))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000024U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x0000001cU))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000024U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x0000001cU))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000024U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x0000001cU)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000024U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 4U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x0000001cU)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__15__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__16__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__16__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__16__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001bU) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 5U))
                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__16__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001cU))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__16__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x0000001cU))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000024U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x0000001cU))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000024U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x0000001cU))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000024U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x0000001cU)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000024U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 4U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x0000001cU)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__16__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__17__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__17__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__17__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001bU) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 5U))
                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__17__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001cU))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__17__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x0000001cU))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000024U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x0000001cU))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000024U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x0000001cU))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000024U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x0000001cU)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000024U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 4U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x0000001cU)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__17__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__18__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__18__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__18__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001bU) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 5U))
                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__18__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001cU))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__18__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x0000001cU))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000024U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x0000001cU))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000024U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x0000001cU))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000024U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x0000001cU)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000024U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 4U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x0000001cU)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__18__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__19__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__19__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__19__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001bU) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 5U))
                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__19__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001cU))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__19__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x0000001cU))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000024U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x0000001cU))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000024U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x0000001cU))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000024U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x0000001cU)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000024U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 4U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x0000001cU)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__19__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__20__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__20__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__20__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001bU) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 5U))
                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__20__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001cU))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__20__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x0000001cU))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000024U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x0000001cU))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000024U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x0000001cU))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000024U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x0000001cU)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000024U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 4U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x0000001cU)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__20__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__21__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001bU) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 5U))
                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__21__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001cU))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__21__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x0000001cU))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000024U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x0000001cU))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000024U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x0000001cU))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000024U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x0000001cU)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000024U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 4U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x0000001cU)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__21__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__22__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__22__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__22__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001bU) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 5U))
                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__22__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001cU))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__22__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x0000001cU))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000024U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x0000001cU))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000024U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x0000001cU))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000024U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x0000001cU)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000024U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 4U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x0000001cU)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__22__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__23__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__23__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__23__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  << 0x0000001bU) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 5U))
                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__23__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001cU))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__23__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x0000001cU))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000024U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x0000001cU))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000024U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x0000001cU))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000024U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x0000001cU)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000024U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 4U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x0000001cU)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__23__KET____DOT__dev_select)) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__0__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__1__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__2__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__3__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__4__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__5__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__6__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__7__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__8__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__10__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__11__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__12__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__13__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__13__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__13__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__13__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__13__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wready_o = (1U & 
                                               (~ (
                                                   (((~ 
                                                      ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__rst_done) 
                                                       & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__shadow_rst_done))) 
                                                     | (((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27) 
                                                         | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_29) 
                                                            | ((0x0eU 
                                                                == 
                                                                (0x0000001fU 
                                                                 & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                     << 3U) 
                                                                    | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       >> 0x0000001dU)))) 
                                                               | ((0x0fU 
                                                                   == 
                                                                   (0x0000001fU 
                                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                        << 3U) 
                                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                          >> 0x0000001dU)))) 
                                                                  | ((0x10U 
                                                                      == 
                                                                      (0x0000001fU 
                                                                       & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                           << 3U) 
                                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                             >> 0x0000001dU)))) 
                                                                     | (0x11U 
                                                                        == 
                                                                        (0x0000001fU 
                                                                         & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                             << 3U) 
                                                                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               >> 0x0000001dU)))))))))
                                                         ? 
                                                        ((0x0aU 
                                                          == 
                                                          (0x0000001fU 
                                                           & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                               << 3U) 
                                                              | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001dU))))
                                                          ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__src_busy_q)
                                                          : 
                                                         ((0x0bU 
                                                           == 
                                                           (0x0000001fU 
                                                            & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                << 3U) 
                                                               | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                  >> 0x0000001dU))))
                                                           ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_cdc__DOT__src_busy_q)
                                                           : 
                                                          ((0x0cU 
                                                            == 
                                                            (0x0000001fU 
                                                             & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                 << 3U) 
                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x0000001dU))))
                                                            ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__src_busy_q)
                                                            : 
                                                           ((0x0dU 
                                                             == 
                                                             (0x0000001fU 
                                                              & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                  << 3U) 
                                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                    >> 0x0000001dU))))
                                                             ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_cdc__DOT__src_busy_q)
                                                             : 
                                                            ((0x0eU 
                                                              == 
                                                              (0x0000001fU 
                                                               & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                   << 3U) 
                                                                  | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                     >> 0x0000001dU))))
                                                              ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__src_busy_q)
                                                              : 
                                                             ((0x0fU 
                                                               == 
                                                               (0x0000001fU 
                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                    << 3U) 
                                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                      >> 0x0000001dU))))
                                                               ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__src_busy_q)
                                                               : 
                                                              ((0x10U 
                                                                == 
                                                                (0x0000001fU 
                                                                 & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                     << 3U) 
                                                                    | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       >> 0x0000001dU))))
                                                                ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__src_busy_q)
                                                                : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_cdc__DOT__src_busy_q))))))))
                                                         : 
                                                        ((0x12U 
                                                          == 
                                                          (0x0000001fU 
                                                           & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                               << 3U) 
                                                              | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001dU))))
                                                          ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__src_busy_q)
                                                          : 
                                                         ((0x13U 
                                                           == 
                                                           (0x0000001fU 
                                                            & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                << 3U) 
                                                               | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                  >> 0x0000001dU)))) 
                                                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_cdc__DOT__src_busy_q))))) 
                                                    & (IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                                   | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__14__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__14__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__14__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__14__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__14__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wready_o = (1U & 
                                               (~ (
                                                   ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg_busy_sel) 
                                                    & (IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                                   | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__16__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__16__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__16__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__16__KET____DOT__dev_select)
                                                 ? 
                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[0U]
                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__16__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x00000017U))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__16__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000017U))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000029U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 9U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x00000017U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000029U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 9U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x00000017U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000029U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x00000017U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000029U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000017U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__17__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__17__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__17__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__18__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__18__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__18__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__19__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__19__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wready_o = (1U & 
                                               (~ (
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__rst_done) 
                                                     & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__shadow_rst_done))) 
                                                   | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__19__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__19__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__19__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__20__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__20__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__20__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__21__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__21__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = ((0xff000000U & vlSelfRef.tl_h_i[0U]) 
                            | ((0x00fffffeU & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__21__KET____DOT__dev_select)
                                                 ? 
                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[0U]
                                                 : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__blanked_auser) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o)))));
    vlSelfRef.tl_h_i[0U] = ((0x00ffffffU & vlSelfRef.tl_h_i[0U]) 
                            | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__21__KET____DOT__dev_select)
                                 ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x00000017U))
                                 : 0xffffffffU) << 0x00000018U));
    vlSelfRef.tl_h_i[1U] = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__21__KET____DOT__dev_select)
                               ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000017U))
                               : 0xffffffffU) >> 8U) 
                            | ((IData)((0x000fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                            << 0x00000029U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                               << 9U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x00000017U))))) 
                               << 0x00000018U));
    vlSelfRef.tl_h_i[2U] = (((IData)((0x000fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                          << 0x00000029U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                             << 9U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                               >> 0x00000017U))))) 
                             >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                     << 0x00000029U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                          >> 0x00000017U)))) 
                                                >> 0x00000020U)) 
                                       << 0x00000018U));
    vlSelfRef.tl_h_i[3U] = ((0x00001000U & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(
                                                      ((0x000fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                            << 0x00000029U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                                 >> 0x00000017U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U)));
    vlSelfRef.tl_h_i[3U] = ((0x00000fffU & vlSelfRef.tl_h_i[3U]) 
                            | (0x00001fffU & ((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                                              << 0x0000000cU)));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__22__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__22__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__22__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__23__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__23__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__23__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__23__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__23__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wready_o = (1U & 
                                               (~ (
                                                   ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__reg_busy_sel) 
                                                    & (IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                                   | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__24__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__24__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__24__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__24__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__24__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wready_o = (1U & 
                                               (~ (
                                                   ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__reg_busy_sel) 
                                                    & (IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                                   | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__25__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__25__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__25__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__25__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__25__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wready_o = (1U & 
                                               (~ (
                                                   ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__reg_busy_sel) 
                                                    & (IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                                   | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__26__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__26__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__26__KET____DOT__dev_select));
}

void Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__26__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__26__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wready_o = (1U & 
                                               (~ (
                                                   ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg_busy_sel) 
                                                    & (IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                                   | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
}
