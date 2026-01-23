// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__12__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__12__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__12__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__12__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_363))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_363))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_363))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_363))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_363))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_363))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_363))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd))))))))));
    vlSelfRef.tl_i[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd)) 
                                   << 0x00000018U) 
                                  | (QData)((IData)(
                                                    ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_363 
                                                      << 1U) 
                                                     | (1U 
                                                        & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_i[1U] = ((0xff000000U & vlSelfRef.tl_i[1U]) 
                          | (IData)(((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd)) 
                                       << 0x00000018U) 
                                      | (QData)((IData)(
                                                        ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_363 
                                                          << 1U) 
                                                         | (1U 
                                                            & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                                     >> 0x00000020U)));
    vlSelfRef.tl_i[1U] = ((0x00ffffffU & vlSelfRef.tl_i[1U]) 
                          | ((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                           >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                                                   ((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
        = (((((((((2U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                         >> 0x0000001eU)) ^ ((0x52U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                             >> 0x0000001eU)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                              >> 0x0000001dU)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                               >> 0x0000001cU)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                              >> 0x0000001bU)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                               >> 0x0000001aU)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                               >> 0x00000019U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                                >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                            >> 0x0000000fU)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                             >> 0x0000000eU)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                              >> 0x0000000dU)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                               >> 0x0000000cU)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                              >> 0x0000000bU)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                               >> 0x0000000aU)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                               >> 9U)) << 1U)) | (1U 
                                                  & ((0x45U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                                                      >> 8U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                                     >> 7U)) << 1U)) 
                          | (1U & ((0x2aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                                      >> 6U)))) << 6U) 
                        | (((2U & (((0x15U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                                       >> 5U)) << 1U)) 
                            | (1U & ((0x1aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                                        >> 4U)))) << 4U)) 
                       | ((((2U & (((0x34U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                                       >> 3U)) << 1U)) 
                            | (1U & ((0x61U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                                        >> 2U)))) << 2U) 
                          | ((2U & (((0x54U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                                        >> 1U)) << 1U)) 
                             | (1U & ((0x19U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                      ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd)))))));
    __Vfunc_extract_h2d_cmd_intg__12__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__12__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__12__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__12__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__12__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 13807422927167256539ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__12__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__12__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__12__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__12__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__12__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__12__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__12__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__12__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__12__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__12__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__12__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__12__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_363 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_363 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_363 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_363 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_363 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_363 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_363 
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
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__13__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__13__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__13__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__13__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1))))))))));
    vlSelfRef.tl_i[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_h6e95ff9d_0_1363[0U];
    vlSelfRef.tl_i[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_h6e95ff9d_0_1363[1U];
    vlSelfRef.tl_i[2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_h6e95ff9d_0_1363[2U];
    vlSelfRef.tl_i[3U] = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__fifo_h__DOT__reqfifo__DOT__wvalid_i) 
                           << 0x0000000cU) | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_h6e95ff9d_0_1363[3U]);
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = (((((((((2U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                         >> 0x0000001eU)) ^ ((0x52U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                             >> 0x0000001eU)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                              >> 0x0000001dU)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                               >> 0x0000001cU)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                              >> 0x0000001bU)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                               >> 0x0000001aU)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                               >> 0x00000019U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                                >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                            >> 0x0000000fU)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                             >> 0x0000000eU)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                              >> 0x0000000dU)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                               >> 0x0000000cU)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                              >> 0x0000000bU)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                               >> 0x0000000aU)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                               >> 9U)) << 1U)) | (1U 
                                                  & ((0x45U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                                                      >> 8U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                                     >> 7U)) << 1U)) 
                          | (1U & ((0x2aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                                      >> 6U)))) << 6U) 
                        | (((2U & (((0x15U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                                       >> 5U)) << 1U)) 
                            | (1U & ((0x1aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                                        >> 4U)))) << 4U)) 
                       | ((((2U & (((0x34U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                                       >> 3U)) << 1U)) 
                            | (1U & ((0x61U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                                        >> 2U)))) << 2U) 
                          | ((2U & (((0x54U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1 
                                        >> 1U)) << 1U)) 
                             | (1U & ((0x19U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                      ^ vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__VdfgRegularize_ha6beb6f7_0_1)))))));
    __Vfunc_extract_h2d_cmd_intg__13__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__13__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__13__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__13__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__13__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 7039668755461756326ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__13__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__13__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__13__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__13__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__13__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__13__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__13__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__13__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__13__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__13__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__13__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__13__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364 
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
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket.__PVT__fifo_h__DOT__reqfifo__DOT__wvalid_i) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__14__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__14__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__14__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__14__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_362))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_362))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_362))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_362))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_362))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_362))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_362))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd))))))))));
    vlSelfRef.tl_i[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd)) 
                                   << 0x00000018U) 
                                  | (QData)((IData)(
                                                    ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_362 
                                                      << 1U) 
                                                     | (1U 
                                                        & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_i[1U] = ((0xff000000U & vlSelfRef.tl_i[1U]) 
                          | (IData)(((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd)) 
                                       << 0x00000018U) 
                                      | (QData)((IData)(
                                                        ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_362 
                                                          << 1U) 
                                                         | (1U 
                                                            & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                                     >> 0x00000020U)));
    vlSelfRef.tl_i[1U] = ((0x00ffffffU & vlSelfRef.tl_i[1U]) 
                          | ((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                           >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                                                   ((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
        = (((((((((2U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                         >> 0x0000001eU)) ^ ((0x52U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                             >> 0x0000001eU)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                              >> 0x0000001dU)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                               >> 0x0000001cU)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                              >> 0x0000001bU)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                               >> 0x0000001aU)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                               >> 0x00000019U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                                >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                            >> 0x0000000fU)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                             >> 0x0000000eU)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                              >> 0x0000000dU)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                               >> 0x0000000cU)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                              >> 0x0000000bU)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                               >> 0x0000000aU)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                               >> 9U)) << 1U)) | (1U 
                                                  & ((0x45U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                                                      >> 8U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                                     >> 7U)) << 1U)) 
                          | (1U & ((0x2aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                                      >> 6U)))) << 6U) 
                        | (((2U & (((0x15U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                                       >> 5U)) << 1U)) 
                            | (1U & ((0x1aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                                        >> 4U)))) << 4U)) 
                       | ((((2U & (((0x34U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                                       >> 3U)) << 1U)) 
                            | (1U & ((0x61U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                                        >> 2U)))) << 2U) 
                          | ((2U & (((0x54U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                                        >> 1U)) << 1U)) 
                             | (1U & ((0x19U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                      ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd)))))));
    __Vfunc_extract_h2d_cmd_intg__14__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__14__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__14__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__14__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__14__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 10476755482002384244ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__14__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__14__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__14__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__14__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__14__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__14__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__14__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__14__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__14__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__14__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__14__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__14__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_362 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_362 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_362 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_362 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_362 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_362 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_362 
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
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__15__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__15__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__15__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__15__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_365))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_365))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_365))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_365))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_365))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_365))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_365))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd))))))))));
    vlSelfRef.tl_i[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd)) 
                                   << 0x00000018U) 
                                  | (QData)((IData)(
                                                    ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_365 
                                                      << 1U) 
                                                     | (1U 
                                                        & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_i[1U] = ((0xff000000U & vlSelfRef.tl_i[1U]) 
                          | (IData)(((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd)) 
                                       << 0x00000018U) 
                                      | (QData)((IData)(
                                                        ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_365 
                                                          << 1U) 
                                                         | (1U 
                                                            & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                                     >> 0x00000020U)));
    vlSelfRef.tl_i[1U] = ((0x00ffffffU & vlSelfRef.tl_i[1U]) 
                          | ((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                           >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                                                   ((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
        = (((((((((2U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                         >> 0x0000001eU)) ^ ((0x52U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                             >> 0x0000001eU)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                              >> 0x0000001dU)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                               >> 0x0000001cU)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                              >> 0x0000001bU)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                               >> 0x0000001aU)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                               >> 0x00000019U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                                >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                            >> 0x0000000fU)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                             >> 0x0000000eU)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                              >> 0x0000000dU)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                               >> 0x0000000cU)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                              >> 0x0000000bU)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                               >> 0x0000000aU)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                               >> 9U)) << 1U)) | (1U 
                                                  & ((0x45U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                                                      >> 8U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                                     >> 7U)) << 1U)) 
                          | (1U & ((0x2aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                                      >> 6U)))) << 6U) 
                        | (((2U & (((0x15U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                                       >> 5U)) << 1U)) 
                            | (1U & ((0x1aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                                        >> 4U)))) << 4U)) 
                       | ((((2U & (((0x34U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                                       >> 3U)) << 1U)) 
                            | (1U & ((0x61U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                                        >> 2U)))) << 2U) 
                          | ((2U & (((0x54U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                                        >> 1U)) << 1U)) 
                             | (1U & ((0x19U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                      ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd)))))));
    __Vfunc_extract_h2d_cmd_intg__15__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__15__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__15__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__15__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__15__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 1522247765907668304ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__15__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__15__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__15__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__15__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__15__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__15__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__15__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__15__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__15__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__15__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__15__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__15__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_365 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_365 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_365 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_365 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_365 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_365 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_365 
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
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__16__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__16__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__16__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__16__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_370))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_370))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_370))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_370))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_370))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_370))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_370))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1))))))))));
    vlSelfRef.tl_i[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1)) 
                                   << 0x00000018U) 
                                  | (QData)((IData)(
                                                    ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_370 
                                                      << 1U) 
                                                     | (1U 
                                                        & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_i[1U] = ((0xff000000U & vlSelfRef.tl_i[1U]) 
                          | (IData)(((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1)) 
                                       << 0x00000018U) 
                                      | (QData)((IData)(
                                                        ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_370 
                                                          << 1U) 
                                                         | (1U 
                                                            & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                                     >> 0x00000020U)));
    vlSelfRef.tl_i[1U] = ((0x00ffffffU & vlSelfRef.tl_i[1U]) 
                          | ((IData)((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__fifo_h__DOT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__fifo_h__DOT__reqfifo__DOT__wvalid_i)) 
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
                           >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__fifo_h__DOT__reqfifo__DOT__wvalid_i)) 
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
                                                   ((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__fifo_h__DOT__reqfifo__DOT__wvalid_i)) 
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
        = (((((((((2U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                         >> 0x0000001eU)) ^ ((0x52U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                             >> 0x0000001eU)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                              >> 0x0000001dU)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                               >> 0x0000001cU)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                              >> 0x0000001bU)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                               >> 0x0000001aU)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                               >> 0x00000019U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                                >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                            >> 0x0000000fU)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                             >> 0x0000000eU)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                              >> 0x0000000dU)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                               >> 0x0000000cU)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                              >> 0x0000000bU)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                               >> 0x0000000aU)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                               >> 9U)) << 1U)) | (1U 
                                                  & ((0x45U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                                                      >> 8U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                                     >> 7U)) << 1U)) 
                          | (1U & ((0x2aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                                      >> 6U)))) << 6U) 
                        | (((2U & (((0x15U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                                       >> 5U)) << 1U)) 
                            | (1U & ((0x1aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                                        >> 4U)))) << 4U)) 
                       | ((((2U & (((0x34U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                                       >> 3U)) << 1U)) 
                            | (1U & ((0x61U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                                        >> 2U)))) << 2U) 
                          | ((2U & (((0x54U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1 
                                        >> 1U)) << 1U)) 
                             | (1U & ((0x19U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                      ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT____VdfgRegularize_hcd88e116_0_1)))))));
    __Vfunc_extract_h2d_cmd_intg__16__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__16__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__16__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__16__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__16__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 15178891550435367641ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__16__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__16__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__16__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__16__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__16__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__16__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__16__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__16__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__16__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__16__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__16__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__16__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_370 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_370 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_370 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_370 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_370 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_370 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_370 
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
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__fifo_h__DOT__reqfifo__DOT__wvalid_i) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}

