// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_tlul_cmd_intg_chk___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__19__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__19__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__19__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__19__tl);
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

VL_ATTR_COLD void Vsim_tlul_cmd_intg_chk___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__gen_cmd_intg_check__DOT__u_cmd_intg_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__gen_cmd_intg_check__DOT__u_cmd_intg_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__32__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__32__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__32__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__32__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                              >> 1U)))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                               >> 0x00000018U)))))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                            >> 1U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                           << 8U) 
                                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                             >> 0x00000018U)))))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                        >> 1U)))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                       << 8U) 
                                                                      | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                         >> 0x00000018U)))))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 1U)))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 0x00000018U)))))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 1U)))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                               << 8U) 
                                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 0x00000018U)))))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 1U)))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                                << 8U) 
                                                                               | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 0x00000018U)))))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 1U)))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                               << 8U) 
                                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 0x00000018U))))))))))));
    __Vfunc_extract_h2d_cmd_intg__32__tl[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U];
    __Vfunc_extract_h2d_cmd_intg__32__tl[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U];
    __Vfunc_extract_h2d_cmd_intg__32__tl[2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U];
    __Vfunc_extract_h2d_cmd_intg__32__tl[3U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__32__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 16685499880127930336ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__32__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__32__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__32__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__32__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__32__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__32__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__32__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__32__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__32__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__32__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__32__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__32__Vfuncout;
}

VL_ATTR_COLD void Vsim_tlul_cmd_intg_chk___stl_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__gen_cmd_intg_check__DOT__u_cmd_intg_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___stl_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__gen_cmd_intg_check__DOT__u_cmd_intg_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
    vlSelfRef.err_o = (IData)(((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
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

VL_ATTR_COLD void Vsim_tlul_cmd_intg_chk___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__gen_cmd_intg_check__DOT__u_cmd_intg_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__gen_cmd_intg_check__DOT__u_cmd_intg_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__34__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__34__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__34__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__34__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                              >> 1U)))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                               >> 0x00000018U)))))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                            >> 1U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                           << 8U) 
                                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                             >> 0x00000018U)))))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                        >> 1U)))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                       << 8U) 
                                                                      | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                         >> 0x00000018U)))))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 1U)))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 0x00000018U)))))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 1U)))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                               << 8U) 
                                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 0x00000018U)))))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 1U)))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                                << 8U) 
                                                                               | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 0x00000018U)))))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 1U)))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                               << 8U) 
                                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 0x00000018U))))))))))));
    __Vfunc_extract_h2d_cmd_intg__34__tl[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U];
    __Vfunc_extract_h2d_cmd_intg__34__tl[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U];
    __Vfunc_extract_h2d_cmd_intg__34__tl[2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U];
    __Vfunc_extract_h2d_cmd_intg__34__tl[3U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__34__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 14586513293415360174ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__34__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__34__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__34__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__34__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__34__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__34__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__34__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__34__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__34__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__34__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__34__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__34__Vfuncout;
}

VL_ATTR_COLD void Vsim_tlul_cmd_intg_chk___stl_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__gen_cmd_intg_check__DOT__u_cmd_intg_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___stl_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__gen_cmd_intg_check__DOT__u_cmd_intg_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
    vlSelfRef.err_o = (IData)(((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
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

VL_ATTR_COLD void Vsim_tlul_cmd_intg_chk___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__gen_cmd_intg_check__DOT__u_cmd_intg_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__gen_cmd_intg_check__DOT__u_cmd_intg_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__47__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__47__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__47__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__47__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                              >> 1U)))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                               >> 0x00000018U)))))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                            >> 1U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                           << 8U) 
                                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                             >> 0x00000018U)))))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                        >> 1U)))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                       << 8U) 
                                                                      | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                         >> 0x00000018U)))))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 1U)))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 0x00000018U)))))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 1U)))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                               << 8U) 
                                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 0x00000018U)))))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 1U)))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                                << 8U) 
                                                                               | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 0x00000018U)))))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 1U)))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                               << 8U) 
                                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                                                >> 0x00000018U))))))))))));
    __Vfunc_extract_h2d_cmd_intg__47__tl[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U];
    __Vfunc_extract_h2d_cmd_intg__47__tl[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U];
    __Vfunc_extract_h2d_cmd_intg__47__tl[2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U];
    __Vfunc_extract_h2d_cmd_intg__47__tl[3U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__47__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 13300739363838080479ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__47__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__47__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__47__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__47__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__47__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__47__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__47__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__47__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__47__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__47__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__47__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__47__Vfuncout;
}

VL_ATTR_COLD void Vsim_tlul_cmd_intg_chk___stl_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__gen_cmd_intg_check__DOT__u_cmd_intg_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___stl_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__gen_cmd_intg_check__DOT__u_cmd_intg_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
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
    vlSelfRef.err_o = (IData)(((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
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

VL_ATTR_COLD void Vsim_tlul_cmd_intg_chk___ctor_var_reset(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    VL_SCOPED_RAND_RESET_W(109, vlSelf->tl_i, __VscopeHash, 717864233454436411ull);
    vlSelf->err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11052201151567880375ull);
    vlSelf->__PVT__cmd = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 4759173320218931530ull);
    vlSelf->__PVT__u_chk__DOT__data_o = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 3024236857881314527ull);
    vlSelf->__PVT__u_chk__DOT__syndrome_o = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16249731298637110414ull);
    vlSelf->__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3063512748596423180ull);
    vlSelf->__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11665924336160825967ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__0__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 7627355536089093437ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__1__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 3930434000144647752ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__2__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 681419010538678306ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__3__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 16488010975756838426ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__4__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 12352409514827929586ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__5__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 2382735385847310654ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__6__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 18309120121103727989ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__7__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 15983805035067225205ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__8__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 614363113596888882ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__9__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 12949008213122126390ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__10__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 7696936905094875897ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__11__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 18355900873368219405ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__12__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 13807422927167256539ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__13__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 7039668755461756326ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__14__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 10476755482002384244ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__15__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 1522247765907668304ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__16__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 15178891550435367641ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__17__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 17800723906987210184ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__18__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 1549195369682023265ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__19__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 17746508257484111870ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__20__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 10225593687321475320ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__21__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 12704151118959556993ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__22__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 16219395093222571548ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__23__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 388966286373745202ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__24__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 4378323349608916591ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__25__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 77300418167028283ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__26__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 4250818968260428762ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__27__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 17740955257175112373ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__28__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 15297772430172055062ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__29__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 387682143451761532ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__30__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 18294428151162232322ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__31__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 13225020039468919671ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__32__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 16685499880127930336ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__33__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 13871102285789615343ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__34__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 14586513293415360174ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__35__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 16706872391358095896ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__36__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 7364180008183647612ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__37__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 12570980223594366589ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__38__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 8507148847739022355ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__39__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 4710009725079181948ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__40__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 4074775958464439896ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__41__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 17178675976759165650ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__42__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 57210162188610139ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__43__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 9122667082102687482ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__44__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 9061197197772591052ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__45__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 14142525372960212596ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__46__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 8167286226627492316ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__47__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 13300739363838080479ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__48__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 12249080349456582191ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__49__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 4108623279784260971ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__50__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 1140782661720842061ull);
}
