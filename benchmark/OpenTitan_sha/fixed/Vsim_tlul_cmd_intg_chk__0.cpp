// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__0__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__0__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__0__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__0__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_374))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_374))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_374))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_374))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_374))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_374))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_374))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd))))))))));
    vlSelfRef.tl_i[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd)) 
                                   << 0x00000018U) 
                                  | (QData)((IData)(
                                                    ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_374 
                                                      << 1U) 
                                                     | (1U 
                                                        & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_i[1U] = ((0xff000000U & vlSelfRef.tl_i[1U]) 
                          | (IData)(((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd)) 
                                       << 0x00000018U) 
                                      | (QData)((IData)(
                                                        ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_374 
                                                          << 1U) 
                                                         | (1U 
                                                            & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                                     >> 0x00000020U)));
    vlSelfRef.tl_i[1U] = ((0x00ffffffU & vlSelfRef.tl_i[1U]) 
                          | ((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__20__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__20__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                           >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__20__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[3U] = (0x00001fffU & ((IData)(((
                                                   ((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__20__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = (((((((((2U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                         >> 0x0000001eU)) ^ ((0x52U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                             >> 0x0000001eU)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                              >> 0x0000001dU)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                               >> 0x0000001cU)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                              >> 0x0000001bU)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                               >> 0x0000001aU)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                               >> 0x00000019U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                                >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                            >> 0x0000000fU)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                             >> 0x0000000eU)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                              >> 0x0000000dU)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                               >> 0x0000000cU)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                              >> 0x0000000bU)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                               >> 0x0000000aU)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                               >> 9U)) << 1U)) | (1U 
                                                  & ((0x45U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                                                      >> 8U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                                     >> 7U)) << 1U)) 
                          | (1U & ((0x2aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                                      >> 6U)))) << 6U) 
                        | (((2U & (((0x15U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                                       >> 5U)) << 1U)) 
                            | (1U & ((0x1aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                                        >> 4U)))) << 4U)) 
                       | ((((2U & (((0x34U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                                       >> 3U)) << 1U)) 
                            | (1U & ((0x61U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                                        >> 2U)))) << 2U) 
                          | ((2U & (((0x54U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd 
                                        >> 1U)) << 1U)) 
                             | (1U & ((0x19U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                      ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_rega10__DOT__wd)))))));
    __Vfunc_extract_h2d_cmd_intg__0__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__0__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__0__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__0__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__0__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 7627355536089093437ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__0__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__0__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__0__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__0__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__0__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__0__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__0__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__0__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__0__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__0__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__0__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__0__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_374 
                                                                                >> 7U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_64(
                                                                    (0x41f7bb56d5525488ULL 
                                                                     & (0x5400000000000000ULL 
                                                                        ^ 
                                                                        (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_374 
                                                                                >> 7U)))) 
                                                                          << 0x00000039U) 
                                                                         | vlSelfRef.__PVT__cmd)))))) 
                                                 << 5U) 
                                                | (((2U 
                                                     & (VL_REDXOR_64(
                                                                     (0x21ef76cdb2c93244ULL 
                                                                      & (0x5400000000000000ULL 
                                                                         ^ 
                                                                         (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_374 
                                                                                >> 7U)))) 
                                                                           << 0x00000039U) 
                                                                          | vlSelfRef.__PVT__cmd)))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x11deee3b8e388e22ULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_374 
                                                                                >> 7U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & (VL_REDXOR_64(
                                                                   (0x09bde1f87e0781e1ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_374 
                                                                                >> 7U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (VL_REDXOR_64(
                                                                      (0x057c1ff801ff801fULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_374 
                                                                                >> 7U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_64(
                                                                       (0x0303fff800007fffULL 
                                                                        & (0x5400000000000000ULL 
                                                                           ^ 
                                                                           (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_374 
                                                                                >> 7U)))) 
                                                                             << 0x00000039U) 
                                                                            | vlSelfRef.__PVT__cmd))))))));
    vlSelfRef.__PVT__u_chk__DOT__data_o = (((QData)((IData)(
                                                            (((((((((0x7fU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 3U) 
                                                                   | ((0x7cU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U)) 
                                                                  | (((0x7aU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 1U) 
                                                                     | (0x76U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                 << 9U) 
                                                                | (((0x6eU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 8U) 
                                                                   | (((0x5eU 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 7U) 
                                                                      | ((0x3eU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 6U)))) 
                                                               | ((((0x79U 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((0x75U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 4U) 
                                                                      | ((0x6dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 3U))) 
                                                                  | (((0x5dU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U) 
                                                                     | (((0x3dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 1U) 
                                                                        | (0x73U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))))) 
                                                              << 0x0000000cU) 
                                                             | ((((((0x6bU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((IData)(
                                                                               ((vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000002aU) 
                                                                                ^ 
                                                                                (0x5bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                       << 4U) 
                                                                      | (8U 
                                                                         & (((0x3bU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000029U))) 
                                                                            << 3U)))) 
                                                                  | ((4U 
                                                                      & (((0x67U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000028U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x57U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000027U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x37U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000026U))))))) 
                                                                 << 6U) 
                                                                | ((((4U 
                                                                      & (((0x4fU 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000025U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x2fU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000024U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x1fU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000023U)))))) 
                                                                    << 3U) 
                                                                   | ((4U 
                                                                       & (((0x70U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000022U))) 
                                                                          << 2U)) 
                                                                      | ((2U 
                                                                          & (((0x68U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000021U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x58U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000020U))))))))))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             ((((((((2U 
                                                                     & (((0x38U 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001fU))) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & ((0x64U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001eU))))) 
                                                                   << 6U) 
                                                                  | (((2U 
                                                                       & (((0x54U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001dU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x34U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001cU))))) 
                                                                     << 4U)) 
                                                                 | ((((2U 
                                                                       & (((0x4cU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001bU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x2cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001aU))))) 
                                                                     << 2U) 
                                                                    | ((2U 
                                                                        & (((0x1cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000019U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x62U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000018U))))))) 
                                                                << 0x00000018U) 
                                                               | ((((((2U 
                                                                       & (((0x52U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000017U))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x32U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000016U))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x4aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000015U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x2aU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000014U))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x1aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000013U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x46U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000012U))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x26U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000011U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x16U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000010U))))))) 
                                                                  << 0x00000010U)) 
                                                              | (((((((2U 
                                                                       & (((0x0eU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000fU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x61U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000eU))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x51U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000dU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x31U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000cU))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x49U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000bU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x29U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000aU))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x19U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 9U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x45U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 8U))))))) 
                                                                  << 8U) 
                                                                 | (((((2U 
                                                                        & (((0x25U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 7U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x15U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 6U))))) 
                                                                      << 6U) 
                                                                     | (((2U 
                                                                          & (((0x0dU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 5U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x43U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 4U))))) 
                                                                        << 4U)) 
                                                                    | ((((2U 
                                                                          & (((0x23U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 3U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x13U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 2U))))) 
                                                                        << 2U) 
                                                                       | ((2U 
                                                                           & (((0x0bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 1U))) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & ((7U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                                ^ (IData)(vlSelfRef.__PVT__cmd)))))))))));
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__20__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__1__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__1__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__1__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__1__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_355))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_355))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_355))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_355))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_355))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_355))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_355))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o))))))))));
    vlSelfRef.tl_i[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)) 
                                   << 0x00000018U) 
                                  | (QData)((IData)(
                                                    ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_355 
                                                      << 1U) 
                                                     | (1U 
                                                        & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_i[1U] = ((0xff000000U & vlSelfRef.tl_i[1U]) 
                          | (IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)) 
                                       << 0x00000018U) 
                                      | (QData)((IData)(
                                                        ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_355 
                                                          << 1U) 
                                                         | (1U 
                                                            & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                                     >> 0x00000020U)));
    vlSelfRef.tl_i[1U] = ((0x00ffffffU & vlSelfRef.tl_i[1U]) 
                          | ((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                           >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[3U] = (0x00001fffU & ((IData)(((
                                                   ((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = (((((((((2U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                         >> 0x0000001eU)) ^ ((0x52U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 0x0000001eU)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000001dU)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000001cU)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000001bU)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000001aU)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x00000019U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                            >> 0x0000000fU)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 0x0000000eU)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000000dU)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000000cU)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000000bU)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000000aU)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 9U)) << 1U)) | (1U 
                                                  & ((0x45U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 8U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                     >> 7U)) << 1U)) 
                          | (1U & ((0x2aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                      >> 6U)))) << 6U) 
                        | (((2U & (((0x15U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                       >> 5U)) << 1U)) 
                            | (1U & ((0x1aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 4U)))) << 4U)) 
                       | ((((2U & (((0x34U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                       >> 3U)) << 1U)) 
                            | (1U & ((0x61U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 2U)))) << 2U) 
                          | ((2U & (((0x54U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 1U)) << 1U)) 
                             | (1U & ((0x19U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                      ^ vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))));
    __Vfunc_extract_h2d_cmd_intg__1__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__1__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__1__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__1__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__1__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 3930434000144647752ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__1__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__1__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__1__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__1__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__1__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__1__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__1__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__1__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__1__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__1__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__1__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__1__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_355 
                                                                                >> 7U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_64(
                                                                    (0x41f7bb56d5525488ULL 
                                                                     & (0x5400000000000000ULL 
                                                                        ^ 
                                                                        (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_355 
                                                                                >> 7U)))) 
                                                                          << 0x00000039U) 
                                                                         | vlSelfRef.__PVT__cmd)))))) 
                                                 << 5U) 
                                                | (((2U 
                                                     & (VL_REDXOR_64(
                                                                     (0x21ef76cdb2c93244ULL 
                                                                      & (0x5400000000000000ULL 
                                                                         ^ 
                                                                         (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_355 
                                                                                >> 7U)))) 
                                                                           << 0x00000039U) 
                                                                          | vlSelfRef.__PVT__cmd)))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x11deee3b8e388e22ULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_355 
                                                                                >> 7U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & (VL_REDXOR_64(
                                                                   (0x09bde1f87e0781e1ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_355 
                                                                                >> 7U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (VL_REDXOR_64(
                                                                      (0x057c1ff801ff801fULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_355 
                                                                                >> 7U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_64(
                                                                       (0x0303fff800007fffULL 
                                                                        & (0x5400000000000000ULL 
                                                                           ^ 
                                                                           (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_355 
                                                                                >> 7U)))) 
                                                                             << 0x00000039U) 
                                                                            | vlSelfRef.__PVT__cmd))))))));
    vlSelfRef.__PVT__u_chk__DOT__data_o = (((QData)((IData)(
                                                            (((((((((0x7fU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 3U) 
                                                                   | ((0x7cU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U)) 
                                                                  | (((0x7aU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 1U) 
                                                                     | (0x76U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                 << 9U) 
                                                                | (((0x6eU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 8U) 
                                                                   | (((0x5eU 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 7U) 
                                                                      | ((0x3eU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 6U)))) 
                                                               | ((((0x79U 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((0x75U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 4U) 
                                                                      | ((0x6dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 3U))) 
                                                                  | (((0x5dU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U) 
                                                                     | (((0x3dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 1U) 
                                                                        | (0x73U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))))) 
                                                              << 0x0000000cU) 
                                                             | ((((((0x6bU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((IData)(
                                                                               ((vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000002aU) 
                                                                                ^ 
                                                                                (0x5bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                       << 4U) 
                                                                      | (8U 
                                                                         & (((0x3bU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000029U))) 
                                                                            << 3U)))) 
                                                                  | ((4U 
                                                                      & (((0x67U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000028U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x57U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000027U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x37U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000026U))))))) 
                                                                 << 6U) 
                                                                | ((((4U 
                                                                      & (((0x4fU 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000025U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x2fU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000024U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x1fU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000023U)))))) 
                                                                    << 3U) 
                                                                   | ((4U 
                                                                       & (((0x70U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000022U))) 
                                                                          << 2U)) 
                                                                      | ((2U 
                                                                          & (((0x68U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000021U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x58U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000020U))))))))))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             ((((((((2U 
                                                                     & (((0x38U 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001fU))) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & ((0x64U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001eU))))) 
                                                                   << 6U) 
                                                                  | (((2U 
                                                                       & (((0x54U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001dU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x34U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001cU))))) 
                                                                     << 4U)) 
                                                                 | ((((2U 
                                                                       & (((0x4cU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001bU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x2cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001aU))))) 
                                                                     << 2U) 
                                                                    | ((2U 
                                                                        & (((0x1cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000019U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x62U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000018U))))))) 
                                                                << 0x00000018U) 
                                                               | ((((((2U 
                                                                       & (((0x52U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000017U))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x32U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000016U))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x4aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000015U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x2aU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000014U))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x1aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000013U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x46U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000012U))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x26U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000011U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x16U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000010U))))))) 
                                                                  << 0x00000010U)) 
                                                              | (((((((2U 
                                                                       & (((0x0eU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000fU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x61U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000eU))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x51U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000dU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x31U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000cU))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x49U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000bU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x29U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000aU))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x19U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 9U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x45U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 8U))))))) 
                                                                  << 8U) 
                                                                 | (((((2U 
                                                                        & (((0x25U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 7U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x15U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 6U))))) 
                                                                      << 6U) 
                                                                     | (((2U 
                                                                          & (((0x0dU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 5U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x43U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 4U))))) 
                                                                        << 4U)) 
                                                                    | ((((2U 
                                                                          & (((0x23U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 3U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x13U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 2U))))) 
                                                                        << 2U) 
                                                                       | ((2U 
                                                                           & (((0x0bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 1U))) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & ((7U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                                ^ (IData)(vlSelfRef.__PVT__cmd)))))))))));
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__2__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__2__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__2__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__2__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_356))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_356))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_356))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_356))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_356))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_356))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_356))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o))))))))));
    vlSelfRef.tl_i[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)) 
                                   << 0x00000018U) 
                                  | (QData)((IData)(
                                                    ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_356 
                                                      << 1U) 
                                                     | (1U 
                                                        & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_i[1U] = ((0xff000000U & vlSelfRef.tl_i[1U]) 
                          | (IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)) 
                                       << 0x00000018U) 
                                      | (QData)((IData)(
                                                        ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_356 
                                                          << 1U) 
                                                         | (1U 
                                                            & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                                     >> 0x00000020U)));
    vlSelfRef.tl_i[1U] = ((0x00ffffffU & vlSelfRef.tl_i[1U]) 
                          | ((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                           >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[3U] = (0x00001fffU & ((IData)(((
                                                   ((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = (((((((((2U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                         >> 0x0000001eU)) ^ ((0x52U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 0x0000001eU)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000001dU)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000001cU)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000001bU)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000001aU)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x00000019U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                            >> 0x0000000fU)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 0x0000000eU)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000000dU)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000000cU)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000000bU)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000000aU)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 9U)) << 1U)) | (1U 
                                                  & ((0x45U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 8U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                     >> 7U)) << 1U)) 
                          | (1U & ((0x2aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                      >> 6U)))) << 6U) 
                        | (((2U & (((0x15U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                       >> 5U)) << 1U)) 
                            | (1U & ((0x1aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 4U)))) << 4U)) 
                       | ((((2U & (((0x34U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                       >> 3U)) << 1U)) 
                            | (1U & ((0x61U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 2U)))) << 2U) 
                          | ((2U & (((0x54U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 1U)) << 1U)) 
                             | (1U & ((0x19U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                      ^ vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))));
    __Vfunc_extract_h2d_cmd_intg__2__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__2__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__2__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__2__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__2__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 681419010538678306ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__2__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__2__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__2__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__2__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__2__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__2__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__2__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__2__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__2__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__2__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__2__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__2__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_356 
                                                                                >> 7U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_64(
                                                                    (0x41f7bb56d5525488ULL 
                                                                     & (0x5400000000000000ULL 
                                                                        ^ 
                                                                        (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_356 
                                                                                >> 7U)))) 
                                                                          << 0x00000039U) 
                                                                         | vlSelfRef.__PVT__cmd)))))) 
                                                 << 5U) 
                                                | (((2U 
                                                     & (VL_REDXOR_64(
                                                                     (0x21ef76cdb2c93244ULL 
                                                                      & (0x5400000000000000ULL 
                                                                         ^ 
                                                                         (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_356 
                                                                                >> 7U)))) 
                                                                           << 0x00000039U) 
                                                                          | vlSelfRef.__PVT__cmd)))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x11deee3b8e388e22ULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_356 
                                                                                >> 7U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & (VL_REDXOR_64(
                                                                   (0x09bde1f87e0781e1ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_356 
                                                                                >> 7U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (VL_REDXOR_64(
                                                                      (0x057c1ff801ff801fULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_356 
                                                                                >> 7U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_64(
                                                                       (0x0303fff800007fffULL 
                                                                        & (0x5400000000000000ULL 
                                                                           ^ 
                                                                           (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_356 
                                                                                >> 7U)))) 
                                                                             << 0x00000039U) 
                                                                            | vlSelfRef.__PVT__cmd))))))));
    vlSelfRef.__PVT__u_chk__DOT__data_o = (((QData)((IData)(
                                                            (((((((((0x7fU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 3U) 
                                                                   | ((0x7cU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U)) 
                                                                  | (((0x7aU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 1U) 
                                                                     | (0x76U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                 << 9U) 
                                                                | (((0x6eU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 8U) 
                                                                   | (((0x5eU 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 7U) 
                                                                      | ((0x3eU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 6U)))) 
                                                               | ((((0x79U 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((0x75U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 4U) 
                                                                      | ((0x6dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 3U))) 
                                                                  | (((0x5dU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U) 
                                                                     | (((0x3dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 1U) 
                                                                        | (0x73U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))))) 
                                                              << 0x0000000cU) 
                                                             | ((((((0x6bU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((IData)(
                                                                               ((vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000002aU) 
                                                                                ^ 
                                                                                (0x5bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                       << 4U) 
                                                                      | (8U 
                                                                         & (((0x3bU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000029U))) 
                                                                            << 3U)))) 
                                                                  | ((4U 
                                                                      & (((0x67U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000028U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x57U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000027U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x37U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000026U))))))) 
                                                                 << 6U) 
                                                                | ((((4U 
                                                                      & (((0x4fU 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000025U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x2fU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000024U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x1fU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000023U)))))) 
                                                                    << 3U) 
                                                                   | ((4U 
                                                                       & (((0x70U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000022U))) 
                                                                          << 2U)) 
                                                                      | ((2U 
                                                                          & (((0x68U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000021U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x58U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000020U))))))))))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             ((((((((2U 
                                                                     & (((0x38U 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001fU))) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & ((0x64U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001eU))))) 
                                                                   << 6U) 
                                                                  | (((2U 
                                                                       & (((0x54U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001dU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x34U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001cU))))) 
                                                                     << 4U)) 
                                                                 | ((((2U 
                                                                       & (((0x4cU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001bU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x2cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001aU))))) 
                                                                     << 2U) 
                                                                    | ((2U 
                                                                        & (((0x1cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000019U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x62U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000018U))))))) 
                                                                << 0x00000018U) 
                                                               | ((((((2U 
                                                                       & (((0x52U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000017U))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x32U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000016U))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x4aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000015U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x2aU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000014U))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x1aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000013U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x46U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000012U))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x26U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000011U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x16U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000010U))))))) 
                                                                  << 0x00000010U)) 
                                                              | (((((((2U 
                                                                       & (((0x0eU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000fU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x61U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000eU))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x51U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000dU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x31U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000cU))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x49U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000bU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x29U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000aU))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x19U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 9U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x45U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 8U))))))) 
                                                                  << 8U) 
                                                                 | (((((2U 
                                                                        & (((0x25U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 7U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x15U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 6U))))) 
                                                                      << 6U) 
                                                                     | (((2U 
                                                                          & (((0x0dU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 5U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x43U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 4U))))) 
                                                                        << 4U)) 
                                                                    | ((((2U 
                                                                          & (((0x23U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 3U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x13U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 2U))))) 
                                                                        << 2U) 
                                                                       | ((2U 
                                                                           & (((0x0bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 1U))) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & ((7U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                                ^ (IData)(vlSelfRef.__PVT__cmd)))))))))));
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__3__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__3__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__3__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__3__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_357))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_357))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_357))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_357))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_357))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_357))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_357))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o))))))))));
    vlSelfRef.tl_i[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)) 
                                   << 0x00000018U) 
                                  | (QData)((IData)(
                                                    ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_357 
                                                      << 1U) 
                                                     | (1U 
                                                        & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_i[1U] = ((0xff000000U & vlSelfRef.tl_i[1U]) 
                          | (IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)) 
                                       << 0x00000018U) 
                                      | (QData)((IData)(
                                                        ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_357 
                                                          << 1U) 
                                                         | (1U 
                                                            & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                                     >> 0x00000020U)));
    vlSelfRef.tl_i[1U] = ((0x00ffffffU & vlSelfRef.tl_i[1U]) 
                          | ((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                           >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[3U] = (0x00001fffU & ((IData)(((
                                                   ((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = (((((((((2U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                         >> 0x0000001eU)) ^ ((0x52U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 0x0000001eU)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000001dU)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000001cU)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000001bU)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000001aU)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x00000019U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                            >> 0x0000000fU)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 0x0000000eU)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000000dU)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000000cU)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000000bU)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000000aU)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 9U)) << 1U)) | (1U 
                                                  & ((0x45U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 8U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                     >> 7U)) << 1U)) 
                          | (1U & ((0x2aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                      >> 6U)))) << 6U) 
                        | (((2U & (((0x15U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                       >> 5U)) << 1U)) 
                            | (1U & ((0x1aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 4U)))) << 4U)) 
                       | ((((2U & (((0x34U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                       >> 3U)) << 1U)) 
                            | (1U & ((0x61U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 2U)))) << 2U) 
                          | ((2U & (((0x54U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 1U)) << 1U)) 
                             | (1U & ((0x19U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                      ^ vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))));
    __Vfunc_extract_h2d_cmd_intg__3__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__3__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__3__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__3__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__3__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 16488010975756838426ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__3__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__3__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__3__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__3__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__3__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__3__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__3__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_357 
                                                                                >> 7U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_64(
                                                                    (0x41f7bb56d5525488ULL 
                                                                     & (0x5400000000000000ULL 
                                                                        ^ 
                                                                        (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_357 
                                                                                >> 7U)))) 
                                                                          << 0x00000039U) 
                                                                         | vlSelfRef.__PVT__cmd)))))) 
                                                 << 5U) 
                                                | (((2U 
                                                     & (VL_REDXOR_64(
                                                                     (0x21ef76cdb2c93244ULL 
                                                                      & (0x5400000000000000ULL 
                                                                         ^ 
                                                                         (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_357 
                                                                                >> 7U)))) 
                                                                           << 0x00000039U) 
                                                                          | vlSelfRef.__PVT__cmd)))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x11deee3b8e388e22ULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_357 
                                                                                >> 7U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & (VL_REDXOR_64(
                                                                   (0x09bde1f87e0781e1ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_357 
                                                                                >> 7U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (VL_REDXOR_64(
                                                                      (0x057c1ff801ff801fULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_357 
                                                                                >> 7U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_64(
                                                                       (0x0303fff800007fffULL 
                                                                        & (0x5400000000000000ULL 
                                                                           ^ 
                                                                           (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_357 
                                                                                >> 7U)))) 
                                                                             << 0x00000039U) 
                                                                            | vlSelfRef.__PVT__cmd))))))));
    vlSelfRef.__PVT__u_chk__DOT__data_o = (((QData)((IData)(
                                                            (((((((((0x7fU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 3U) 
                                                                   | ((0x7cU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U)) 
                                                                  | (((0x7aU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 1U) 
                                                                     | (0x76U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                 << 9U) 
                                                                | (((0x6eU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 8U) 
                                                                   | (((0x5eU 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 7U) 
                                                                      | ((0x3eU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 6U)))) 
                                                               | ((((0x79U 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((0x75U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 4U) 
                                                                      | ((0x6dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 3U))) 
                                                                  | (((0x5dU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U) 
                                                                     | (((0x3dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 1U) 
                                                                        | (0x73U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))))) 
                                                              << 0x0000000cU) 
                                                             | ((((((0x6bU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((IData)(
                                                                               ((vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000002aU) 
                                                                                ^ 
                                                                                (0x5bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                       << 4U) 
                                                                      | (8U 
                                                                         & (((0x3bU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000029U))) 
                                                                            << 3U)))) 
                                                                  | ((4U 
                                                                      & (((0x67U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000028U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x57U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000027U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x37U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000026U))))))) 
                                                                 << 6U) 
                                                                | ((((4U 
                                                                      & (((0x4fU 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000025U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x2fU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000024U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x1fU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000023U)))))) 
                                                                    << 3U) 
                                                                   | ((4U 
                                                                       & (((0x70U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000022U))) 
                                                                          << 2U)) 
                                                                      | ((2U 
                                                                          & (((0x68U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000021U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x58U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000020U))))))))))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             ((((((((2U 
                                                                     & (((0x38U 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001fU))) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & ((0x64U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001eU))))) 
                                                                   << 6U) 
                                                                  | (((2U 
                                                                       & (((0x54U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001dU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x34U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001cU))))) 
                                                                     << 4U)) 
                                                                 | ((((2U 
                                                                       & (((0x4cU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001bU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x2cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001aU))))) 
                                                                     << 2U) 
                                                                    | ((2U 
                                                                        & (((0x1cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000019U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x62U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000018U))))))) 
                                                                << 0x00000018U) 
                                                               | ((((((2U 
                                                                       & (((0x52U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000017U))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x32U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000016U))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x4aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000015U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x2aU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000014U))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x1aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000013U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x46U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000012U))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x26U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000011U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x16U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000010U))))))) 
                                                                  << 0x00000010U)) 
                                                              | (((((((2U 
                                                                       & (((0x0eU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000fU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x61U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000eU))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x51U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000dU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x31U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000cU))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x49U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000bU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x29U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000aU))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x19U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 9U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x45U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 8U))))))) 
                                                                  << 8U) 
                                                                 | (((((2U 
                                                                        & (((0x25U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 7U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x15U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 6U))))) 
                                                                      << 6U) 
                                                                     | (((2U 
                                                                          & (((0x0dU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 5U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x43U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 4U))))) 
                                                                        << 4U)) 
                                                                    | ((((2U 
                                                                          & (((0x23U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 3U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x13U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 2U))))) 
                                                                        << 2U) 
                                                                       | ((2U 
                                                                           & (((0x0bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 1U))) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & ((7U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                                ^ (IData)(vlSelfRef.__PVT__cmd)))))))))));
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__4__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__4__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__4__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__4__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_358))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_358))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_358))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_358))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_358))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_358))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_358))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o))))))))));
    vlSelfRef.tl_i[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)) 
                                   << 0x00000018U) 
                                  | (QData)((IData)(
                                                    ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_358 
                                                      << 1U) 
                                                     | (1U 
                                                        & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_i[1U] = ((0xff000000U & vlSelfRef.tl_i[1U]) 
                          | (IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)) 
                                       << 0x00000018U) 
                                      | (QData)((IData)(
                                                        ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_358 
                                                          << 1U) 
                                                         | (1U 
                                                            & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                                     >> 0x00000020U)));
    vlSelfRef.tl_i[1U] = ((0x00ffffffU & vlSelfRef.tl_i[1U]) 
                          | ((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                           >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[3U] = (0x00001fffU & ((IData)(((
                                                   ((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = (((((((((2U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                         >> 0x0000001eU)) ^ ((0x52U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 0x0000001eU)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000001dU)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000001cU)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000001bU)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000001aU)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x00000019U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                            >> 0x0000000fU)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 0x0000000eU)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000000dU)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000000cU)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000000bU)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000000aU)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 9U)) << 1U)) | (1U 
                                                  & ((0x45U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 8U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                     >> 7U)) << 1U)) 
                          | (1U & ((0x2aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                      >> 6U)))) << 6U) 
                        | (((2U & (((0x15U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                       >> 5U)) << 1U)) 
                            | (1U & ((0x1aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 4U)))) << 4U)) 
                       | ((((2U & (((0x34U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                       >> 3U)) << 1U)) 
                            | (1U & ((0x61U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 2U)))) << 2U) 
                          | ((2U & (((0x54U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 1U)) << 1U)) 
                             | (1U & ((0x19U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                      ^ vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))));
    __Vfunc_extract_h2d_cmd_intg__4__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__4__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__4__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__4__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__4__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 12352409514827929586ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__4__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__4__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__4__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__4__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__4__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__4__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__4__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__4__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__4__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__4__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__4__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__4__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_358 
                                                                                >> 7U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_64(
                                                                    (0x41f7bb56d5525488ULL 
                                                                     & (0x5400000000000000ULL 
                                                                        ^ 
                                                                        (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_358 
                                                                                >> 7U)))) 
                                                                          << 0x00000039U) 
                                                                         | vlSelfRef.__PVT__cmd)))))) 
                                                 << 5U) 
                                                | (((2U 
                                                     & (VL_REDXOR_64(
                                                                     (0x21ef76cdb2c93244ULL 
                                                                      & (0x5400000000000000ULL 
                                                                         ^ 
                                                                         (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_358 
                                                                                >> 7U)))) 
                                                                           << 0x00000039U) 
                                                                          | vlSelfRef.__PVT__cmd)))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x11deee3b8e388e22ULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_358 
                                                                                >> 7U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & (VL_REDXOR_64(
                                                                   (0x09bde1f87e0781e1ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_358 
                                                                                >> 7U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (VL_REDXOR_64(
                                                                      (0x057c1ff801ff801fULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_358 
                                                                                >> 7U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_64(
                                                                       (0x0303fff800007fffULL 
                                                                        & (0x5400000000000000ULL 
                                                                           ^ 
                                                                           (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_358 
                                                                                >> 7U)))) 
                                                                             << 0x00000039U) 
                                                                            | vlSelfRef.__PVT__cmd))))))));
    vlSelfRef.__PVT__u_chk__DOT__data_o = (((QData)((IData)(
                                                            (((((((((0x7fU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 3U) 
                                                                   | ((0x7cU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U)) 
                                                                  | (((0x7aU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 1U) 
                                                                     | (0x76U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                 << 9U) 
                                                                | (((0x6eU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 8U) 
                                                                   | (((0x5eU 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 7U) 
                                                                      | ((0x3eU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 6U)))) 
                                                               | ((((0x79U 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((0x75U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 4U) 
                                                                      | ((0x6dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 3U))) 
                                                                  | (((0x5dU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U) 
                                                                     | (((0x3dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 1U) 
                                                                        | (0x73U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))))) 
                                                              << 0x0000000cU) 
                                                             | ((((((0x6bU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((IData)(
                                                                               ((vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000002aU) 
                                                                                ^ 
                                                                                (0x5bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                       << 4U) 
                                                                      | (8U 
                                                                         & (((0x3bU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000029U))) 
                                                                            << 3U)))) 
                                                                  | ((4U 
                                                                      & (((0x67U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000028U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x57U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000027U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x37U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000026U))))))) 
                                                                 << 6U) 
                                                                | ((((4U 
                                                                      & (((0x4fU 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000025U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x2fU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000024U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x1fU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000023U)))))) 
                                                                    << 3U) 
                                                                   | ((4U 
                                                                       & (((0x70U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000022U))) 
                                                                          << 2U)) 
                                                                      | ((2U 
                                                                          & (((0x68U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000021U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x58U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000020U))))))))))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             ((((((((2U 
                                                                     & (((0x38U 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001fU))) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & ((0x64U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001eU))))) 
                                                                   << 6U) 
                                                                  | (((2U 
                                                                       & (((0x54U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001dU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x34U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001cU))))) 
                                                                     << 4U)) 
                                                                 | ((((2U 
                                                                       & (((0x4cU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001bU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x2cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001aU))))) 
                                                                     << 2U) 
                                                                    | ((2U 
                                                                        & (((0x1cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000019U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x62U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000018U))))))) 
                                                                << 0x00000018U) 
                                                               | ((((((2U 
                                                                       & (((0x52U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000017U))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x32U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000016U))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x4aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000015U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x2aU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000014U))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x1aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000013U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x46U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000012U))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x26U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000011U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x16U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000010U))))))) 
                                                                  << 0x00000010U)) 
                                                              | (((((((2U 
                                                                       & (((0x0eU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000fU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x61U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000eU))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x51U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000dU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x31U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000cU))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x49U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000bU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x29U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000aU))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x19U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 9U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x45U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 8U))))))) 
                                                                  << 8U) 
                                                                 | (((((2U 
                                                                        & (((0x25U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 7U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x15U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 6U))))) 
                                                                      << 6U) 
                                                                     | (((2U 
                                                                          & (((0x0dU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 5U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x43U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 4U))))) 
                                                                        << 4U)) 
                                                                    | ((((2U 
                                                                          & (((0x23U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 3U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x13U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 2U))))) 
                                                                        << 2U) 
                                                                       | ((2U 
                                                                           & (((0x0bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 1U))) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & ((7U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                                ^ (IData)(vlSelfRef.__PVT__cmd)))))))))));
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__5__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__5__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__5__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__5__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_359))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_359))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_359))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_359))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_359))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_359))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_359))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o))))))))));
    vlSelfRef.tl_i[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)) 
                                   << 0x00000018U) 
                                  | (QData)((IData)(
                                                    ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_359 
                                                      << 1U) 
                                                     | (1U 
                                                        & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_i[1U] = ((0xff000000U & vlSelfRef.tl_i[1U]) 
                          | (IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)) 
                                       << 0x00000018U) 
                                      | (QData)((IData)(
                                                        ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_359 
                                                          << 1U) 
                                                         | (1U 
                                                            & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                                     >> 0x00000020U)));
    vlSelfRef.tl_i[1U] = ((0x00ffffffU & vlSelfRef.tl_i[1U]) 
                          | ((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                           >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[3U] = (0x00001fffU & ((IData)(((
                                                   ((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = (((((((((2U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                         >> 0x0000001eU)) ^ ((0x52U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 0x0000001eU)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000001dU)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000001cU)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000001bU)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000001aU)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x00000019U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                            >> 0x0000000fU)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 0x0000000eU)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000000dU)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000000cU)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000000bU)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000000aU)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 9U)) << 1U)) | (1U 
                                                  & ((0x45U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 8U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                     >> 7U)) << 1U)) 
                          | (1U & ((0x2aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                      >> 6U)))) << 6U) 
                        | (((2U & (((0x15U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                       >> 5U)) << 1U)) 
                            | (1U & ((0x1aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 4U)))) << 4U)) 
                       | ((((2U & (((0x34U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                       >> 3U)) << 1U)) 
                            | (1U & ((0x61U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 2U)))) << 2U) 
                          | ((2U & (((0x54U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 1U)) << 1U)) 
                             | (1U & ((0x19U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                      ^ vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))));
    __Vfunc_extract_h2d_cmd_intg__5__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__5__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__5__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__5__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__5__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 2382735385847310654ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__5__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__5__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__5__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__5__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__5__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__5__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__5__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__5__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__5__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__5__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__5__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__5__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_359 
                                                                                >> 7U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_64(
                                                                    (0x41f7bb56d5525488ULL 
                                                                     & (0x5400000000000000ULL 
                                                                        ^ 
                                                                        (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_359 
                                                                                >> 7U)))) 
                                                                          << 0x00000039U) 
                                                                         | vlSelfRef.__PVT__cmd)))))) 
                                                 << 5U) 
                                                | (((2U 
                                                     & (VL_REDXOR_64(
                                                                     (0x21ef76cdb2c93244ULL 
                                                                      & (0x5400000000000000ULL 
                                                                         ^ 
                                                                         (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_359 
                                                                                >> 7U)))) 
                                                                           << 0x00000039U) 
                                                                          | vlSelfRef.__PVT__cmd)))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x11deee3b8e388e22ULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_359 
                                                                                >> 7U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & (VL_REDXOR_64(
                                                                   (0x09bde1f87e0781e1ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_359 
                                                                                >> 7U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (VL_REDXOR_64(
                                                                      (0x057c1ff801ff801fULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_359 
                                                                                >> 7U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_64(
                                                                       (0x0303fff800007fffULL 
                                                                        & (0x5400000000000000ULL 
                                                                           ^ 
                                                                           (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_359 
                                                                                >> 7U)))) 
                                                                             << 0x00000039U) 
                                                                            | vlSelfRef.__PVT__cmd))))))));
    vlSelfRef.__PVT__u_chk__DOT__data_o = (((QData)((IData)(
                                                            (((((((((0x7fU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 3U) 
                                                                   | ((0x7cU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U)) 
                                                                  | (((0x7aU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 1U) 
                                                                     | (0x76U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                 << 9U) 
                                                                | (((0x6eU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 8U) 
                                                                   | (((0x5eU 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 7U) 
                                                                      | ((0x3eU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 6U)))) 
                                                               | ((((0x79U 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((0x75U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 4U) 
                                                                      | ((0x6dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 3U))) 
                                                                  | (((0x5dU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U) 
                                                                     | (((0x3dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 1U) 
                                                                        | (0x73U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))))) 
                                                              << 0x0000000cU) 
                                                             | ((((((0x6bU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((IData)(
                                                                               ((vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000002aU) 
                                                                                ^ 
                                                                                (0x5bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                       << 4U) 
                                                                      | (8U 
                                                                         & (((0x3bU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000029U))) 
                                                                            << 3U)))) 
                                                                  | ((4U 
                                                                      & (((0x67U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000028U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x57U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000027U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x37U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000026U))))))) 
                                                                 << 6U) 
                                                                | ((((4U 
                                                                      & (((0x4fU 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000025U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x2fU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000024U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x1fU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000023U)))))) 
                                                                    << 3U) 
                                                                   | ((4U 
                                                                       & (((0x70U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000022U))) 
                                                                          << 2U)) 
                                                                      | ((2U 
                                                                          & (((0x68U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000021U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x58U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000020U))))))))))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             ((((((((2U 
                                                                     & (((0x38U 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001fU))) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & ((0x64U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001eU))))) 
                                                                   << 6U) 
                                                                  | (((2U 
                                                                       & (((0x54U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001dU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x34U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001cU))))) 
                                                                     << 4U)) 
                                                                 | ((((2U 
                                                                       & (((0x4cU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001bU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x2cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001aU))))) 
                                                                     << 2U) 
                                                                    | ((2U 
                                                                        & (((0x1cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000019U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x62U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000018U))))))) 
                                                                << 0x00000018U) 
                                                               | ((((((2U 
                                                                       & (((0x52U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000017U))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x32U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000016U))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x4aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000015U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x2aU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000014U))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x1aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000013U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x46U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000012U))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x26U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000011U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x16U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000010U))))))) 
                                                                  << 0x00000010U)) 
                                                              | (((((((2U 
                                                                       & (((0x0eU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000fU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x61U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000eU))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x51U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000dU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x31U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000cU))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x49U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000bU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x29U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000aU))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x19U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 9U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x45U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 8U))))))) 
                                                                  << 8U) 
                                                                 | (((((2U 
                                                                        & (((0x25U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 7U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x15U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 6U))))) 
                                                                      << 6U) 
                                                                     | (((2U 
                                                                          & (((0x0dU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 5U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x43U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 4U))))) 
                                                                        << 4U)) 
                                                                    | ((((2U 
                                                                          & (((0x23U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 3U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x13U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 2U))))) 
                                                                        << 2U) 
                                                                       | ((2U 
                                                                           & (((0x0bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 1U))) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & ((7U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                                ^ (IData)(vlSelfRef.__PVT__cmd)))))))))));
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__6__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__6__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__6__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__6__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_360))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_360))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_360))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_360))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_360))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_360))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_360))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o))))))))));
    vlSelfRef.tl_i[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)) 
                                   << 0x00000018U) 
                                  | (QData)((IData)(
                                                    ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_360 
                                                      << 1U) 
                                                     | (1U 
                                                        & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_i[1U] = ((0xff000000U & vlSelfRef.tl_i[1U]) 
                          | (IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)) 
                                       << 0x00000018U) 
                                      | (QData)((IData)(
                                                        ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_360 
                                                          << 1U) 
                                                         | (1U 
                                                            & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                                     >> 0x00000020U)));
    vlSelfRef.tl_i[1U] = ((0x00ffffffU & vlSelfRef.tl_i[1U]) 
                          | ((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                           >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[3U] = (0x00001fffU & ((IData)(((
                                                   ((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = (((((((((2U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                         >> 0x0000001eU)) ^ ((0x52U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 0x0000001eU)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000001dU)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000001cU)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000001bU)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000001aU)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x00000019U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                            >> 0x0000000fU)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 0x0000000eU)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000000dU)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000000cU)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000000bU)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000000aU)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 9U)) << 1U)) | (1U 
                                                  & ((0x45U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 8U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                     >> 7U)) << 1U)) 
                          | (1U & ((0x2aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                      >> 6U)))) << 6U) 
                        | (((2U & (((0x15U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                       >> 5U)) << 1U)) 
                            | (1U & ((0x1aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 4U)))) << 4U)) 
                       | ((((2U & (((0x34U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                       >> 3U)) << 1U)) 
                            | (1U & ((0x61U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 2U)))) << 2U) 
                          | ((2U & (((0x54U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 1U)) << 1U)) 
                             | (1U & ((0x19U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                      ^ vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))));
    __Vfunc_extract_h2d_cmd_intg__6__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__6__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__6__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__6__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__6__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 18309120121103727989ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__6__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__6__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__6__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__6__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__6__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__6__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__6__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__6__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__6__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__6__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__6__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__6__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_360 
                                                                                >> 7U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_64(
                                                                    (0x41f7bb56d5525488ULL 
                                                                     & (0x5400000000000000ULL 
                                                                        ^ 
                                                                        (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_360 
                                                                                >> 7U)))) 
                                                                          << 0x00000039U) 
                                                                         | vlSelfRef.__PVT__cmd)))))) 
                                                 << 5U) 
                                                | (((2U 
                                                     & (VL_REDXOR_64(
                                                                     (0x21ef76cdb2c93244ULL 
                                                                      & (0x5400000000000000ULL 
                                                                         ^ 
                                                                         (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_360 
                                                                                >> 7U)))) 
                                                                           << 0x00000039U) 
                                                                          | vlSelfRef.__PVT__cmd)))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x11deee3b8e388e22ULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_360 
                                                                                >> 7U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & (VL_REDXOR_64(
                                                                   (0x09bde1f87e0781e1ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_360 
                                                                                >> 7U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (VL_REDXOR_64(
                                                                      (0x057c1ff801ff801fULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_360 
                                                                                >> 7U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_64(
                                                                       (0x0303fff800007fffULL 
                                                                        & (0x5400000000000000ULL 
                                                                           ^ 
                                                                           (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_360 
                                                                                >> 7U)))) 
                                                                             << 0x00000039U) 
                                                                            | vlSelfRef.__PVT__cmd))))))));
    vlSelfRef.__PVT__u_chk__DOT__data_o = (((QData)((IData)(
                                                            (((((((((0x7fU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 3U) 
                                                                   | ((0x7cU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U)) 
                                                                  | (((0x7aU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 1U) 
                                                                     | (0x76U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                 << 9U) 
                                                                | (((0x6eU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 8U) 
                                                                   | (((0x5eU 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 7U) 
                                                                      | ((0x3eU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 6U)))) 
                                                               | ((((0x79U 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((0x75U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 4U) 
                                                                      | ((0x6dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 3U))) 
                                                                  | (((0x5dU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U) 
                                                                     | (((0x3dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 1U) 
                                                                        | (0x73U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))))) 
                                                              << 0x0000000cU) 
                                                             | ((((((0x6bU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((IData)(
                                                                               ((vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000002aU) 
                                                                                ^ 
                                                                                (0x5bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                       << 4U) 
                                                                      | (8U 
                                                                         & (((0x3bU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000029U))) 
                                                                            << 3U)))) 
                                                                  | ((4U 
                                                                      & (((0x67U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000028U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x57U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000027U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x37U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000026U))))))) 
                                                                 << 6U) 
                                                                | ((((4U 
                                                                      & (((0x4fU 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000025U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x2fU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000024U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x1fU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000023U)))))) 
                                                                    << 3U) 
                                                                   | ((4U 
                                                                       & (((0x70U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000022U))) 
                                                                          << 2U)) 
                                                                      | ((2U 
                                                                          & (((0x68U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000021U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x58U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000020U))))))))))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             ((((((((2U 
                                                                     & (((0x38U 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001fU))) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & ((0x64U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001eU))))) 
                                                                   << 6U) 
                                                                  | (((2U 
                                                                       & (((0x54U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001dU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x34U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001cU))))) 
                                                                     << 4U)) 
                                                                 | ((((2U 
                                                                       & (((0x4cU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001bU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x2cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001aU))))) 
                                                                     << 2U) 
                                                                    | ((2U 
                                                                        & (((0x1cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000019U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x62U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000018U))))))) 
                                                                << 0x00000018U) 
                                                               | ((((((2U 
                                                                       & (((0x52U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000017U))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x32U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000016U))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x4aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000015U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x2aU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000014U))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x1aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000013U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x46U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000012U))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x26U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000011U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x16U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000010U))))))) 
                                                                  << 0x00000010U)) 
                                                              | (((((((2U 
                                                                       & (((0x0eU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000fU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x61U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000eU))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x51U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000dU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x31U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000cU))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x49U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000bU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x29U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000aU))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x19U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 9U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x45U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 8U))))))) 
                                                                  << 8U) 
                                                                 | (((((2U 
                                                                        & (((0x25U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 7U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x15U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 6U))))) 
                                                                      << 6U) 
                                                                     | (((2U 
                                                                          & (((0x0dU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 5U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x43U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 4U))))) 
                                                                        << 4U)) 
                                                                    | ((((2U 
                                                                          & (((0x23U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 3U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x13U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 2U))))) 
                                                                        << 2U) 
                                                                       | ((2U 
                                                                           & (((0x0bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 1U))) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & ((7U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                                ^ (IData)(vlSelfRef.__PVT__cmd)))))))))));
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__7__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__7__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__7__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__7__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_361))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_361))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_361))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_361))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_361))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_361))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_361))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o))))))))));
    vlSelfRef.tl_i[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)) 
                                   << 0x00000018U) 
                                  | (QData)((IData)(
                                                    ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_361 
                                                      << 1U) 
                                                     | (1U 
                                                        & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_i[1U] = ((0xff000000U & vlSelfRef.tl_i[1U]) 
                          | (IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)) 
                                       << 0x00000018U) 
                                      | (QData)((IData)(
                                                        ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_361 
                                                          << 1U) 
                                                         | (1U 
                                                            & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                                     >> 0x00000020U)));
    vlSelfRef.tl_i[1U] = ((0x00ffffffU & vlSelfRef.tl_i[1U]) 
                          | ((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                           >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[3U] = (0x00001fffU & ((IData)(((
                                                   ((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = (((((((((2U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                         >> 0x0000001eU)) ^ ((0x52U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 0x0000001eU)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000001dU)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000001cU)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000001bU)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000001aU)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x00000019U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                            >> 0x0000000fU)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 0x0000000eU)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000000dU)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000000cU)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000000bU)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000000aU)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 9U)) << 1U)) | (1U 
                                                  & ((0x45U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 8U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                     >> 7U)) << 1U)) 
                          | (1U & ((0x2aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                      >> 6U)))) << 6U) 
                        | (((2U & (((0x15U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                       >> 5U)) << 1U)) 
                            | (1U & ((0x1aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 4U)))) << 4U)) 
                       | ((((2U & (((0x34U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                       >> 3U)) << 1U)) 
                            | (1U & ((0x61U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 2U)))) << 2U) 
                          | ((2U & (((0x54U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 1U)) << 1U)) 
                             | (1U & ((0x19U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                      ^ vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))));
    __Vfunc_extract_h2d_cmd_intg__7__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__7__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__7__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__7__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__7__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 15983805035067225205ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__7__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__7__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__7__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__7__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__7__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__7__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__7__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__7__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__7__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__7__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__7__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__7__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_361 
                                                                                >> 7U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_64(
                                                                    (0x41f7bb56d5525488ULL 
                                                                     & (0x5400000000000000ULL 
                                                                        ^ 
                                                                        (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_361 
                                                                                >> 7U)))) 
                                                                          << 0x00000039U) 
                                                                         | vlSelfRef.__PVT__cmd)))))) 
                                                 << 5U) 
                                                | (((2U 
                                                     & (VL_REDXOR_64(
                                                                     (0x21ef76cdb2c93244ULL 
                                                                      & (0x5400000000000000ULL 
                                                                         ^ 
                                                                         (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_361 
                                                                                >> 7U)))) 
                                                                           << 0x00000039U) 
                                                                          | vlSelfRef.__PVT__cmd)))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x11deee3b8e388e22ULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_361 
                                                                                >> 7U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & (VL_REDXOR_64(
                                                                   (0x09bde1f87e0781e1ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_361 
                                                                                >> 7U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (VL_REDXOR_64(
                                                                      (0x057c1ff801ff801fULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_361 
                                                                                >> 7U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_64(
                                                                       (0x0303fff800007fffULL 
                                                                        & (0x5400000000000000ULL 
                                                                           ^ 
                                                                           (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_361 
                                                                                >> 7U)))) 
                                                                             << 0x00000039U) 
                                                                            | vlSelfRef.__PVT__cmd))))))));
    vlSelfRef.__PVT__u_chk__DOT__data_o = (((QData)((IData)(
                                                            (((((((((0x7fU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 3U) 
                                                                   | ((0x7cU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U)) 
                                                                  | (((0x7aU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 1U) 
                                                                     | (0x76U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                 << 9U) 
                                                                | (((0x6eU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 8U) 
                                                                   | (((0x5eU 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 7U) 
                                                                      | ((0x3eU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 6U)))) 
                                                               | ((((0x79U 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((0x75U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 4U) 
                                                                      | ((0x6dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 3U))) 
                                                                  | (((0x5dU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U) 
                                                                     | (((0x3dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 1U) 
                                                                        | (0x73U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))))) 
                                                              << 0x0000000cU) 
                                                             | ((((((0x6bU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((IData)(
                                                                               ((vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000002aU) 
                                                                                ^ 
                                                                                (0x5bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                       << 4U) 
                                                                      | (8U 
                                                                         & (((0x3bU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000029U))) 
                                                                            << 3U)))) 
                                                                  | ((4U 
                                                                      & (((0x67U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000028U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x57U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000027U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x37U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000026U))))))) 
                                                                 << 6U) 
                                                                | ((((4U 
                                                                      & (((0x4fU 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000025U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x2fU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000024U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x1fU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000023U)))))) 
                                                                    << 3U) 
                                                                   | ((4U 
                                                                       & (((0x70U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000022U))) 
                                                                          << 2U)) 
                                                                      | ((2U 
                                                                          & (((0x68U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000021U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x58U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000020U))))))))))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             ((((((((2U 
                                                                     & (((0x38U 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001fU))) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & ((0x64U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001eU))))) 
                                                                   << 6U) 
                                                                  | (((2U 
                                                                       & (((0x54U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001dU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x34U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001cU))))) 
                                                                     << 4U)) 
                                                                 | ((((2U 
                                                                       & (((0x4cU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001bU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x2cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001aU))))) 
                                                                     << 2U) 
                                                                    | ((2U 
                                                                        & (((0x1cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000019U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x62U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000018U))))))) 
                                                                << 0x00000018U) 
                                                               | ((((((2U 
                                                                       & (((0x52U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000017U))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x32U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000016U))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x4aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000015U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x2aU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000014U))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x1aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000013U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x46U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000012U))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x26U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000011U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x16U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000010U))))))) 
                                                                  << 0x00000010U)) 
                                                              | (((((((2U 
                                                                       & (((0x0eU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000fU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x61U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000eU))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x51U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000dU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x31U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000cU))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x49U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000bU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x29U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000aU))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x19U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 9U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x45U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 8U))))))) 
                                                                  << 8U) 
                                                                 | (((((2U 
                                                                        & (((0x25U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 7U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x15U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 6U))))) 
                                                                      << 6U) 
                                                                     | (((2U 
                                                                          & (((0x0dU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 5U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x43U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 4U))))) 
                                                                        << 4U)) 
                                                                    | ((((2U 
                                                                          & (((0x23U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 3U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x13U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 2U))))) 
                                                                        << 2U) 
                                                                       | ((2U 
                                                                           & (((0x0bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 1U))) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & ((7U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                                ^ (IData)(vlSelfRef.__PVT__cmd)))))))))));
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__8__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__8__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__8__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__8__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U]))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             << 9U) 
                                                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                                               >> 0x00000017U)))))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U]))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                           << 9U) 
                                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                             >> 0x00000017U)))))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U]))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       << 9U) 
                                                                      | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                         >> 0x00000017U)))))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U]))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000017U)))))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U]))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               << 9U) 
                                                                              | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000017U)))))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U]))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                               | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000017U)))))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U]))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               << 9U) 
                                                                              | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000017U))))))))))));
    vlSelfRef.tl_i[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1188[0U];
    vlSelfRef.tl_i[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1188[1U];
    vlSelfRef.tl_i[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1188[2U];
    vlSelfRef.tl_i[3U] = ((0x00001000U & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__empty_rclk)) 
                                          << 0x0000000cU)) 
                          | vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1188[3U]);
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((((((((2U & (((0x52U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                            >> 0x00000016U)) << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                             >> 0x00000015U)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 0x00000014U)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000013U)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 0x00000012U)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000011U)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000010U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                >> 0x0000000fU)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                               >> 0x0000000eU)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000000dU)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000000cU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x0000000bU)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000000aU)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 9U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 8U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      >> 7U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                            >> 6U)) << 1U)) | (1U & 
                                               ((0x68U 
                                                 == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                ^ (
                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 5U)))) 
                << 6U) | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                      >> 4U)) << 1U)) 
                           | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                       >> 3U)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 2U)) << 1U)) | (1U 
                                                 & ((0x49U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 1U)))) 
                  << 2U) | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U]) 
                                   << 1U)) | ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001fU) 
                                              ^ (0x45U 
                                                 == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                     >> 0x0000001eU)) 
                                 << 1U)) | (1U & ((0x2aU 
                                                   == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                  ^ 
                                                  (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                                   >> 0x0000001dU)))) 
                         << 6U) | (((2U & (((0x15U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001cU)) 
                                           << 1U)) 
                                    | (1U & ((0x1aU 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                                >> 0x0000001bU)))) 
                                   << 4U)) | ((((2U 
                                                 & (((0x34U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                                      >> 0x0000001aU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((0x61U 
                                                       == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                                       >> 0x00000019U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((0x54U 
                                                       == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                                       >> 0x00000018U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((0x19U 
                                                        == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                       ^ 
                                                       (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                                        >> 0x00000017U))))))));
    __Vfunc_extract_h2d_cmd_intg__8__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__8__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__8__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__8__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__8__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 614363113596888882ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__8__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__8__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__8__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__8__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__8__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__8__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__8__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__8__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__8__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__8__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__8__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__8__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 7U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_64(
                                                                    (0x41f7bb56d5525488ULL 
                                                                     & (0x5400000000000000ULL 
                                                                        ^ 
                                                                        (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 7U)))) 
                                                                          << 0x00000039U) 
                                                                         | vlSelfRef.__PVT__cmd)))))) 
                                                 << 5U) 
                                                | (((2U 
                                                     & (VL_REDXOR_64(
                                                                     (0x21ef76cdb2c93244ULL 
                                                                      & (0x5400000000000000ULL 
                                                                         ^ 
                                                                         (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 7U)))) 
                                                                           << 0x00000039U) 
                                                                          | vlSelfRef.__PVT__cmd)))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x11deee3b8e388e22ULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 7U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & (VL_REDXOR_64(
                                                                   (0x09bde1f87e0781e1ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 7U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (VL_REDXOR_64(
                                                                      (0x057c1ff801ff801fULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 7U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_64(
                                                                       (0x0303fff800007fffULL 
                                                                        & (0x5400000000000000ULL 
                                                                           ^ 
                                                                           (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 7U)))) 
                                                                             << 0x00000039U) 
                                                                            | vlSelfRef.__PVT__cmd))))))));
    vlSelfRef.__PVT__u_chk__DOT__data_o = (((QData)((IData)(
                                                            (((((((((0x7fU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 3U) 
                                                                   | ((0x7cU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U)) 
                                                                  | (((0x7aU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 1U) 
                                                                     | (0x76U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                 << 9U) 
                                                                | (((0x6eU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 8U) 
                                                                   | (((0x5eU 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 7U) 
                                                                      | ((0x3eU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 6U)))) 
                                                               | ((((0x79U 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((0x75U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 4U) 
                                                                      | ((0x6dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 3U))) 
                                                                  | (((0x5dU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U) 
                                                                     | (((0x3dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 1U) 
                                                                        | (0x73U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))))) 
                                                              << 0x0000000cU) 
                                                             | ((((((0x6bU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((IData)(
                                                                               ((vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000002aU) 
                                                                                ^ 
                                                                                (0x5bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                       << 4U) 
                                                                      | (8U 
                                                                         & (((0x3bU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000029U))) 
                                                                            << 3U)))) 
                                                                  | ((4U 
                                                                      & (((0x67U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000028U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x57U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000027U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x37U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000026U))))))) 
                                                                 << 6U) 
                                                                | ((((4U 
                                                                      & (((0x4fU 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000025U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x2fU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000024U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x1fU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000023U)))))) 
                                                                    << 3U) 
                                                                   | ((4U 
                                                                       & (((0x70U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000022U))) 
                                                                          << 2U)) 
                                                                      | ((2U 
                                                                          & (((0x68U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000021U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x58U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000020U))))))))))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             ((((((((2U 
                                                                     & (((0x38U 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001fU))) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & ((0x64U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001eU))))) 
                                                                   << 6U) 
                                                                  | (((2U 
                                                                       & (((0x54U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001dU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x34U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001cU))))) 
                                                                     << 4U)) 
                                                                 | ((((2U 
                                                                       & (((0x4cU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001bU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x2cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001aU))))) 
                                                                     << 2U) 
                                                                    | ((2U 
                                                                        & (((0x1cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000019U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x62U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000018U))))))) 
                                                                << 0x00000018U) 
                                                               | ((((((2U 
                                                                       & (((0x52U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000017U))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x32U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000016U))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x4aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000015U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x2aU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000014U))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x1aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000013U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x46U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000012U))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x26U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000011U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x16U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000010U))))))) 
                                                                  << 0x00000010U)) 
                                                              | (((((((2U 
                                                                       & (((0x0eU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000fU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x61U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000eU))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x51U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000dU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x31U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000cU))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x49U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000bU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x29U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000aU))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x19U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 9U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x45U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 8U))))))) 
                                                                  << 8U) 
                                                                 | (((((2U 
                                                                        & (((0x25U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 7U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x15U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 6U))))) 
                                                                      << 6U) 
                                                                     | (((2U 
                                                                          & (((0x0dU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 5U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x43U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 4U))))) 
                                                                        << 4U)) 
                                                                    | ((((2U 
                                                                          & (((0x23U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 3U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x13U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 2U))))) 
                                                                        << 2U) 
                                                                       | ((2U 
                                                                           & (((0x0bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 1U))) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & ((7U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                                ^ (IData)(vlSelfRef.__PVT__cmd)))))))))));
    vlSelfRef.err_o = (1U & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__empty_rclk)) 
                             & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                  & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                                 | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                                   | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__9__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__9__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__9__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__9__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U]))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             << 9U) 
                                                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                                               >> 0x00000017U)))))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U]))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                           << 9U) 
                                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                             >> 0x00000017U)))))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U]))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       << 9U) 
                                                                      | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                         >> 0x00000017U)))))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U]))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000017U)))))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U]))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               << 9U) 
                                                                              | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000017U)))))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U]))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                               | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000017U)))))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U]))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               << 9U) 
                                                                              | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000017U))))))))))));
    vlSelfRef.tl_i[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1189[0U];
    vlSelfRef.tl_i[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1189[1U];
    vlSelfRef.tl_i[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1189[2U];
    vlSelfRef.tl_i[3U] = ((0x00001000U & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__empty_rclk)) 
                                          << 0x0000000cU)) 
                          | vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1189[3U]);
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((((((((2U & (((0x52U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                            >> 0x00000016U)) << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                             >> 0x00000015U)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 0x00000014U)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000013U)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 0x00000012U)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000011U)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000010U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                >> 0x0000000fU)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                               >> 0x0000000eU)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000000dU)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000000cU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x0000000bU)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000000aU)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 9U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 8U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      >> 7U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                            >> 6U)) << 1U)) | (1U & 
                                               ((0x68U 
                                                 == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                ^ (
                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 5U)))) 
                << 6U) | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                      >> 4U)) << 1U)) 
                           | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                       >> 3U)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 2U)) << 1U)) | (1U 
                                                 & ((0x49U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 1U)))) 
                  << 2U) | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U]) 
                                   << 1U)) | ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001fU) 
                                              ^ (0x45U 
                                                 == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                     >> 0x0000001eU)) 
                                 << 1U)) | (1U & ((0x2aU 
                                                   == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                  ^ 
                                                  (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                                   >> 0x0000001dU)))) 
                         << 6U) | (((2U & (((0x15U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001cU)) 
                                           << 1U)) 
                                    | (1U & ((0x1aU 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                                >> 0x0000001bU)))) 
                                   << 4U)) | ((((2U 
                                                 & (((0x34U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                                      >> 0x0000001aU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((0x61U 
                                                       == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                                       >> 0x00000019U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((0x54U 
                                                       == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                                       >> 0x00000018U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((0x19U 
                                                        == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                       ^ 
                                                       (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                                        >> 0x00000017U))))))));
    __Vfunc_extract_h2d_cmd_intg__9__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__9__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__9__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__9__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__9__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 12949008213122126390ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__9__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__9__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__9__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__9__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__9__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__9__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__9__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__9__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__9__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__9__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__9__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__9__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 7U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_64(
                                                                    (0x41f7bb56d5525488ULL 
                                                                     & (0x5400000000000000ULL 
                                                                        ^ 
                                                                        (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 7U)))) 
                                                                          << 0x00000039U) 
                                                                         | vlSelfRef.__PVT__cmd)))))) 
                                                 << 5U) 
                                                | (((2U 
                                                     & (VL_REDXOR_64(
                                                                     (0x21ef76cdb2c93244ULL 
                                                                      & (0x5400000000000000ULL 
                                                                         ^ 
                                                                         (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 7U)))) 
                                                                           << 0x00000039U) 
                                                                          | vlSelfRef.__PVT__cmd)))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x11deee3b8e388e22ULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 7U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & (VL_REDXOR_64(
                                                                   (0x09bde1f87e0781e1ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 7U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (VL_REDXOR_64(
                                                                      (0x057c1ff801ff801fULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 7U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_64(
                                                                       (0x0303fff800007fffULL 
                                                                        & (0x5400000000000000ULL 
                                                                           ^ 
                                                                           (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 7U)))) 
                                                                             << 0x00000039U) 
                                                                            | vlSelfRef.__PVT__cmd))))))));
    vlSelfRef.__PVT__u_chk__DOT__data_o = (((QData)((IData)(
                                                            (((((((((0x7fU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 3U) 
                                                                   | ((0x7cU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U)) 
                                                                  | (((0x7aU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 1U) 
                                                                     | (0x76U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                 << 9U) 
                                                                | (((0x6eU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 8U) 
                                                                   | (((0x5eU 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 7U) 
                                                                      | ((0x3eU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 6U)))) 
                                                               | ((((0x79U 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((0x75U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 4U) 
                                                                      | ((0x6dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 3U))) 
                                                                  | (((0x5dU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U) 
                                                                     | (((0x3dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 1U) 
                                                                        | (0x73U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))))) 
                                                              << 0x0000000cU) 
                                                             | ((((((0x6bU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((IData)(
                                                                               ((vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000002aU) 
                                                                                ^ 
                                                                                (0x5bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                       << 4U) 
                                                                      | (8U 
                                                                         & (((0x3bU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000029U))) 
                                                                            << 3U)))) 
                                                                  | ((4U 
                                                                      & (((0x67U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000028U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x57U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000027U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x37U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000026U))))))) 
                                                                 << 6U) 
                                                                | ((((4U 
                                                                      & (((0x4fU 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000025U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x2fU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000024U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x1fU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000023U)))))) 
                                                                    << 3U) 
                                                                   | ((4U 
                                                                       & (((0x70U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000022U))) 
                                                                          << 2U)) 
                                                                      | ((2U 
                                                                          & (((0x68U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000021U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x58U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000020U))))))))))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             ((((((((2U 
                                                                     & (((0x38U 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001fU))) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & ((0x64U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001eU))))) 
                                                                   << 6U) 
                                                                  | (((2U 
                                                                       & (((0x54U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001dU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x34U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001cU))))) 
                                                                     << 4U)) 
                                                                 | ((((2U 
                                                                       & (((0x4cU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001bU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x2cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001aU))))) 
                                                                     << 2U) 
                                                                    | ((2U 
                                                                        & (((0x1cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000019U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x62U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000018U))))))) 
                                                                << 0x00000018U) 
                                                               | ((((((2U 
                                                                       & (((0x52U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000017U))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x32U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000016U))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x4aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000015U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x2aU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000014U))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x1aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000013U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x46U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000012U))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x26U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000011U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x16U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000010U))))))) 
                                                                  << 0x00000010U)) 
                                                              | (((((((2U 
                                                                       & (((0x0eU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000fU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x61U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000eU))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x51U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000dU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x31U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000cU))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x49U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000bU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x29U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000aU))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x19U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 9U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x45U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 8U))))))) 
                                                                  << 8U) 
                                                                 | (((((2U 
                                                                        & (((0x25U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 7U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x15U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 6U))))) 
                                                                      << 6U) 
                                                                     | (((2U 
                                                                          & (((0x0dU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 5U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x43U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 4U))))) 
                                                                        << 4U)) 
                                                                    | ((((2U 
                                                                          & (((0x23U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 3U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x13U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 2U))))) 
                                                                        << 2U) 
                                                                       | ((2U 
                                                                           & (((0x0bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 1U))) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & ((7U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                                ^ (IData)(vlSelfRef.__PVT__cmd)))))))))));
    vlSelfRef.err_o = (1U & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__empty_rclk)) 
                             & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                  & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                                 | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                                   | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__10__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__10__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__10__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__10__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                              >> 1U)))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                               >> 0x00000018U)))))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                            >> 1U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                           << 8U) 
                                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                             >> 0x00000018U)))))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                        >> 1U)))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       << 8U) 
                                                                      | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                         >> 0x00000018U)))))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 1U)))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000018U)))))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 1U)))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               << 8U) 
                                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000018U)))))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 1U)))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                               | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000018U)))))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 1U)))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               << 8U) 
                                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000018U))))))))))));
    vlSelfRef.tl_i[0U] = ((0xfffffffeU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U]) 
                          | (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.tl_i[1U] = ((1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U]) 
                          | (0xfffffffeU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U]));
    vlSelfRef.tl_i[2U] = ((1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U]) 
                          | (0xfffffffeU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U]));
    vlSelfRef.tl_i[3U] = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                           << 0x0000000cU) | ((1U & 
                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U]) 
                                              | (0x00000ffeU 
                                                 & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((((((((2U & (((0x52U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                            >> 0x00000017U)) << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                             >> 0x00000016U)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 0x00000015U)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000014U)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 0x00000013U)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000012U)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000011U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                >> 0x00000010U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                               >> 0x0000000fU)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000000eU)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000000dU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x0000000cU)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000000bU)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000000aU)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 9U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      >> 8U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                            >> 7U)) << 1U)) | (1U & 
                                               ((0x68U 
                                                 == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                ^ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 6U)))) 
                << 6U) | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                      >> 5U)) << 1U)) 
                           | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                       >> 4U)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 3U)) << 1U)) | (1U 
                                                 & ((0x49U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 2U)))) 
                  << 2U) | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                       >> 1U)) << 1U)) 
                            | (1U & ((0x45U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U]))))) 
             << 8U) | ((((((2U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                  >> 0x0000001eU)) 
                           ^ ((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              << 1U)) | (1U & ((0x2aU 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  >> 0x0000001eU)))) 
                         << 6U) | (((2U & (((0x15U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001dU)) 
                                           << 1U)) 
                                    | (1U & ((0x1aU 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                >> 0x0000001cU)))) 
                                   << 4U)) | ((((2U 
                                                 & (((0x34U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                      >> 0x0000001bU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((0x61U 
                                                       == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                       >> 0x0000001aU)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((0x54U 
                                                       == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                       >> 0x00000019U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((0x19U 
                                                        == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                       ^ 
                                                       (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                        >> 0x00000018U))))))));
    __Vfunc_extract_h2d_cmd_intg__10__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__10__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__10__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__10__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__10__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 7696936905094875897ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__10__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__10__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__10__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__10__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__10__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__10__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__10__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__10__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__10__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__10__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__10__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__10__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 8U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_64(
                                                                    (0x41f7bb56d5525488ULL 
                                                                     & (0x5400000000000000ULL 
                                                                        ^ 
                                                                        (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 8U)))) 
                                                                          << 0x00000039U) 
                                                                         | vlSelfRef.__PVT__cmd)))))) 
                                                 << 5U) 
                                                | (((2U 
                                                     & (VL_REDXOR_64(
                                                                     (0x21ef76cdb2c93244ULL 
                                                                      & (0x5400000000000000ULL 
                                                                         ^ 
                                                                         (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 8U)))) 
                                                                           << 0x00000039U) 
                                                                          | vlSelfRef.__PVT__cmd)))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x11deee3b8e388e22ULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 8U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & (VL_REDXOR_64(
                                                                   (0x09bde1f87e0781e1ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 8U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (VL_REDXOR_64(
                                                                      (0x057c1ff801ff801fULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 8U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_64(
                                                                       (0x0303fff800007fffULL 
                                                                        & (0x5400000000000000ULL 
                                                                           ^ 
                                                                           (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 8U)))) 
                                                                             << 0x00000039U) 
                                                                            | vlSelfRef.__PVT__cmd))))))));
    vlSelfRef.__PVT__u_chk__DOT__data_o = (((QData)((IData)(
                                                            (((((((((0x7fU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 3U) 
                                                                   | ((0x7cU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U)) 
                                                                  | (((0x7aU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 1U) 
                                                                     | (0x76U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                 << 9U) 
                                                                | (((0x6eU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 8U) 
                                                                   | (((0x5eU 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 7U) 
                                                                      | ((0x3eU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 6U)))) 
                                                               | ((((0x79U 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((0x75U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 4U) 
                                                                      | ((0x6dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 3U))) 
                                                                  | (((0x5dU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U) 
                                                                     | (((0x3dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 1U) 
                                                                        | (0x73U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))))) 
                                                              << 0x0000000cU) 
                                                             | ((((((0x6bU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((IData)(
                                                                               ((vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000002aU) 
                                                                                ^ 
                                                                                (0x5bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                       << 4U) 
                                                                      | (8U 
                                                                         & (((0x3bU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000029U))) 
                                                                            << 3U)))) 
                                                                  | ((4U 
                                                                      & (((0x67U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000028U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x57U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000027U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x37U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000026U))))))) 
                                                                 << 6U) 
                                                                | ((((4U 
                                                                      & (((0x4fU 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000025U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x2fU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000024U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x1fU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000023U)))))) 
                                                                    << 3U) 
                                                                   | ((4U 
                                                                       & (((0x70U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000022U))) 
                                                                          << 2U)) 
                                                                      | ((2U 
                                                                          & (((0x68U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000021U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x58U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000020U))))))))))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             ((((((((2U 
                                                                     & (((0x38U 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001fU))) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & ((0x64U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001eU))))) 
                                                                   << 6U) 
                                                                  | (((2U 
                                                                       & (((0x54U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001dU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x34U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001cU))))) 
                                                                     << 4U)) 
                                                                 | ((((2U 
                                                                       & (((0x4cU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001bU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x2cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001aU))))) 
                                                                     << 2U) 
                                                                    | ((2U 
                                                                        & (((0x1cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000019U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x62U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000018U))))))) 
                                                                << 0x00000018U) 
                                                               | ((((((2U 
                                                                       & (((0x52U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000017U))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x32U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000016U))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x4aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000015U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x2aU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000014U))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x1aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000013U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x46U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000012U))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x26U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000011U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x16U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000010U))))))) 
                                                                  << 0x00000010U)) 
                                                              | (((((((2U 
                                                                       & (((0x0eU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000fU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x61U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000eU))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x51U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000dU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x31U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000cU))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x49U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000bU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x29U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000aU))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x19U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 9U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x45U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 8U))))))) 
                                                                  << 8U) 
                                                                 | (((((2U 
                                                                        & (((0x25U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 7U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x15U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 6U))))) 
                                                                      << 6U) 
                                                                     | (((2U 
                                                                          & (((0x0dU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 5U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x43U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 4U))))) 
                                                                        << 4U)) 
                                                                    | ((((2U 
                                                                          & (((0x23U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 3U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x13U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 2U))))) 
                                                                        << 2U) 
                                                                       | ((2U 
                                                                           & (((0x0bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 1U))) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & ((7U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                                ^ (IData)(vlSelfRef.__PVT__cmd)))))))))));
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__11__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__11__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__11__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__11__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                              >> 1U)))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                               >> 0x00000018U)))))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                            >> 1U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                           << 8U) 
                                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                             >> 0x00000018U)))))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                        >> 1U)))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       << 8U) 
                                                                      | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                         >> 0x00000018U)))))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 1U)))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000018U)))))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 1U)))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               << 8U) 
                                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000018U)))))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 1U)))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                               | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000018U)))))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 1U)))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               << 8U) 
                                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000018U))))))))))));
    vlSelfRef.tl_i[0U] = ((0xfffffffeU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U]) 
                          | (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.tl_i[1U] = ((1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U]) 
                          | (0xfffffffeU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U]));
    vlSelfRef.tl_i[2U] = ((1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U]) 
                          | (0xfffffffeU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U]));
    vlSelfRef.tl_i[3U] = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                           << 0x0000000cU) | ((1U & 
                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U]) 
                                              | (0x00000ffeU 
                                                 & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((((((((2U & (((0x52U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                            >> 0x00000017U)) << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                             >> 0x00000016U)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 0x00000015U)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000014U)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 0x00000013U)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000012U)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000011U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                >> 0x00000010U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                               >> 0x0000000fU)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000000eU)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000000dU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x0000000cU)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000000bU)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000000aU)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 9U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      >> 8U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                            >> 7U)) << 1U)) | (1U & 
                                               ((0x68U 
                                                 == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                ^ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 6U)))) 
                << 6U) | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                      >> 5U)) << 1U)) 
                           | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                       >> 4U)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 3U)) << 1U)) | (1U 
                                                 & ((0x49U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 2U)))) 
                  << 2U) | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                       >> 1U)) << 1U)) 
                            | (1U & ((0x45U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U]))))) 
             << 8U) | ((((((2U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                  >> 0x0000001eU)) 
                           ^ ((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              << 1U)) | (1U & ((0x2aU 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  >> 0x0000001eU)))) 
                         << 6U) | (((2U & (((0x15U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001dU)) 
                                           << 1U)) 
                                    | (1U & ((0x1aU 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                >> 0x0000001cU)))) 
                                   << 4U)) | ((((2U 
                                                 & (((0x34U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                      >> 0x0000001bU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((0x61U 
                                                       == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                       >> 0x0000001aU)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((0x54U 
                                                       == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                       >> 0x00000019U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((0x19U 
                                                        == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                       ^ 
                                                       (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                        >> 0x00000018U))))))));
    __Vfunc_extract_h2d_cmd_intg__11__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__11__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__11__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__11__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__11__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 18355900873368219405ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__11__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__11__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__11__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__11__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__11__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__11__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__11__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__11__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__11__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__11__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__11__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__11__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 8U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_64(
                                                                    (0x41f7bb56d5525488ULL 
                                                                     & (0x5400000000000000ULL 
                                                                        ^ 
                                                                        (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 8U)))) 
                                                                          << 0x00000039U) 
                                                                         | vlSelfRef.__PVT__cmd)))))) 
                                                 << 5U) 
                                                | (((2U 
                                                     & (VL_REDXOR_64(
                                                                     (0x21ef76cdb2c93244ULL 
                                                                      & (0x5400000000000000ULL 
                                                                         ^ 
                                                                         (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 8U)))) 
                                                                           << 0x00000039U) 
                                                                          | vlSelfRef.__PVT__cmd)))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x11deee3b8e388e22ULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 8U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & (VL_REDXOR_64(
                                                                   (0x09bde1f87e0781e1ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 8U)))) 
                                                                         << 0x00000039U) 
                                                                        | vlSelfRef.__PVT__cmd)))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (VL_REDXOR_64(
                                                                      (0x057c1ff801ff801fULL 
                                                                       & (0x5400000000000000ULL 
                                                                          ^ 
                                                                          (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 8U)))) 
                                                                            << 0x00000039U) 
                                                                           | vlSelfRef.__PVT__cmd)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_64(
                                                                       (0x0303fff800007fffULL 
                                                                        & (0x5400000000000000ULL 
                                                                           ^ 
                                                                           (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 8U)))) 
                                                                             << 0x00000039U) 
                                                                            | vlSelfRef.__PVT__cmd))))))));
    vlSelfRef.__PVT__u_chk__DOT__data_o = (((QData)((IData)(
                                                            (((((((((0x7fU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 3U) 
                                                                   | ((0x7cU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U)) 
                                                                  | (((0x7aU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 1U) 
                                                                     | (0x76U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                 << 9U) 
                                                                | (((0x6eU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 8U) 
                                                                   | (((0x5eU 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 7U) 
                                                                      | ((0x3eU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 6U)))) 
                                                               | ((((0x79U 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((0x75U 
                                                                        == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                       << 4U) 
                                                                      | ((0x6dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 3U))) 
                                                                  | (((0x5dU 
                                                                       == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                      << 2U) 
                                                                     | (((0x3dU 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         << 1U) 
                                                                        | (0x73U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))))) 
                                                              << 0x0000000cU) 
                                                             | ((((((0x6bU 
                                                                     == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                    << 5U) 
                                                                   | (((IData)(
                                                                               ((vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000002aU) 
                                                                                ^ 
                                                                                (0x5bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)))) 
                                                                       << 4U) 
                                                                      | (8U 
                                                                         & (((0x3bU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000029U))) 
                                                                            << 3U)))) 
                                                                  | ((4U 
                                                                      & (((0x67U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000028U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x57U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000027U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x37U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000026U))))))) 
                                                                 << 6U) 
                                                                | ((((4U 
                                                                      & (((0x4fU 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000025U))) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((0x2fU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000024U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x1fU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000023U)))))) 
                                                                    << 3U) 
                                                                   | ((4U 
                                                                       & (((0x70U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000022U))) 
                                                                          << 2U)) 
                                                                      | ((2U 
                                                                          & (((0x68U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000021U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x58U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000020U))))))))))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             ((((((((2U 
                                                                     & (((0x38U 
                                                                          == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                         ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001fU))) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & ((0x64U 
                                                                           == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                          ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001eU))))) 
                                                                   << 6U) 
                                                                  | (((2U 
                                                                       & (((0x54U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001dU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x34U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001cU))))) 
                                                                     << 4U)) 
                                                                 | ((((2U 
                                                                       & (((0x4cU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001bU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x2cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000001aU))))) 
                                                                     << 2U) 
                                                                    | ((2U 
                                                                        & (((0x1cU 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000019U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x62U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000018U))))))) 
                                                                << 0x00000018U) 
                                                               | ((((((2U 
                                                                       & (((0x52U 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000017U))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x32U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000016U))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x4aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000015U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x2aU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000014U))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x1aU 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000013U))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x46U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000012U))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x26U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000011U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x16U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x00000010U))))))) 
                                                                  << 0x00000010U)) 
                                                              | (((((((2U 
                                                                       & (((0x0eU 
                                                                            == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                           ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000fU))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((0x61U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000eU))))) 
                                                                     << 6U) 
                                                                    | (((2U 
                                                                         & (((0x51U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000dU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x31U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000cU))))) 
                                                                       << 4U)) 
                                                                   | ((((2U 
                                                                         & (((0x49U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000bU))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((0x29U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 0x0000000aU))))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (((0x19U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 9U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x45U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 8U))))))) 
                                                                  << 8U) 
                                                                 | (((((2U 
                                                                        & (((0x25U 
                                                                             == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                            ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 7U))) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((0x15U 
                                                                              == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                             ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 6U))))) 
                                                                      << 6U) 
                                                                     | (((2U 
                                                                          & (((0x0dU 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 5U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x43U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 4U))))) 
                                                                        << 4U)) 
                                                                    | ((((2U 
                                                                          & (((0x23U 
                                                                               == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                              ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 3U))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((0x13U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 2U))))) 
                                                                        << 2U) 
                                                                       | ((2U 
                                                                           & (((0x0bU 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                               ^ (IData)(
                                                                                (vlSelfRef.__PVT__cmd 
                                                                                >> 1U))) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & ((7U 
                                                                                == (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                                                ^ (IData)(vlSelfRef.__PVT__cmd)))))))))));
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}