void Vsim_tlul_cmd_intg_chk___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__17__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__17__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__17__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__17__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                              >> 1U)))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                               >> 0x00000018U)))))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                            >> 1U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                           << 8U) 
                                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                             >> 0x00000018U)))))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                        >> 1U)))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                       << 8U) 
                                                                      | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                         >> 0x00000018U)))))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 1U)))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 0x00000018U)))))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 1U)))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                               << 8U) 
                                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 0x00000018U)))))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 1U)))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                                << 8U) 
                                                                               | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 0x00000018U)))))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 1U)))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                               << 8U) 
                                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 0x00000018U))))))))))));
    __Vfunc_extract_h2d_cmd_intg__17__tl[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U];
    __Vfunc_extract_h2d_cmd_intg__17__tl[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U];
    __Vfunc_extract_h2d_cmd_intg__17__tl[2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U];
    __Vfunc_extract_h2d_cmd_intg__17__tl[3U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__17__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 17800723906987210184ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__17__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__17__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__17__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__17__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__17__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__17__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__17__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__17__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__17__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__17__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__17__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__17__Vfuncout;
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((((((((2U & (((0x52U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                            >> 0x00000017U)) << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                             >> 0x00000016U)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                              >> 0x00000015U)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                               >> 0x00000014U)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                              >> 0x00000013U)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                               >> 0x00000012U)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                               >> 0x00000011U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                >> 0x00000010U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                               >> 0x0000000fU)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                >> 0x0000000eU)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                  >> 0x0000000dU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 0x0000000cU)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                 >> 0x0000000bU)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                  >> 0x0000000aU)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 9U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                      >> 8U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                            >> 7U)) << 1U)) | (1U & 
                                               ((0x68U 
                                                 == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                ^ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                   >> 6U)))) 
                << 6U) | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                      >> 5U)) << 1U)) 
                           | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                       >> 4U)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                              >> 3U)) << 1U)) | (1U 
                                                 & ((0x49U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 2U)))) 
                  << 2U) | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                       >> 1U)) << 1U)) 
                            | (1U & ((0x45U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U]))))) 
             << 8U) | ((((((2U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                  >> 0x0000001eU)) 
                           ^ ((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              << 1U)) | (1U & ((0x2aU 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                  >> 0x0000001eU)))) 
                         << 6U) | (((2U & (((0x15U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                               >> 0x0000001dU)) 
                                           << 1U)) 
                                    | (1U & ((0x1aU 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                >> 0x0000001cU)))) 
                                   << 4U)) | ((((2U 
                                                 & (((0x34U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                      >> 0x0000001bU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((0x61U 
                                                       == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                       >> 0x0000001aU)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((0x54U 
                                                       == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                       >> 0x00000019U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((0x19U 
                                                        == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                       ^ 
                                                       (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                        >> 0x00000018U))))))));
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
    vlSelfRef.err_o = (IData)(((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                >> 0x0000000cU) & (
                                                   (((~ 
                                                      VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                     & (0U 
                                                        != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                                                    | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                                   | (((~ 
                                                        VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                       & (0U 
                                                          != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                                                      | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__18__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__18__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__18__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__18__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_371))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_371))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_371))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_371))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_371))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_371))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_371))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd))))))))));
    vlSelfRef.tl_i[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd)) 
                                   << 0x00000018U) 
                                  | (QData)((IData)(
                                                    ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_371 
                                                      << 1U) 
                                                     | (1U 
                                                        & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_i[1U] = ((0xff000000U & vlSelfRef.tl_i[1U]) 
                          | (IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd)) 
                                       << 0x00000018U) 
                                      | (QData)((IData)(
                                                        ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_371 
                                                          << 1U) 
                                                         | (1U 
                                                            & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                                     >> 0x00000020U)));
    vlSelfRef.tl_i[1U] = ((0x00ffffffU & vlSelfRef.tl_i[1U]) 
                          | ((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__17__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__17__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                           >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__17__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                                                   ((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__17__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
        = (((((((((2U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                         >> 0x0000001eU)) ^ ((0x52U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                             >> 0x0000001eU)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                              >> 0x0000001dU)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                               >> 0x0000001cU)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                              >> 0x0000001bU)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                               >> 0x0000001aU)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                               >> 0x00000019U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                            >> 0x0000000fU)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                             >> 0x0000000eU)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                              >> 0x0000000dU)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                               >> 0x0000000cU)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                              >> 0x0000000bU)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                               >> 0x0000000aU)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                               >> 9U)) << 1U)) | (1U 
                                                  & ((0x45U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                                      >> 8U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                     >> 7U)) << 1U)) 
                          | (1U & ((0x2aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                      >> 6U)))) << 6U) 
                        | (((2U & (((0x15U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                       >> 5U)) << 1U)) 
                            | (1U & ((0x1aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                        >> 4U)))) << 4U)) 
                       | ((((2U & (((0x34U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                       >> 3U)) << 1U)) 
                            | (1U & ((0x61U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                        >> 2U)))) << 2U) 
                          | ((2U & (((0x54U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                        >> 1U)) << 1U)) 
                             | (1U & ((0x19U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                      ^ vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd)))))));
    __Vfunc_extract_h2d_cmd_intg__18__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__18__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__18__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__18__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__18__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 1549195369682023265ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__18__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__18__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__18__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__18__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__18__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__18__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__18__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__18__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__18__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__18__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__18__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__18__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_371 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_371 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_371 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_371 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_371 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_371 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_371 
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
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__17__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}

