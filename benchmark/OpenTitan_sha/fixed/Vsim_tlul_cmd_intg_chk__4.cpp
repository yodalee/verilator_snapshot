// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_tlul_cmd_intg_chk___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__gen_cmd_intg_check__DOT__u_cmd_intg_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__gen_cmd_intg_check__DOT__u_cmd_intg_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((((((((2U & (((0x52U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                            >> 0x00000017U)) << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                             >> 0x00000016U)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                              >> 0x00000015U)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                               >> 0x00000014U)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                              >> 0x00000013U)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                               >> 0x00000012U)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                               >> 0x00000011U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                >> 0x00000010U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                               >> 0x0000000fU)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                >> 0x0000000eU)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                  >> 0x0000000dU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 0x0000000cU)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                 >> 0x0000000bU)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                  >> 0x0000000aU)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 9U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                      >> 8U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                            >> 7U)) << 1U)) | (1U & 
                                               ((0x68U 
                                                 == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                ^ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                   >> 6U)))) 
                << 6U) | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                      >> 5U)) << 1U)) 
                           | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                       >> 4U)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                              >> 3U)) << 1U)) | (1U 
                                                 & ((0x49U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 2U)))) 
                  << 2U) | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                       >> 1U)) << 1U)) 
                            | (1U & ((0x45U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U]))))) 
             << 8U) | ((((((2U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                  >> 0x0000001eU)) 
                           ^ ((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              << 1U)) | (1U & ((0x2aU 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                  >> 0x0000001eU)))) 
                         << 6U) | (((2U & (((0x15U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                               >> 0x0000001dU)) 
                                           << 1U)) 
                                    | (1U & ((0x1aU 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                >> 0x0000001cU)))) 
                                   << 4U)) | ((((2U 
                                                 & (((0x34U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                      >> 0x0000001bU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((0x61U 
                                                       == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                       >> 0x0000001aU)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((0x54U 
                                                       == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                       >> 0x00000019U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((0x19U 
                                                        == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                       ^ 
                                                       (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                        >> 0x00000018U))))))));
}

void Vsim_tlul_cmd_intg_chk___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__gen_cmd_intg_check__DOT__u_cmd_intg_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__gen_cmd_intg_check__DOT__u_cmd_intg_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__48__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__48__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__48__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__48__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                              >> 1U)))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                               >> 0x00000018U)))))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                            >> 1U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                           << 8U) 
                                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                             >> 0x00000018U)))))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                        >> 1U)))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       << 8U) 
                                                                      | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                         >> 0x00000018U)))))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 1U)))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000018U)))))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 1U)))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               << 8U) 
                                                                              | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000018U)))))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 1U)))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                               | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000018U)))))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 1U)))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               << 8U) 
                                                                              | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000018U))))))))))));
    __Vfunc_extract_h2d_cmd_intg__48__tl[0U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[0U];
    __Vfunc_extract_h2d_cmd_intg__48__tl[1U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U];
    __Vfunc_extract_h2d_cmd_intg__48__tl[2U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[2U];
    __Vfunc_extract_h2d_cmd_intg__48__tl[3U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__48__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 12249080349456582191ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__48__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__48__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__48__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__48__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__48__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__48__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__48__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__48__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__48__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__48__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__48__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__48__Vfuncout;
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((((((((2U & (((0x52U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                            >> 0x00000017U)) << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                             >> 0x00000016U)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 0x00000015U)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000014U)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 0x00000013U)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000012U)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000011U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                >> 0x00000010U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                               >> 0x0000000fU)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000000eU)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000000dU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x0000000cU)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000000bU)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000000aU)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 9U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      >> 8U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                            >> 7U)) << 1U)) | (1U & 
                                               ((0x68U 
                                                 == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                ^ (
                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 6U)))) 
                << 6U) | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                      >> 5U)) << 1U)) 
                           | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                       >> 4U)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 3U)) << 1U)) | (1U 
                                                 & ((0x49U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 2U)))) 
                  << 2U) | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                       >> 1U)) << 1U)) 
                            | (1U & ((0x45U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U]))))) 
             << 8U) | ((((((2U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                  >> 0x0000001eU)) 
                           ^ ((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              << 1U)) | (1U & ((0x2aU 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  >> 0x0000001eU)))) 
                         << 6U) | (((2U & (((0x15U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001dU)) 
                                           << 1U)) 
                                    | (1U & ((0x1aU 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                >> 0x0000001cU)))) 
                                   << 4U)) | ((((2U 
                                                 & (((0x34U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                      >> 0x0000001bU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((0x61U 
                                                       == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                       >> 0x0000001aU)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((0x54U 
                                                       == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                       >> 0x00000019U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((0x19U 
                                                        == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                       ^ 
                                                       (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                        >> 0x00000018U))))))));
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
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
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rvalid_o) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__49__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__49__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__49__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__49__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                              >> 1U)))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                               >> 0x00000018U)))))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                            >> 1U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                           << 8U) 
                                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                             >> 0x00000018U)))))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                        >> 1U)))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       << 8U) 
                                                                      | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                         >> 0x00000018U)))))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 1U)))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000018U)))))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 1U)))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               << 8U) 
                                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000018U)))))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 1U)))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                               | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000018U)))))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 1U)))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               << 8U) 
                                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000018U))))))))))));
    vlSelfRef.tl_i[0U] = ((0xfffffffeU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U]) 
                          | (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.tl_i[1U] = ((1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U]) 
                          | (0xfffffffeU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U]));
    vlSelfRef.tl_i[2U] = ((1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U]) 
                          | (0xfffffffeU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U]));
    vlSelfRef.tl_i[3U] = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                           << 0x0000000cU) | ((1U & 
                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U]) 
                                              | (0x00000ffeU 
                                                 & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((((((((2U & (((0x52U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                            >> 0x00000017U)) << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                             >> 0x00000016U)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 0x00000015U)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000014U)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 0x00000013U)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000012U)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000011U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                >> 0x00000010U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                               >> 0x0000000fU)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000000eU)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000000dU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x0000000cU)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000000bU)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000000aU)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 9U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      >> 8U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                            >> 7U)) << 1U)) | (1U & 
                                               ((0x68U 
                                                 == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                ^ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 6U)))) 
                << 6U) | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                      >> 5U)) << 1U)) 
                           | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                       >> 4U)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 3U)) << 1U)) | (1U 
                                                 & ((0x49U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 2U)))) 
                  << 2U) | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                       >> 1U)) << 1U)) 
                            | (1U & ((0x45U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U]))))) 
             << 8U) | ((((((2U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                  >> 0x0000001eU)) 
                           ^ ((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              << 1U)) | (1U & ((0x2aU 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  >> 0x0000001eU)))) 
                         << 6U) | (((2U & (((0x15U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001dU)) 
                                           << 1U)) 
                                    | (1U & ((0x1aU 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                >> 0x0000001cU)))) 
                                   << 4U)) | ((((2U 
                                                 & (((0x34U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                      >> 0x0000001bU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((0x61U 
                                                       == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                       >> 0x0000001aU)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((0x54U 
                                                       == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                       >> 0x00000019U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((0x19U 
                                                        == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                       ^ 
                                                       (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                        >> 0x00000018U))))))));
    __Vfunc_extract_h2d_cmd_intg__49__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__49__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__49__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__49__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__49__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 4108623279784260971ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__49__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__49__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__49__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__49__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__49__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__49__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__49__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__49__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__49__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__49__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__49__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__49__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
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
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}

void Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_chk__0(Vsim_tlul_cmd_intg_chk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_tlul_cmd_intg_chk___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_chk__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__50__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__50__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__50__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__50__tl);
    // Body
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                              >> 1U)))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                               >> 0x00000018U)))))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                            >> 1U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                           << 8U) 
                                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                             >> 0x00000018U)))))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                        >> 1U)))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       << 8U) 
                                                                      | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                         >> 0x00000018U)))))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 1U)))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000018U)))))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 1U)))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               << 8U) 
                                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000018U)))))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 1U)))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                               | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000018U)))))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 1U)))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               << 8U) 
                                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000018U))))))))))));
    vlSelfRef.tl_i[0U] = ((0xfffffffeU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U]) 
                          | (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.tl_i[1U] = ((1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U]) 
                          | (0xfffffffeU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U]));
    vlSelfRef.tl_i[2U] = ((1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U]) 
                          | (0xfffffffeU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U]));
    vlSelfRef.tl_i[3U] = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                           << 0x0000000cU) | ((1U & 
                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U]) 
                                              | (0x00000ffeU 
                                                 & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((((((((2U & (((0x52U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                            >> 0x00000017U)) << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                             >> 0x00000016U)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 0x00000015U)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000014U)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 0x00000013U)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000012U)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                               >> 0x00000011U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                >> 0x00000010U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                               >> 0x0000000fU)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000000eU)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000000dU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x0000000cU)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000000bU)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000000aU)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 9U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      >> 8U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                            >> 7U)) << 1U)) | (1U & 
                                               ((0x68U 
                                                 == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                ^ (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 6U)))) 
                << 6U) | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                      >> 5U)) << 1U)) 
                           | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                       >> 4U)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 3U)) << 1U)) | (1U 
                                                 & ((0x49U 
                                                     == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 2U)))) 
                  << 2U) | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                       >> 1U)) << 1U)) 
                            | (1U & ((0x45U == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                     ^ vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U]))))) 
             << 8U) | ((((((2U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                  >> 0x0000001eU)) 
                           ^ ((0x4cU == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              << 1U)) | (1U & ((0x2aU 
                                                == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  >> 0x0000001eU)))) 
                         << 6U) | (((2U & (((0x15U 
                                             == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x0000001dU)) 
                                           << 1U)) 
                                    | (1U & ((0x1aU 
                                              == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                >> 0x0000001cU)))) 
                                   << 4U)) | ((((2U 
                                                 & (((0x34U 
                                                      == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                      >> 0x0000001bU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((0x61U 
                                                       == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                       >> 0x0000001aU)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((0x54U 
                                                       == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                       >> 0x00000019U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((0x19U 
                                                        == (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                       ^ 
                                                       (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                        >> 0x00000018U))))))));
    __Vfunc_extract_h2d_cmd_intg__50__tl[0U] = vlSelfRef.tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__50__tl[1U] = vlSelfRef.tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__50__tl[2U] = vlSelfRef.tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__50__tl[3U] = vlSelfRef.tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__50__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 1140782661720842061ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__50__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__50__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__50__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__50__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__50__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__50__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__50__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__50__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__50__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__50__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__50__payload;
    vlSelfRef.__PVT__cmd = __Vfunc_extract_h2d_cmd_intg__50__Vfuncout;
    vlSelfRef.__PVT__u_chk__DOT__syndrome_o = (((((2U 
                                                   & (VL_REDXOR_64(
                                                                   (0x81fbdda769a46910ULL 
                                                                    & (0x5400000000000000ULL 
                                                                       ^ 
                                                                       (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
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
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
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
    vlSelfRef.err_o = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                       & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                            & (0U != (IData)(vlSelfRef.__PVT__u_chk__DOT__syndrome_o))) 
                           | VL_REDXOR_8(vlSelfRef.__PVT__u_chk__DOT__syndrome_o)) 
                          | (((~ VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              & (0U != (IData)(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
                             | VL_REDXOR_8(vlSelfRef.__PVT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))));
}