void Vsim_tlul_cmd_intg_chk___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__gen_data_intg__DOT__u_data_gen__DOT__data_o 
                                                                      >> 0x00000020U))))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__gen_data_intg__DOT__u_data_gen__DOT__data_o 
                                                                                >> 0x00000020U))))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__gen_data_intg__DOT__u_data_gen__DOT__data_o 
                                                                                >> 0x00000020U))))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__gen_data_intg__DOT__u_data_gen__DOT__data_o 
                                                                                >> 0x00000020U))))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__gen_data_intg__DOT__u_data_gen__DOT__data_o 
                                                                                >> 0x00000020U))))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & (IData)(
                                                                                (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__gen_data_intg__DOT__u_data_gen__DOT__data_o 
                                                                                >> 0x00000020U))))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__gen_data_intg__DOT__u_data_gen__DOT__data_o 
                                                                                >> 0x00000020U))))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U]))))))))));
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = (((((((((2U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                         >> 0x0000001eU)) ^ ((0x52U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                             >> 0x0000001eU)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                              >> 0x0000001dU)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                               >> 0x0000001cU)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                              >> 0x0000001bU)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                               >> 0x0000001aU)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                               >> 0x00000019U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                            >> 0x0000000fU)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                             >> 0x0000000eU)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                              >> 0x0000000dU)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                               >> 0x0000000cU)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                              >> 0x0000000bU)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                               >> 0x0000000aU)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                               >> 9U)) << 1U)) | (1U 
                                                  & ((0x45U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                      >> 8U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                     >> 7U)) << 1U)) 
                          | (1U & ((0x2aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                      >> 6U)))) << 6U) 
                        | (((2U & (((0x15U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                       >> 5U)) << 1U)) 
                            | (1U & ((0x1aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                        >> 4U)))) << 4U)) 
                       | ((((2U & (((0x34U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                       >> 3U)) << 1U)) 
                            | (1U & ((0x61U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                        >> 2U)))) << 2U) 
                          | ((2U & (((0x54U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                        >> 1U)) << 1U)) 
                             | (1U & ((0x19U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                      ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])))))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__19__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__19__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__19__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__19__tl);
    // Body
    __Vfunc_extract_h2d_cmd_intg__19__tl[0U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[0U];
    __Vfunc_extract_h2d_cmd_intg__19__tl[1U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[1U];
    __Vfunc_extract_h2d_cmd_intg__19__tl[2U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[2U];
    __Vfunc_extract_h2d_cmd_intg__19__tl[3U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__19__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 17746508257484111870ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__19__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__19__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__19__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__19__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__19__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__19__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__19__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__19__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__19__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__19__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__19__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__19__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__u_cmd_gen__DOT__data_o 
                                                                                >> 0x00000039U))))) 
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
                                                                                & (IData)(
                                                                                (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__u_cmd_gen__DOT__data_o 
                                                                                >> 0x00000039U))))) 
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
                                                                                & (IData)(
                                                                                (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__u_cmd_gen__DOT__data_o 
                                                                                >> 0x00000039U))))) 
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
                                                                                & (IData)(
                                                                                (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__u_cmd_gen__DOT__data_o 
                                                                                >> 0x00000039U))))) 
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
                                                                                & (IData)(
                                                                                (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__u_cmd_gen__DOT__data_o 
                                                                                >> 0x00000039U))))) 
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
                                                                                & (IData)(
                                                                                (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__u_cmd_gen__DOT__data_o 
                                                                                >> 0x00000039U))))) 
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
                                                                                & (IData)(
                                                                                (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__u_cmd_gen__DOT__data_o 
                                                                                >> 0x00000039U))))) 
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
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__req_i) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__20__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__20__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__20__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__20__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_373))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_373))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_373))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_373))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_373))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_373))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_373))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd))))))))));
    vlSelfRef.tl_i[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd)) 
                                   << 0x00000018U) 
                                  | (QData)((IData)(
                                                    ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_373 
                                                      << 1U) 
                                                     | (1U 
                                                        & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_i[1U] = ((0xff000000U & vlSelfRef.tl_i[1U]) 
                          | (IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd)) 
                                       << 0x00000018U) 
                                      | (QData)((IData)(
                                                        ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_373 
                                                          << 1U) 
                                                         | (1U 
                                                            & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                                     >> 0x00000020U)));
    vlSelfRef.tl_i[1U] = ((0x00ffffffU & vlSelfRef.tl_i[1U]) 
                          | ((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__19__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__19__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                           >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__19__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                                                   ((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__19__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
        = (((((((((2U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                         >> 0x0000001eU)) ^ ((0x52U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                             >> 0x0000001eU)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                              >> 0x0000001dU)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                               >> 0x0000001cU)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                              >> 0x0000001bU)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                               >> 0x0000001aU)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                               >> 0x00000019U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                            >> 0x0000000fU)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                             >> 0x0000000eU)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                              >> 0x0000000dU)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                               >> 0x0000000cU)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                              >> 0x0000000bU)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                               >> 0x0000000aU)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                               >> 9U)) << 1U)) | (1U 
                                                  & ((0x45U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                      >> 8U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                     >> 7U)) << 1U)) 
                          | (1U & ((0x2aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                      >> 6U)))) << 6U) 
                        | (((2U & (((0x15U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                       >> 5U)) << 1U)) 
                            | (1U & ((0x1aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                        >> 4U)))) << 4U)) 
                       | ((((2U & (((0x34U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                       >> 3U)) << 1U)) 
                            | (1U & ((0x61U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                        >> 2U)))) << 2U) 
                          | ((2U & (((0x54U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                        >> 1U)) << 1U)) 
                             | (1U & ((0x19U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                      ^ vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd)))))));
    __Vfunc_extract_h2d_cmd_intg__20__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__20__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__20__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__20__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__20__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 10225593687321475320ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__20__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__20__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__20__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__20__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__20__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__20__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__20__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__20__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__20__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__20__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__20__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__20__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_373 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_373 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_373 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_373 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_373 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_373 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_373 
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
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__19__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__21__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__21__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__21__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__21__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U]))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             << 9U) 
                                                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
                                                               >> 0x00000017U)))))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U]))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                           << 9U) 
                                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                             >> 0x00000017U)))))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U]))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       << 9U) 
                                                                      | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                         >> 0x00000017U)))))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U]))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000017U)))))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U]))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               << 9U) 
                                                                              | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000017U)))))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U]))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                               | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000017U)))))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U]))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               << 9U) 
                                                                              | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000017U))))))))))));
    vlSelfRef.tl_i[0U] = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
                           << 1U) | (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__wdepth_o))));
    vlSelfRef.tl_i[1U] = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
                           >> 0x0000001fU) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                              << 1U));
    vlSelfRef.tl_i[2U] = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                           >> 0x0000001fU) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                              << 1U));
    vlSelfRef.tl_i[3U] = ((0x00001000U & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__empty_rclk)) 
                                          << 0x0000000cU)) 
                          | ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                              >> 0x0000001fU) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[3U] 
                                                 << 1U)));
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((((((((2U & (((0x52U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                            >> 0x00000016U)) << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                             >> 0x00000015U)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 0x00000014U)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000013U)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 0x00000012U)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000011U)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000010U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                >> 0x0000000fU)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                               >> 0x0000000eU)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000000dU)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000000cU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x0000000bU)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000000aU)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 9U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 8U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      >> 7U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                            >> 6U)) << 1U)) | (1U & 
                                               ((0x68U 
                                                 == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                ^ (
                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 5U)))) 
                << 6U) | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                      >> 4U)) << 1U)) 
                           | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                       >> 3U)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 2U)) << 1U)) | (1U 
                                                 & ((0x49U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 1U)))) 
                  << 2U) | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U]) 
                                   << 1U)) | ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001fU) 
                                              ^ (0x45U 
                                                 == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
                                     >> 0x0000001eU)) 
                                 << 1U)) | (1U & ((0x2aU 
                                                   == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                  ^ 
                                                  (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
                                                   >> 0x0000001dU)))) 
                         << 6U) | (((2U & (((0x15U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001cU)) 
                                           << 1U)) 
                                    | (1U & ((0x1aU 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
                                                >> 0x0000001bU)))) 
                                   << 4U)) | ((((2U 
                                                 & (((0x34U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
                                                      >> 0x0000001aU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((0x61U 
                                                       == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
                                                       >> 0x00000019U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((0x54U 
                                                       == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
                                                       >> 0x00000018U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((0x19U 
                                                        == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                       ^ 
                                                       (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
                                                        >> 0x00000017U))))))));
    __Vfunc_extract_h2d_cmd_intg__21__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__21__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__21__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__21__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__21__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 12704151118959556993ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__21__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__21__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__21__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__21__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__21__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__21__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__21__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__21__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__21__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__21__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__21__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__21__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
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
    vlSelfRef.err_o = (1U & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__empty_rclk)) 
                             & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                  & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                                 | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                                | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                                   | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__22__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__22__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__22__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__22__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_366))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_366))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_366))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_366))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_366))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_366))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_366))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o))))))))));
    vlSelfRef.tl_i[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o)) 
                                   << 0x00000018U) 
                                  | (QData)((IData)(
                                                    ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_366 
                                                      << 1U) 
                                                     | (1U 
                                                        & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_i[1U] = ((0xff000000U & vlSelfRef.tl_i[1U]) 
                          | (IData)(((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o)) 
                                       << 0x00000018U) 
                                      | (QData)((IData)(
                                                        ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_366 
                                                          << 1U) 
                                                         | (1U 
                                                            & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                                     >> 0x00000020U)));
    vlSelfRef.tl_i[1U] = ((0x00ffffffU & vlSelfRef.tl_i[1U]) 
                          | ((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                           >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                                                   ((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
        = (((((((((2U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                         >> 0x0000001eU)) ^ ((0x52U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 0x0000001eU)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000001dU)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000001cU)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000001bU)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000001aU)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x00000019U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                            >> 0x0000000fU)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                             >> 0x0000000eU)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000000dU)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000000cU)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                              >> 0x0000000bU)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 0x0000000aU)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                               >> 9U)) << 1U)) | (1U 
                                                  & ((0x45U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 8U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                     >> 7U)) << 1U)) 
                          | (1U & ((0x2aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                      >> 6U)))) << 6U) 
                        | (((2U & (((0x15U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                       >> 5U)) << 1U)) 
                            | (1U & ((0x1aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 4U)))) << 4U)) 
                       | ((((2U & (((0x34U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                       >> 3U)) << 1U)) 
                            | (1U & ((0x61U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 2U)))) << 2U) 
                          | ((2U & (((0x54U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                        >> 1U)) << 1U)) 
                             | (1U & ((0x19U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                      ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o)))))));
    __Vfunc_extract_h2d_cmd_intg__22__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__22__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__22__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__22__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__22__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 16219395093222571548ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__22__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__22__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__22__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__22__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__22__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__22__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__22__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__22__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__22__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__22__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__22__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__22__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_366 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_366 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_366 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_366 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_366 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_366 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_366 
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
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__23__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__23__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__23__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__23__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_367))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_367))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_367))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_367))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_367))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_367))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_367))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata))))))))));
    vlSelfRef.tl_i[0U] = (IData)((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata)) 
                                   << 0x00000018U) 
                                  | (QData)((IData)(
                                                    ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_367 
                                                      << 1U) 
                                                     | (1U 
                                                        & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.tl_i[1U] = ((0xff000000U & vlSelfRef.tl_i[1U]) 
                          | (IData)(((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata)) 
                                       << 0x00000018U) 
                                      | (QData)((IData)(
                                                        ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_367 
                                                          << 1U) 
                                                         | (1U 
                                                            & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                                     >> 0x00000020U)));
    vlSelfRef.tl_i[1U] = ((0x00ffffffU & vlSelfRef.tl_i[1U]) 
                          | ((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
    vlSelfRef.tl_i[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                           >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
                                                   ((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)) 
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
        = (((((((((2U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                         >> 0x0000001eU)) ^ ((0x52U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                             >> 0x0000001eU)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                              >> 0x0000001dU)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                               >> 0x0000001cU)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                              >> 0x0000001bU)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                               >> 0x0000001aU)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                               >> 0x00000019U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                                >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                            >> 0x0000000fU)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                             >> 0x0000000eU)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                              >> 0x0000000dU)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                               >> 0x0000000cU)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                              >> 0x0000000bU)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                               >> 0x0000000aU)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                               >> 9U)) << 1U)) | (1U 
                                                  & ((0x45U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                                                      >> 8U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                                     >> 7U)) << 1U)) 
                          | (1U & ((0x2aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                                      >> 6U)))) << 6U) 
                        | (((2U & (((0x15U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                                       >> 5U)) << 1U)) 
                            | (1U & ((0x1aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                                        >> 4U)))) << 4U)) 
                       | ((((2U & (((0x34U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                                       >> 3U)) << 1U)) 
                            | (1U & ((0x61U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                                        >> 2U)))) << 2U) 
                          | ((2U & (((0x54U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                                        >> 1U)) << 1U)) 
                             | (1U & ((0x19U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                      ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata)))))));
    __Vfunc_extract_h2d_cmd_intg__23__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__23__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__23__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__23__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__23__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 388966286373745202ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__23__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__23__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__23__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__23__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__23__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__23__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__23__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__23__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__23__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__23__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__23__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__23__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_367 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_367 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_367 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_367 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_367 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_367 
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
                                                                                & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_367 
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
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}
