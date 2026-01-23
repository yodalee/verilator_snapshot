// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_ibex_core__pi148___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__1(Vsim_ibex_core__pi148* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_ibex_core__pi148___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U])) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U])) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U])) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U])) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U])) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U]))))))))));
    vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                          << 0x00000027U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                             << 7U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U])) 
                                               >> 0x00000019U)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                                        << 0x00000027U) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                                           << 7U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U])) 
                                                             >> 0x00000019U)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                                    << 0x00000027U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                                       << 7U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U])) 
                                                         >> 0x00000019U)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                                                  << 0x00000027U) 
                                                                 | (((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                                                     << 7U) 
                                                                    | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U])) 
                                                                       >> 0x00000019U)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                                            << 0x00000027U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                                               << 7U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U])) 
                                                                 >> 0x00000019U)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                                             << 0x00000027U) 
                                                            | (((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                                                << 7U) 
                                                               | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U])) 
                                                                  >> 0x00000019U)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                                            << 0x00000027U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                                               << 7U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U])) 
                                                                 >> 0x00000019U))))))))));
    vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U])) 
                                          << 0x0000002eU) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U])) 
                                             << 0x0000000eU) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) 
                                               >> 0x00000012U)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U])) 
                                                        << 0x0000002eU) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U])) 
                                                           << 0x0000000eU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) 
                                                             >> 0x00000012U)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U])) 
                                                    << 0x0000002eU) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U])) 
                                                       << 0x0000000eU) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) 
                                                         >> 0x00000012U)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U])) 
                                                                  << 0x0000002eU) 
                                                                 | (((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U])) 
                                                                     << 0x0000000eU) 
                                                                    | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) 
                                                                       >> 0x00000012U)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U])) 
                                                            << 0x0000002eU) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U])) 
                                                               << 0x0000000eU) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) 
                                                                 >> 0x00000012U)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U])) 
                                                             << 0x0000002eU) 
                                                            | (((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U])) 
                                                                << 0x0000000eU) 
                                                               | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) 
                                                                  >> 0x00000012U)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U])) 
                                                            << 0x0000002eU) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U])) 
                                                               << 0x0000000eU) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) 
                                                                 >> 0x00000012U))))))))));
    vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) 
                                          << 0x00000038U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) 
                                             << 0x00000018U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U])) 
                                               >> 8U)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) 
                                                        << 0x00000038U) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) 
                                                           << 0x00000018U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U])) 
                                                             >> 8U)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U])) 
                                                         >> 8U)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) 
                                                                  << 0x00000038U) 
                                                                 | (((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) 
                                                                     << 0x00000018U) 
                                                                    | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U])) 
                                                                       >> 8U)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) 
                                                            << 0x00000038U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) 
                                                               << 0x00000018U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U])) 
                                                                 >> 8U)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) 
                                                             << 0x00000038U) 
                                                            | (((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) 
                                                                << 0x00000018U) 
                                                               | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U])) 
                                                                  >> 8U)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) 
                                                            << 0x00000038U) 
                                                           | (((QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) 
                                                               << 0x00000018U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U])) 
                                                                 >> 8U))))))))));
    vlSelfRef.__PVT__if_stage_i__DOT__ic_data_rdata_i[0U][0U] 
        = vlSelfRef.ic_data_rdata_i[0U][0U];
    vlSelfRef.__PVT__if_stage_i__DOT__ic_data_rdata_i[0U][1U] 
        = vlSelfRef.ic_data_rdata_i[0U][1U];
    vlSelfRef.__PVT__if_stage_i__DOT__ic_data_rdata_i[0U][2U] 
        = vlSelfRef.ic_data_rdata_i[0U][2U];
    vlSelfRef.__PVT__if_stage_i__DOT__ic_data_rdata_i[1U][0U] 
        = vlSelfRef.ic_data_rdata_i[1U][0U];
    vlSelfRef.__PVT__if_stage_i__DOT__ic_data_rdata_i[1U][1U] 
        = vlSelfRef.ic_data_rdata_i[1U][1U];
    vlSelfRef.__PVT__if_stage_i__DOT__ic_data_rdata_i[1U][2U] 
        = vlSelfRef.ic_data_rdata_i[1U][2U];
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_data_rdata_i[0U][0U] 
        = vlSelfRef.ic_data_rdata_i[0U][0U];
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_data_rdata_i[0U][1U] 
        = vlSelfRef.ic_data_rdata_i[0U][1U];
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_data_rdata_i[0U][2U] 
        = vlSelfRef.ic_data_rdata_i[0U][2U];
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_data_rdata_i[1U][0U] 
        = vlSelfRef.ic_data_rdata_i[1U][0U];
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_data_rdata_i[1U][1U] 
        = vlSelfRef.ic_data_rdata_i[1U][1U];
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_data_rdata_i[1U][2U] 
        = vlSelfRef.ic_data_rdata_i[1U][2U];
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__data_rdata_ic1[0U][0U] 
        = vlSelfRef.ic_data_rdata_i[0U][0U];
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__data_rdata_ic1[0U][1U] 
        = vlSelfRef.ic_data_rdata_i[0U][1U];
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__data_rdata_ic1[0U][2U] 
        = vlSelfRef.ic_data_rdata_i[0U][2U];
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__data_rdata_ic1[1U][0U] 
        = vlSelfRef.ic_data_rdata_i[1U][0U];
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__data_rdata_ic1[1U][1U] 
        = vlSelfRef.ic_data_rdata_i[1U][1U];
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__data_rdata_ic1[1U][2U] 
        = vlSelfRef.ic_data_rdata_i[1U][2U];
    vlSelfRef.__PVT__if_stage_i__DOT__ic_tag_rdata_i[0U] 
        = vlSelfRef.ic_tag_rdata_i[0U];
    vlSelfRef.__PVT__if_stage_i__DOT__ic_tag_rdata_i[1U] 
        = vlSelfRef.ic_tag_rdata_i[1U];
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_tag_rdata_i[0U] 
        = vlSelfRef.ic_tag_rdata_i[0U];
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_tag_rdata_i[1U] 
        = vlSelfRef.ic_tag_rdata_i[1U];
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__tag_rdata_ic1[0U] 
        = vlSelfRef.ic_tag_rdata_i[0U];
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__tag_rdata_ic1[1U] 
        = vlSelfRef.ic_tag_rdata_i[1U];
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__tag_invalid_ic1 
        = (3U & (~ ((2U & (vlSelfRef.ic_tag_rdata_i
                           [1U] >> 0x00000014U)) | 
                    (1U & (vlSelfRef.ic_tag_rdata_i
                           [0U] >> 0x00000015U)))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o 
        = ((((4U & (VL_REDXOR_32((0x083ed348U & (0x0a800000U 
                                                 ^ 
                                                 vlSelfRef.ic_tag_rdata_i
                                                 [1U]))) 
                    << 2U)) | ((2U & (VL_REDXOR_32(
                                                   (0x043daaa4U 
                                                    & (0x0a800000U 
                                                       ^ 
                                                       vlSelfRef.ic_tag_rdata_i
                                                       [1U]))) 
                                      << 1U)) | (1U 
                                                 & VL_REDXOR_32(
                                                                (0x023b6592U 
                                                                 & (0x0a800000U 
                                                                    ^ 
                                                                    vlSelfRef.ic_tag_rdata_i
                                                                    [1U])))))) 
            << 3U) | ((4U & (VL_REDXOR_32((0x01271c71U 
                                           & (0x0a800000U 
                                              ^ vlSelfRef.ic_tag_rdata_i
                                              [1U]))) 
                             << 2U)) | ((2U & (VL_REDXOR_32(
                                                            (0x0090fc0fU 
                                                             & (0x0a800000U 
                                                                ^ 
                                                                vlSelfRef.ic_tag_rdata_i
                                                                [1U]))) 
                                               << 1U)) 
                                        | (1U & VL_REDXOR_32(
                                                             (0x007003ffU 
                                                              & (0x0a800000U 
                                                                 ^ 
                                                                 vlSelfRef.ic_tag_rdata_i
                                                                 [1U])))))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o 
        = ((((4U & (VL_REDXOR_32((0x083ed348U & (0x0a800000U 
                                                 ^ 
                                                 vlSelfRef.ic_tag_rdata_i
                                                 [0U]))) 
                    << 2U)) | ((2U & (VL_REDXOR_32(
                                                   (0x043daaa4U 
                                                    & (0x0a800000U 
                                                       ^ 
                                                       vlSelfRef.ic_tag_rdata_i
                                                       [0U]))) 
                                      << 1U)) | (1U 
                                                 & VL_REDXOR_32(
                                                                (0x023b6592U 
                                                                 & (0x0a800000U 
                                                                    ^ 
                                                                    vlSelfRef.ic_tag_rdata_i
                                                                    [0U])))))) 
            << 3U) | ((4U & (VL_REDXOR_32((0x01271c71U 
                                           & (0x0a800000U 
                                              ^ vlSelfRef.ic_tag_rdata_i
                                              [0U]))) 
                             << 2U)) | ((2U & (VL_REDXOR_32(
                                                            (0x0090fc0fU 
                                                             & (0x0a800000U 
                                                                ^ 
                                                                vlSelfRef.ic_tag_rdata_i
                                                                [0U]))) 
                                               << 1U)) 
                                        | (1U & VL_REDXOR_32(
                                                             (0x007003ffU 
                                                              & (0x0a800000U 
                                                                 ^ 
                                                                 vlSelfRef.ic_tag_rdata_i
                                                                 [0U])))))));
    vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o 
        = (((((((((2U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                         >> 0x0000001eU)) ^ ((0x52U 
                                              == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                             << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                             >> 0x0000001eU)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                              >> 0x0000001dU)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                               >> 0x0000001cU)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                              >> 0x0000001bU)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                               >> 0x0000001aU)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                               >> 0x00000019U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                                >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                            >> 0x0000000fU)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                             >> 0x0000000eU)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                              >> 0x0000000dU)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                               >> 0x0000000cU)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                              >> 0x0000000bU)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                               >> 0x0000000aU)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                               >> 9U)) << 1U)) | (1U 
                                                  & ((0x45U 
                                                      == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                                                      >> 8U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                                     >> 7U)) << 1U)) 
                          | (1U & ((0x2aU == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                                      >> 6U)))) << 6U) 
                        | (((2U & (((0x15U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                                       >> 5U)) << 1U)) 
                            | (1U & ((0x1aU == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                                        >> 4U)))) << 4U)) 
                       | ((((2U & (((0x34U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                                       >> 3U)) << 1U)) 
                            | (1U & ((0x61U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                                        >> 2U)))) << 2U) 
                          | ((2U & (((0x54U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
                                        >> 1U)) << 1U)) 
                             | (1U & ((0x19U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                      ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))))));
    vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o 
        = ((((((((2U & (((0x52U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                            >> 0x00000018U)) << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                             >> 0x00000017U)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                              >> 0x00000016U)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                               >> 0x00000015U)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                              >> 0x00000014U)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                               >> 0x00000013U)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                               >> 0x00000012U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                >> 0x00000011U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                               >> 0x00000010U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                                >> 0x0000000fU)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                                  >> 0x0000000eU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                                     >> 0x0000000dU)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                                 >> 0x0000000cU)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                                  >> 0x0000000bU)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                                     >> 0x0000000aU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                                      >> 9U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                            >> 8U)) << 1U)) | (1U & 
                                               ((0x68U 
                                                 == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                                ^ (
                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                                   >> 7U)))) 
                << 6U) | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                      >> 6U)) << 1U)) 
                           | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                       >> 5U)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                              >> 4U)) << 1U)) | (1U 
                                                 & ((0x49U 
                                                     == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                                     >> 3U)))) 
                  << 2U) | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                       >> 2U)) << 1U)) 
                            | (1U & ((0x45U == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                        >> 1U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                  ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U]) 
                                 << 1U)) | ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                             >> 0x0000001fU) 
                                            ^ (0x2aU 
                                               == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)))) 
                         << 6U) | (((2U & (((0x15U 
                                             == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                               >> 0x0000001eU)) 
                                           << 1U)) 
                                    | (1U & ((0x1aU 
                                              == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                                >> 0x0000001dU)))) 
                                   << 4U)) | ((((2U 
                                                 & (((0x34U 
                                                      == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                                      >> 0x0000001cU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((0x61U 
                                                       == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                                       >> 0x0000001bU)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((0x54U 
                                                       == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                                       >> 0x0000001aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((0x19U 
                                                        == (IData)(vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                                       ^ 
                                                       (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                                        >> 0x00000019U))))))));
    vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__data_o 
        = ((((((((2U & (((0x52U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                            >> 0x00000011U)) << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                             >> 0x00000010U)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                              >> 0x0000000fU)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                               >> 0x0000000eU)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                              >> 0x0000000dU)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                               >> 0x0000000cU)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                               >> 0x0000000bU)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                >> 0x0000000aU)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                               >> 9U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                                >> 8U)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                                  >> 7U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                                     >> 6U)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                                 >> 5U)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                                  >> 4U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                                     >> 3U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                                      >> 2U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                            >> 1U)) << 1U)) | (1U & 
                                               ((0x68U 
                                                 == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                                ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U]))) 
                << 6U) | ((((2U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                   >> 0x0000001eU)) 
                            ^ ((0x31U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                               << 1U)) | (1U & ((0x51U 
                                                 == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                                ^ (
                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                   >> 0x0000001eU)))) 
                          << 4U)) | ((((2U & (((0x0dU 
                                                == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                  >> 0x0000001dU)) 
                                              << 1U)) 
                                       | (1U & ((0x49U 
                                                 == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                                ^ (
                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                   >> 0x0000001cU)))) 
                                      << 2U) | ((2U 
                                                 & (((0x38U 
                                                      == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                      >> 0x0000001bU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((0x45U 
                                                       == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                       >> 0x0000001aU)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                     >> 0x00000019U)) 
                                 << 1U)) | (1U & ((0x2aU 
                                                   == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                                  ^ 
                                                  (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                   >> 0x00000018U)))) 
                         << 6U) | (((2U & (((0x15U 
                                             == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & ((0x1aU 
                                              == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                >> 0x00000016U)))) 
                                   << 4U)) | ((((2U 
                                                 & (((0x34U 
                                                      == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                      >> 0x00000015U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((0x61U 
                                                       == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                       >> 0x00000014U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((0x54U 
                                                       == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                       >> 0x00000013U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((0x19U 
                                                        == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
                                                       ^ 
                                                       (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                        >> 0x00000012U))))))));
    vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__err_o 
        = ((((~ VL_REDXOR_8(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)) 
             & (0U != (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o))) 
            << 1U) | (1U & VL_REDXOR_8(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o)));
    vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__data_o 
        = ((((((((2U & (((0x52U == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                            >> 7U)) << 1U)) | (1U & 
                                               ((0x16U 
                                                 == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                                ^ (
                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                   >> 6U)))) 
                << 6U) | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                   ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                      >> 5U)) << 1U)) 
                           | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                       >> 4U)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                              >> 3U)) << 1U)) | (1U 
                                                 & ((0x23U 
                                                     == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                     >> 2U)))) 
                  << 2U) | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                    ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                       >> 1U)) << 1U)) 
                            | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                     ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U]))))) 
             << 0x00000018U) | (((((((2U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                            >> 0x0000001eU)) 
                                     ^ ((0x32U == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                        << 1U)) | (1U 
                                                   & ((0x70U 
                                                       == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                       >> 0x0000001eU)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                  >> 0x0000001dU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                     >> 0x0000001cU)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                              ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                 >> 0x0000001bU)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                               ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                  >> 0x0000001aU)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                     >> 0x00000019U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                      >> 0x00000018U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                         ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                            >> 0x00000017U)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                          ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                             >> 0x00000016U)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                              >> 0x00000015U)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                               >> 0x00000014U)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                           ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                              >> 0x00000013U)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                               >> 0x00000012U)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                               >> 0x00000011U)) << 1U)) 
                    | (1U & ((0x45U == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                >> 0x00000010U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                  ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                     >> 0x0000000fU)) 
                                 << 1U)) | (1U & ((0x2aU 
                                                   == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                                  ^ 
                                                  (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                   >> 0x0000000eU)))) 
                         << 6U) | (((2U & (((0x15U 
                                             == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                               >> 0x0000000dU)) 
                                           << 1U)) 
                                    | (1U & ((0x1aU 
                                              == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                             ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                >> 0x0000000cU)))) 
                                   << 4U)) | ((((2U 
                                                 & (((0x34U 
                                                      == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                      >> 0x0000000bU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((0x61U 
                                                       == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                       >> 0x0000000aU)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((0x54U 
                                                       == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                       >> 9U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((0x19U 
                                                        == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
                                                       ^ 
                                                       (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                        >> 8U))))))));
    vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__err_o 
        = ((((~ VL_REDXOR_8(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)) 
             & (0U != (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o))) 
            << 1U) | (1U & VL_REDXOR_8(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__data_o 
        = (((((((4U & (((0x3dU == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                        ^ (vlSelfRef.ic_tag_rdata_i
                           [1U] >> 0x00000015U)) << 2U)) 
                | ((2U & (((0x3bU == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                           ^ (vlSelfRef.ic_tag_rdata_i
                              [1U] >> 0x00000014U)) 
                          << 1U)) | (1U & ((0x38U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                           ^ (vlSelfRef.ic_tag_rdata_i
                                              [1U] 
                                              >> 0x00000013U))))) 
               << 8U) | (((4U & (((0x34U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                  ^ (vlSelfRef.ic_tag_rdata_i
                                     [1U] >> 0x00000012U)) 
                                 << 2U)) | ((2U & (
                                                   ((0x2cU 
                                                     == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSelfRef.ic_tag_rdata_i
                                                     [1U] 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                            | (1U & 
                                               ((0x1cU 
                                                 == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                ^ (
                                                   vlSelfRef.ic_tag_rdata_i
                                                   [1U] 
                                                   >> 0x00000010U))))) 
                         << 5U)) | ((((4U & (((0x32U 
                                               == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                              ^ (vlSelfRef.ic_tag_rdata_i
                                                 [1U] 
                                                 >> 0x0000000fU)) 
                                             << 2U)) 
                                      | ((2U & (((0x2aU 
                                                  == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSelfRef.ic_tag_rdata_i
                                                  [1U] 
                                                  >> 0x0000000eU)) 
                                                << 1U)) 
                                         | (1U & ((0x1aU 
                                                   == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                  ^ 
                                                  (vlSelfRef.ic_tag_rdata_i
                                                   [1U] 
                                                   >> 0x0000000dU))))) 
                                     << 2U) | ((2U 
                                                & (((0x26U 
                                                     == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSelfRef.ic_tag_rdata_i
                                                     [1U] 
                                                     >> 0x0000000cU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x16U 
                                                      == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSelfRef.ic_tag_rdata_i
                                                      [1U] 
                                                      >> 0x0000000bU)))))) 
            << 0x0000000bU) | (((((4U & (((0x0eU == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                          ^ (vlSelfRef.ic_tag_rdata_i
                                             [1U] >> 0x0000000aU)) 
                                         << 2U)) | 
                                  ((2U & (((0x31U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                           ^ (vlSelfRef.ic_tag_rdata_i
                                              [1U] 
                                              >> 9U)) 
                                          << 1U)) | 
                                   (1U & ((0x29U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                          ^ (vlSelfRef.ic_tag_rdata_i
                                             [1U] >> 8U))))) 
                                 << 8U) | (((4U & (
                                                   ((0x19U 
                                                     == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSelfRef.ic_tag_rdata_i
                                                     [1U] 
                                                     >> 7U)) 
                                                   << 2U)) 
                                            | ((2U 
                                                & (((0x25U 
                                                     == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSelfRef.ic_tag_rdata_i
                                                     [1U] 
                                                     >> 6U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x15U 
                                                      == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSelfRef.ic_tag_rdata_i
                                                      [1U] 
                                                      >> 5U))))) 
                                           << 5U)) 
                               | ((((4U & (((0x0dU 
                                             == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                            ^ (vlSelfRef.ic_tag_rdata_i
                                               [1U] 
                                               >> 4U)) 
                                           << 2U)) 
                                    | ((2U & (((0x23U 
                                                == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                               ^ (vlSelfRef.ic_tag_rdata_i
                                                  [1U] 
                                                  >> 3U)) 
                                              << 1U)) 
                                       | (1U & ((0x13U 
                                                 == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                ^ (
                                                   vlSelfRef.ic_tag_rdata_i
                                                   [1U] 
                                                   >> 2U))))) 
                                   << 2U) | ((2U & 
                                              (((0x0bU 
                                                 == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                ^ (
                                                   vlSelfRef.ic_tag_rdata_i
                                                   [1U] 
                                                   >> 1U)) 
                                               << 1U)) 
                                             | (1U 
                                                & ((7U 
                                                    == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                   ^ 
                                                   vlSelfRef.ic_tag_rdata_i
                                                   [1U]))))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__data_o 
        = (((((((4U & (((0x3dU == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                        ^ (vlSelfRef.ic_tag_rdata_i
                           [0U] >> 0x00000015U)) << 2U)) 
                | ((2U & (((0x3bU == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                           ^ (vlSelfRef.ic_tag_rdata_i
                              [0U] >> 0x00000014U)) 
                          << 1U)) | (1U & ((0x38U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                           ^ (vlSelfRef.ic_tag_rdata_i
                                              [0U] 
                                              >> 0x00000013U))))) 
               << 8U) | (((4U & (((0x34U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                  ^ (vlSelfRef.ic_tag_rdata_i
                                     [0U] >> 0x00000012U)) 
                                 << 2U)) | ((2U & (
                                                   ((0x2cU 
                                                     == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSelfRef.ic_tag_rdata_i
                                                     [0U] 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                            | (1U & 
                                               ((0x1cU 
                                                 == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                ^ (
                                                   vlSelfRef.ic_tag_rdata_i
                                                   [0U] 
                                                   >> 0x00000010U))))) 
                         << 5U)) | ((((4U & (((0x32U 
                                               == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                              ^ (vlSelfRef.ic_tag_rdata_i
                                                 [0U] 
                                                 >> 0x0000000fU)) 
                                             << 2U)) 
                                      | ((2U & (((0x2aU 
                                                  == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSelfRef.ic_tag_rdata_i
                                                  [0U] 
                                                  >> 0x0000000eU)) 
                                                << 1U)) 
                                         | (1U & ((0x1aU 
                                                   == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                  ^ 
                                                  (vlSelfRef.ic_tag_rdata_i
                                                   [0U] 
                                                   >> 0x0000000dU))))) 
                                     << 2U) | ((2U 
                                                & (((0x26U 
                                                     == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSelfRef.ic_tag_rdata_i
                                                     [0U] 
                                                     >> 0x0000000cU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x16U 
                                                      == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSelfRef.ic_tag_rdata_i
                                                      [0U] 
                                                      >> 0x0000000bU)))))) 
            << 0x0000000bU) | (((((4U & (((0x0eU == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                          ^ (vlSelfRef.ic_tag_rdata_i
                                             [0U] >> 0x0000000aU)) 
                                         << 2U)) | 
                                  ((2U & (((0x31U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                           ^ (vlSelfRef.ic_tag_rdata_i
                                              [0U] 
                                              >> 9U)) 
                                          << 1U)) | 
                                   (1U & ((0x29U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                          ^ (vlSelfRef.ic_tag_rdata_i
                                             [0U] >> 8U))))) 
                                 << 8U) | (((4U & (
                                                   ((0x19U 
                                                     == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSelfRef.ic_tag_rdata_i
                                                     [0U] 
                                                     >> 7U)) 
                                                   << 2U)) 
                                            | ((2U 
                                                & (((0x25U 
                                                     == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSelfRef.ic_tag_rdata_i
                                                     [0U] 
                                                     >> 6U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x15U 
                                                      == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSelfRef.ic_tag_rdata_i
                                                      [0U] 
                                                      >> 5U))))) 
                                           << 5U)) 
                               | ((((4U & (((0x0dU 
                                             == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                            ^ (vlSelfRef.ic_tag_rdata_i
                                               [0U] 
                                               >> 4U)) 
                                           << 2U)) 
                                    | ((2U & (((0x23U 
                                                == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                               ^ (vlSelfRef.ic_tag_rdata_i
                                                  [0U] 
                                                  >> 3U)) 
                                              << 1U)) 
                                       | (1U & ((0x13U 
                                                 == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                ^ (
                                                   vlSelfRef.ic_tag_rdata_i
                                                   [0U] 
                                                   >> 2U))))) 
                                   << 2U) | ((2U & 
                                              (((0x0bU 
                                                 == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                ^ (
                                                   vlSelfRef.ic_tag_rdata_i
                                                   [0U] 
                                                   >> 1U)) 
                                               << 1U)) 
                                             | (1U 
                                                & ((7U 
                                                    == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                   ^ 
                                                   vlSelfRef.ic_tag_rdata_i
                                                   [0U]))))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__tag_err_ic1 
        = ((2U & ((((~ VL_REDXOR_8(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                    & (0U != (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o))) 
                   | VL_REDXOR_8(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                  << 1U)) | (1U & (((~ VL_REDXOR_8(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                    & (0U != (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o))) 
                                   | VL_REDXOR_8(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_err_i 
        = (1U & ((0U != (IData)(vlSelfRef.__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__err_o)) 
                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                    >> 0x00000011U)));
    vlSelfRef.load_store_unit_i__DOT____VdfgRegularize_hd2184a1a_0_3 
        = ((0U != (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__err_o)) 
           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
              >> 0x0000000fU));
}

void Vsim_ibex_core__pi148___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__0(Vsim_ibex_core__pi148* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_ibex_core__pi148___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h2dc7b7d1_1_9;
    __VdfgRegularize_h2dc7b7d1_1_9 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_index_en = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__fcov_debug_req 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                    >> 5U)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_index_d 
        = vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_index_q;
    if ((2U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_q))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_q)))) {
            vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_index_en = 1U;
            vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_index_d 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_index_q)));
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_q))) {
        if ((1U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U])) {
            vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_index_en = 1U;
            vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_index_d = 0U;
        }
    }
    vlSelfRef.__PVT__load_store_unit_i__DOT__rdata_update = 0U;
    if ((4U & (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if ((0x00008000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) {
                    vlSelfRef.__PVT__load_store_unit_i__DOT__rdata_update 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__data_we_q)));
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            if ((1U & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                        >> 0x0000000fU) | (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__pmp_err_q)))) {
                vlSelfRef.__PVT__load_store_unit_i__DOT__rdata_update 
                    = (1U & (~ (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__data_we_q)));
            }
        }
    }
    vlSelfRef.__PVT__load_store_unit_i__DOT__fcov_mis_rvalid_1 
        = (((2U == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__ls_fsm_cs)) 
            | (4U == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__ls_fsm_cs))) 
           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
              >> 0x0000000fU));
    vlSelfRef.__PVT__load_store_unit_i__DOT__fcov_mis_rvalid_2 
        = ((0U == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__ls_fsm_cs)) 
           & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
               >> 0x0000000fU) & (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__fcov_mis_2_en_q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_492 = ((0x0000ff00U 
                                                   & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U]) 
                                                  | (0x000000ffU 
                                                     & (vlSelfRef.__PVT__load_store_unit_i__DOT__rdata_q 
                                                        >> 0x00000010U)));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i 
        = (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
             << 0x00000019U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                >> 7U)) & vlSelfRef.__PVT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_493 = (1U 
                                                  & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                      >> 0x00000010U) 
                                                     | (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__pmp_err_q)));
    vlSelfRef.__PVT__load_store_unit_i__DOT__data_or_pmp_err 
        = (1U & ((IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__lsu_err_q) 
                 | ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                     >> 7U) | (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__pmp_err_q))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_494 = (1U 
                                                  & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                      >> 0x0000000fU) 
                                                     | (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__pmp_err_q)));
    vlSelfRef.__PVT__new_nmi = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                 >> 6U) & (IData)(vlSelfRef.__VdfgRegularize_h2dc7b7d1_0_2));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irq_nm 
        = (1U & ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__g_intg_irq_int__DOT__mem_resp_intg_err_irq_pending_q) 
                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                    >> 6U)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__3__KET__ 
        = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
            >> 0x00000019U) & ((~ (0U != ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_exp) 
                                          & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_older_q__BRA__15__03a12__KET__)))) 
                               & (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_78)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__2__KET__ 
        = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
            >> 0x00000019U) & ((~ (0U != ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_exp) 
                                          & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_older_q__BRA__11__03a8__KET__)))) 
                               & (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_91)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__1__KET__ 
        = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
            >> 0x00000019U) & ((~ (0U != ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_exp) 
                                          & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_older_q__BRA__7__03a4__KET__)))) 
                               & (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_102)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__0__KET__ 
        = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
            >> 0x00000019U) & ((~ (0U != ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_exp) 
                                          & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_older_q__BRA__3__03a0__KET__)))) 
                               & (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_114)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__tag_match_ic1 
        = ((((0x003fffffU & vlSelfRef.ic_tag_rdata_i
              [1U]) == (0x00200000U | vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__lookup_addr_ic1)) 
            << 1U) | ((0x003fffffU & vlSelfRef.ic_tag_rdata_i
                       [0U]) == (0x00200000U | vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__lookup_addr_ic1)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__sel_way_ic1 
        = ((0U != (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__tag_invalid_ic1))
            ? (((IData)((2U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__tag_invalid_ic1))) 
                << 1U) | (1U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__tag_invalid_ic1)))
            : (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__round_robin_way_q));
    vlSelfRef.__PVT__id_stage_i__DOT__lsu_load_resp_intg_err_i 
        = ((~ (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__data_we_q)) 
           & (IData)(vlSelfRef.load_store_unit_i__DOT____VdfgRegularize_hd2184a1a_0_3));
    vlSelfRef.__PVT__id_stage_i__DOT__lsu_store_resp_intg_err_i 
        = ((IData)(vlSelfRef.load_store_unit_i__DOT____VdfgRegularize_hd2184a1a_0_3) 
           & (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__data_we_q));
    vlSelfRef.__PVT__load_store_unit_i__DOT__fcov_mis_2_en_d 
        = ((~ (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
           & ((IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
              | (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__fcov_mis_2_en_q)));
    vlSelfRef.__PVT__load_store_unit_i__DOT__fcov_mis_bus_err_1_d 
        = ((~ (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
           & (((IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
               & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                  >> 7U)) | (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q)));
    vlSelfRef.__PVT__load_store_unit_i__DOT__lsu_rdata_o 
        = ((2U & (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__data_type_q))
            ? ((2U & (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((1U & (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                              >> 7U)))) 
                            << 8U) | (0x000000ffU & 
                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U]))
                        : (0x000000ffU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U]))
                    : ((IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                        >> 0x0000001fU))) 
                            << 8U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                      >> 0x00000018U))
                        : (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                           >> 0x00000018U))) : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__rdata_offset_q))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__data_sign_ext_q)
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                                  >> 0x00000017U)))) 
                                                   << 8U) 
                                                  | (0x000000ffU 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                        >> 0x00000010U)))
                                                  : 
                                                 (0x000000ffU 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                     >> 0x00000010U)))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__data_sign_ext_q)
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                                  >> 0x0000000fU)))) 
                                                   << 8U) 
                                                  | (0x000000ffU 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                        >> 8U)))
                                                  : 
                                                 (0x000000ffU 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                     >> 8U)))))
            : ((1U & (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__data_type_q))
                ? ((2U & (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                  >> 0x0000000fU)))) 
                                << 0x00000010U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_492))
                            : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_492))
                        : ((IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                  >> 7U)))) 
                                << 0x00000010U) | (0x0000ffffU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                       << 8U) 
                                                      | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                         >> 0x00000018U))))
                            : (0x0000ffffU & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                               << 8U) 
                                              | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                 >> 0x00000018U)))))
                    : ((1U & (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                            >> 0x0000001fU))) 
                                << 0x00000010U) | (
                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                   >> 0x00000010U))
                            : (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                               >> 0x00000010U)) : ((IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__data_sign_ext_q)
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                                    >> 0x00000017U)))) 
                                                     << 0x00000010U) 
                                                    | (0x0000ffffU 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                          >> 8U)))
                                                    : 
                                                   (0x0000ffffU 
                                                    & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                       >> 8U)))))
                : ((2U & (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((0xffffff00U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U]) 
                           | (0x000000ffU & (vlSelfRef.__PVT__load_store_unit_i__DOT__rdata_q 
                                             >> 0x00000010U)))
                        : ((0xffff0000U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                           << 8U)) 
                           | (0x0000ffffU & (vlSelfRef.__PVT__load_store_unit_i__DOT__rdata_q 
                                             >> 8U))))
                    : ((1U & (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((0xff000000U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                           << 0x00000010U)) 
                           | vlSelfRef.__PVT__load_store_unit_i__DOT__rdata_q)
                        : ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                            << 0x00000018U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                               >> 8U))))));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0U;
    if ((0x00004000U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0eU;
    }
    if ((0x00002000U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0dU;
    }
    if ((0x00001000U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0cU;
    }
    if ((0x00000800U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0bU;
    }
    if ((0x00000400U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0aU;
    }
    if ((0x00000200U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 9U;
    }
    if ((0x00000100U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 8U;
    }
    if ((0x00000080U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 7U;
    }
    if ((0x00000040U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 6U;
    }
    if ((0x00000020U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 5U;
    }
    if ((0x00000010U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 4U;
    }
    if ((8U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 3U;
    }
    if ((4U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 2U;
    }
    if ((2U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 1U;
    }
    if ((1U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0U;
    }
    __VdfgRegularize_h2dc7b7d1_1_9 = ((0U != vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i) 
                                      & (((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                          >> 5U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__priv_lvl_q))));
    vlSelfRef.__PVT__wb_stage_i__DOT__rf_we_lsu_i = 
        (((0U == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__ls_fsm_cs)) 
          & ((~ (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__data_or_pmp_err)) 
             & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                 >> 0x0000000fU) & ((~ (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__data_we_q)) 
                                    & (~ (0U != (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__err_o))))))) 
         & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__outstanding_load_wb_i));
    vlSelfRef.__PVT__id_stage_i__DOT__lsu_resp_valid_i 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_494) 
           & (0U == (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__ls_fsm_cs)));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_70 
        = ((~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
               >> 3U)) & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__3__KET__));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_60 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__3__KET__) 
           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_err_i));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_83 
        = ((~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
               >> 2U)) & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__2__KET__));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_47 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_err_i));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_94 
        = ((~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
               >> 1U)) & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__1__KET__));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_34 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__1__KET__) 
           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_err_i));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_105 
        = ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q)) 
           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__0__KET__));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_21 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__0__KET__) 
           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_err_i));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] = 0U;
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] = 0U;
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U] = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__tag_match_ic1))) {
        __Vtemp_1[1U] = (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                         | vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__data_rdata_ic1
                         [0U][1U]);
        __Vtemp_1[2U] = (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U] 
                         | vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__data_rdata_ic1
                         [0U][2U]);
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
            = (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
               | vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__data_rdata_ic1
               [0U][0U]);
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
            = __Vtemp_1[1U];
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U] 
            = __Vtemp_1[2U];
    }
    if ((2U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__tag_match_ic1))) {
        __Vtemp_2[1U] = (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                         | vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__data_rdata_ic1
                         [1U][1U]);
        __Vtemp_2[2U] = (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U] 
                         | vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__data_rdata_ic1
                         [1U][2U]);
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
            = (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
               | vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__data_rdata_ic1
               [1U][0U]);
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
            = __Vtemp_2[1U];
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U] 
            = __Vtemp_2[2U];
    }
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mem_resp_intg_err_i 
        = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_load_resp_intg_err_i) 
           | (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_store_resp_intg_err_i));
    vlSelfRef.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux[1U] 
        = vlSelfRef.__PVT__load_store_unit_i__DOT__lsu_rdata_o;
    vlSelfRef.__PVT__new_irq = ((IData)(__VdfgRegularize_h2dc7b7d1_1_9) 
                                & (IData)(vlSelfRef.__VdfgRegularize_h2dc7b7d1_0_2));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__handle_irq 
        = ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & ((~ (vlSelfRef.__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                  >> 2U)) & ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q)) 
                             & ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irq_nm) 
                                | (IData)(__VdfgRegularize_h2dc7b7d1_1_9)))));
    vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_enc__DOT__data_i 
        = (((- (IData)((IData)(vlSelfRef.wb_stage_i__DOT____VdfgRegularize_h7ee5efe3_0_0))) 
            & vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q) 
           | ((- (IData)((IData)(vlSelfRef.__PVT__wb_stage_i__DOT__rf_we_lsu_i))) 
              & vlSelfRef.__PVT__load_store_unit_i__DOT__lsu_rdata_o));
    vlSelfRef.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we 
        = (((IData)(vlSelfRef.__PVT__wb_stage_i__DOT__rf_we_lsu_i) 
            << 1U) | (IData)(vlSelfRef.wb_stage_i__DOT____VdfgRegularize_h7ee5efe3_0_0));
    vlSelfRef.__PVT__rvfi_mem_rdata_d = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_resp_valid_i)
                                          ? vlSelfRef.__PVT__load_store_unit_i__DOT__lsu_rdata_o
                                          : vlSelfRef.__PVT__rvfi_mem_rdata_q);
    vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done 
        = ((2U == (IData)(vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)) 
           | (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_resp_valid_i));
    vlSelfRef.__PVT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access 
        = ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_resp_valid_i)) 
           & ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__outstanding_load_wb_i) 
              | (IData)(vlSelfRef.__PVT__id_stage_i__DOT__outstanding_store_wb_i)));
    vlSelfRef.__PVT__load_store_unit_i__DOT__load_err_o 
        = ((IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__data_or_pmp_err) 
           & ((~ (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__data_we_q)) 
              & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_resp_valid_i)));
    vlSelfRef.__PVT__load_store_unit_i__DOT__store_err_o 
        = ((IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__data_or_pmp_err) 
           & ((IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__data_we_q) 
              & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_resp_valid_i)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_d__BRA__7__KET__ 
        = (1U & (((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_60) 
                  & (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_59)) 
                 | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                     >> 3U) & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_q) 
                               >> 7U))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_d__BRA__6__KET__ 
        = (1U & (((~ (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_59)) 
                  & (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_60)) 
                 | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                     >> 3U) & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_q) 
                               >> 6U))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_d__BRA__5__KET__ 
        = (1U & (((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_47) 
                  & (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_46)) 
                 | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                     >> 2U) & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_q) 
                               >> 5U))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_d__BRA__4__KET__ 
        = (1U & (((~ (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_46)) 
                  & (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_47)) 
                 | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                     >> 2U) & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_q) 
                               >> 4U))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_d__BRA__3__KET__ 
        = (1U & (((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_34) 
                  & (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_33)) 
                 | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                     >> 1U) & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_q) 
                               >> 3U))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_d__BRA__2__KET__ 
        = (1U & (((~ (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_33)) 
                  & (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_34)) 
                 | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                     >> 1U) & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_q) 
                               >> 2U))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_d__BRA__1__KET__ 
        = (1U & (((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_21) 
                  & (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_19)) 
                 | ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                    & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_q) 
                       >> 1U))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_d__BRA__0__KET__ 
        = (1U & (((~ (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_19)) 
                  & (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_21)) 
                 | ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                    & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_q))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ic1 
        = (((QData)((IData)(((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U] 
                              << 0x00000019U) | (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                                                 >> 7U)))) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U])));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U])) 
                                          << 0x00000039U) 
                                         | (((QData)((IData)(
                                                             vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U])) 
                                             << 0x00000019U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U])) 
                                               >> 7U)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U])) 
                                                        << 0x00000039U) 
                                                       | (((QData)((IData)(
                                                                           vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U])) 
                                                           << 0x00000019U) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U])) 
                                                             >> 7U)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U])) 
                                                    << 0x00000039U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U])) 
                                                       << 0x00000019U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U])) 
                                                         >> 7U)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U])) 
                                                                  << 0x00000039U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U])) 
                                                                     << 0x00000019U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U])) 
                                                                       >> 7U)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U])) 
                                                            << 0x00000039U) 
                                                           | (((QData)((IData)(
                                                                               vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U])) 
                                                               << 0x00000019U) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U])) 
                                                                 >> 7U)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U])) 
                                                             << 0x00000039U) 
                                                            | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U])) 
                                                                << 0x00000019U) 
                                                               | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U])) 
                                                                  >> 7U)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U])) 
                                                            << 0x00000039U) 
                                                           | (((QData)((IData)(
                                                                               vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U])) 
                                                               << 0x00000019U) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U])) 
                                                                 >> 7U))))))))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U])) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U])))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U])))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U])))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U])) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U])))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U])) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U])))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U])) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U])))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U])) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U]))))))))));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__g_intg_irq_int__DOT__mem_resp_intg_err_addr_d 
        = vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__g_intg_irq_int__DOT__mem_resp_intg_err_addr_q;
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__g_intg_irq_int__DOT__mem_resp_intg_err_irq_set = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__g_intg_irq_int__DOT__mem_resp_intg_err_irq_pending_q)))) {
        if (vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mem_resp_intg_err_i) {
            vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__g_intg_irq_int__DOT__mem_resp_intg_err_addr_d 
                = vlSelfRef.__PVT__load_store_unit_i__DOT__addr_last_q;
            vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__g_intg_irq_int__DOT__mem_resp_intg_err_irq_set = 1U;
        }
    }
    vlSelfRef.__PVT__rvfi_rd_we_wb = ((0U != (IData)(vlSelfRef.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)) 
                                      | (IData)(vlSelfRef.__PVT__wb_stage_i__DOT__rf_we_lsu_i));
    vlSelfRef.__PVT__wb_stage_i__DOT__instr_done_wb_o 
        = ((IData)(vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
           & (IData)(vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__ready_wb_i 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q)) 
                 | (IData)(vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done)));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__load_err_i 
        = ((IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__load_err_o) 
           & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__outstanding_load_wb_i));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__store_err_i 
        = ((IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__store_err_o) 
           & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__outstanding_store_wb_i));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__data_o 
        = ((((((((2U & (((0x52U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                         ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U] 
                            >> 6U)) << 1U)) | (1U & 
                                               ((0x16U 
                                                 == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                ^ (
                                                   vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U] 
                                                   >> 5U)))) 
                << 6U) | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                   ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U] 
                                      >> 4U)) << 1U)) 
                           | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                    ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U] 
                                       >> 3U)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                           ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U] 
                              >> 2U)) << 1U)) | (1U 
                                                 & ((0x23U 
                                                     == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U] 
                                                     >> 1U)))) 
                  << 2U) | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                    ^ vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[2U]) 
                                   << 1U)) | ((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                                               >> 0x0000001fU) 
                                              ^ (0x2cU 
                                                 == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                            ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                                               >> 0x0000001eU)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                             ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                                                >> 0x0000001dU)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                                                  >> 0x0000001cU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                                                     >> 0x0000001bU)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                              ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                                                 >> 0x0000001aU)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                               ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                                                  >> 0x00000019U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                                                     >> 0x00000018U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                                                      >> 0x00000017U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                         ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                            >> 0x00000016U)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                          ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                             >> 0x00000015U)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                           ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                              >> 0x00000014U)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                            ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                               >> 0x00000013U)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                           ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                              >> 0x00000012U)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                            ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                               >> 0x00000011U)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                            ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                               >> 0x00000010U)) << 1U)) 
                    | (1U & ((0x45U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                             ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                                >> 0x0000000fU)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                  ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                                     >> 0x0000000eU)) 
                                 << 1U)) | (1U & ((0x2aU 
                                                   == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                  ^ 
                                                  (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                                                   >> 0x0000000dU)))) 
                         << 6U) | (((2U & (((0x15U 
                                             == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                            ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                                               >> 0x0000000cU)) 
                                           << 1U)) 
                                    | (1U & ((0x1aU 
                                              == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                             ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                                                >> 0x0000000bU)))) 
                                   << 4U)) | ((((2U 
                                                 & (((0x34U 
                                                      == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                                                      >> 0x0000000aU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((0x61U 
                                                       == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                                                       >> 9U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((0x54U 
                                                       == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                                                       >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((0x19U 
                                                        == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                       ^ 
                                                       (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[1U] 
                                                        >> 7U))))))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__data_o 
        = (((((((((2U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                         >> 0x0000001eU)) ^ ((0x52U 
                                              == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                             << 1U)) 
                 | (1U & ((0x16U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                          ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                             >> 0x0000001eU)))) << 6U) 
               | (((2U & (((0x29U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                           ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                              >> 0x0000001dU)) << 1U)) 
                   | (1U & ((0x4aU == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                            ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                               >> 0x0000001cU)))) << 4U)) 
              | ((((2U & (((0x62U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                           ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                              >> 0x0000001bU)) << 1U)) 
                   | (1U & ((0x23U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                            ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                               >> 0x0000001aU)))) << 2U) 
                 | ((2U & (((0x13U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                            ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                               >> 0x00000019U)) << 1U)) 
                    | (1U & ((0x2cU == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                             ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                                >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((0x32U 
                                             == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                            ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & ((0x70U 
                                              == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                             ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((0x0eU 
                                                  == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                 ^ 
                                                 (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((0x26U 
                                               == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                              ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & ((0x25U 
                                                == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                               ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0x1cU 
                                                      == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((7U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                         ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                            >> 0x0000000fU)) << 1U)) 
                 | (1U & ((0x68U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                          ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                             >> 0x0000000eU)))) << 6U) 
               | (((2U & (((0x31U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                           ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                              >> 0x0000000dU)) << 1U)) 
                   | (1U & ((0x51U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                            ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                               >> 0x0000000cU)))) << 4U)) 
              | ((((2U & (((0x0dU == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                           ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                              >> 0x0000000bU)) << 1U)) 
                   | (1U & ((0x49U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                            ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                               >> 0x0000000aU)))) << 2U) 
                 | ((2U & (((0x38U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                            ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                               >> 9U)) << 1U)) | (1U 
                                                  & ((0x45U 
                                                      == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                                                      >> 8U)))))) 
             << 8U) | (((((2U & (((0x4cU == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                  ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                                     >> 7U)) << 1U)) 
                          | (1U & ((0x2aU == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                   ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                                      >> 6U)))) << 6U) 
                        | (((2U & (((0x15U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                    ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                                       >> 5U)) << 1U)) 
                            | (1U & ((0x1aU == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                     ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                                        >> 4U)))) << 4U)) 
                       | ((((2U & (((0x34U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                    ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                                       >> 3U)) << 1U)) 
                            | (1U & ((0x61U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                     ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                                        >> 2U)))) << 2U) 
                          | ((2U & (((0x54U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                     ^ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U] 
                                        >> 1U)) << 1U)) 
                             | (1U & ((0x19U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                      ^ vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1[0U])))))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__data_err_ic1 
        = (((((~ VL_REDXOR_8(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
              & (0U != (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o))) 
             << 3U) | (4U & (VL_REDXOR_8(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o) 
                             << 2U))) | ((((~ VL_REDXOR_8(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o)) 
                                           & (0U != (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o))) 
                                          << 1U) | 
                                         (1U & VL_REDXOR_8(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o))));
    if (vlSelfRef.__PVT__rvfi_rd_we_wb) {
        vlSelfRef.__PVT__rvfi_rd_addr_d = vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q;
        vlSelfRef.__PVT__rvfi_rd_wdata_d = ((0U == (IData)(vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q))
                                             ? 0U : 
                                            ((0U != (IData)(vlSelfRef.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))
                                              ? vlSelfRef.__PVT__gen_regfile_ecc__DOT__regfile_ecc_enc__DOT__data_i
                                              : vlSelfRef.__PVT__load_store_unit_i__DOT__lsu_rdata_o));
    } else if (vlSelfRef.__PVT__rvfi_instr_new_wb) {
        vlSelfRef.__PVT__rvfi_rd_addr_d = 0U;
        vlSelfRef.__PVT__rvfi_rd_wdata_d = 0U;
    } else {
        vlSelfRef.__PVT__rvfi_rd_addr_d = vlSelfRef.__PVT__rvfi_rd_addr_q;
        vlSelfRef.__PVT__rvfi_rd_wdata_d = vlSelfRef.__PVT__rvfi_rd_wdata_q;
    }
    vlSelfRef.__PVT__rvfi_wb_done = (vlSelfRef.__PVT__rvfi_stage_valid
                                     [0U] & ((IData)(vlSelfRef.__PVT__wb_stage_i__DOT__instr_done_wb_o) 
                                             | vlSelfRef.__PVT__rvfi_stage_trap
                                             [0U]));
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
    if ((4U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold 
                    = (1U & (~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__ready_wb_i)));
            }
        }
    }
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu 
        = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__load_err_i) 
           | (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__store_err_i));
    vlSelfRef.__PVT__rvfi_stage_valid_d[1U] = vlSelfRef.__PVT__rvfi_wb_done;
    vlSelfRef.__PVT__cs_registers_i__DOT__instr_ret_i 
        = ((IData)(vlSelfRef.__PVT__wb_stage_i__DOT__instr_done_wb_o) 
           & ((~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu) 
                  & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_resp_valid_i))) 
              & (IData)(vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q)));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__wb_exception_o 
        = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q) 
           | ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q) 
              | (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu)));
}

void Vsim_ibex_core__pi148___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__1(Vsim_ibex_core__pi148* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_ibex_core__pi148___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_80;
    if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_80 = 0;
    // Body
    if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_80 
        = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_prim_buf_alert_minor__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (0U != (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__tag_match_ic1)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__3__KET__ 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_way_en__BRA__3__KET__) 
           & (IData)(if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_80));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__2__KET__ 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_way_en__BRA__2__KET__) 
           & (IData)(if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_80));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_way_en__BRA__1__KET__) 
           & (IData)(if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_80));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__0__KET__ 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_way_en__BRA__0__KET__) 
           & (IData)(if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_80));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_d__BRA__3__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__3__KET__) 
                 | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                     & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q)) 
                    >> 3U)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_d[3U] 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__3__KET__)
            ? vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ic1
            : (((QData)((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                  << 0x0000000eU) | 
                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                  >> 0x00000012U)))) 
                << 0x00000020U) | (QData)((IData)((
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                                    << 0x0000000eU) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                      >> 0x00000012U))))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_71 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__3__KET__) 
           & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_76) 
              & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__3__KET__) 
                 | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                     >> 3U) | ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_56) 
                               | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__3__KET__))))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_d__BRA__2__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__2__KET__) 
                 | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                     & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q)) 
                    >> 2U)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_d[2U] 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__2__KET__)
            ? vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ic1
            : (((QData)((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                  << 0x0000000eU) | 
                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                  >> 0x00000012U)))) 
                << 0x00000020U) | (QData)((IData)((
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                                    << 0x0000000eU) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                      >> 0x00000012U))))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_84 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__2__KET__) 
           & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_89) 
              & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__2__KET__) 
                 | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                     >> 2U) | ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_43) 
                               | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__2__KET__))))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_d__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__1__KET__) 
                 | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                     & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q)) 
                    >> 1U)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_d[1U] 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__1__KET__)
            ? vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ic1
            : (((QData)((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                  << 0x0000000eU) | 
                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                  >> 0x00000012U)))) 
                << 0x00000020U) | (QData)((IData)((
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                                    << 0x0000000eU) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                      >> 0x00000012U))))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_95 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__1__KET__) 
           & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_100) 
              & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__1__KET__) 
                 | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                     >> 1U) | ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_30) 
                               | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__1__KET__))))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_d__BRA__0__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__0__KET__) 
                 | ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                    & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_d[0U] 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__0__KET__)
            ? vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ic1
            : (((QData)((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                  << 0x0000000eU) | 
                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                  >> 0x00000012U)))) 
                << 0x00000020U) | (QData)((IData)((
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                                    << 0x0000000eU) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                      >> 0x00000012U))))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_106 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__0__KET__) 
           & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_112) 
              & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__0__KET__) 
                 | ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                    | ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_16) 
                       | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__0__KET__))))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_rvd 
        = ((((0x3ffffffeU & (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                              >> 2U) & (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__3__KET__) 
                                         & ((~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                                                >> 3U)) 
                                            & ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__3__KET__)) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_stale_q) 
                                                    >> 3U)) 
                                                  & ((~ 
                                                      ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                                                       >> 7U)) 
                                                     & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__3__KET__) 
                                                        & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_59) 
                                                           == 
                                                           (3U 
                                                            & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                                                               >> 6U))))))))) 
                                        << 1U))) | 
             (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
               >> 2U) & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__2__KET__) 
                         & ((~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                                >> 2U)) & ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__2__KET__)) 
                                           & ((~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_stale_q) 
                                                  >> 2U)) 
                                              & ((~ 
                                                  ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                                                   >> 5U)) 
                                                 & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__2__KET__) 
                                                    & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_46) 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                                                           >> 4U))))))))))) 
            << 2U) | ((0xfffffffeU & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                                      & (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__1__KET__) 
                                          & ((~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                                                 >> 1U)) 
                                             & ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__1__KET__)) 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_stale_q) 
                                                     >> 1U)) 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                                                        >> 3U)) 
                                                      & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__1__KET__) 
                                                         & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_33) 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                                                                >> 2U))))))))) 
                                         << 1U))) | 
                      ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                       & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__0__KET__) 
                          & ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q)) 
                             & ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__0__KET__)) 
                                & ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_stale_q)) 
                                   & ((~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                                          >> 1U)) & 
                                      ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__0__KET__) 
                                       & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_19) 
                                          == (3U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q))))))))))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_hit 
        = ((((0x3ffffffeU & (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                              >> 2U) & (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__3__KET__) 
                                         & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__3__KET__)) 
                                        << 1U))) | 
             (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
               >> 2U) & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__2__KET__) 
                         & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__2__KET__)))) 
            << 2U) | ((0xfffffffeU & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                                      & (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__1__KET__) 
                                          & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__1__KET__)) 
                                         << 1U))) | 
                      ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                       & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__0__KET__) 
                          & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__0__KET__)))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_arb 
        = ((((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_71) 
             << 3U) | ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_84) 
                       << 2U)) | (((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_95) 
                                   << 1U) | (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_106)));
    if ((0U != (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_hit))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err = 0U;
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data 
            = vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ic1;
    } else {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err 
            = vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_err;
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data 
            = vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_data;
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h5df9fcbf_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsim__ConstPool__TABLE_hf8601f55_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h99e708d5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h395e6778_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_he85dd9ee_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h133834bd_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h50a4d887_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h4e9d7c14_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_hd09f48e5_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h723ae096_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h66672509_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_hff2f9542_0;

void Vsim_ibex_core__pi148___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__3(Vsim_ibex_core__pi148* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_ibex_core__pi148___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_hc04a6b80__0;
    id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_hc04a6b80__0 = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__permission_check = 0;
    CData/*5:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*6:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*6:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*7:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    // Body
    if (vlSelfRef.rst_ni) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs 
            = vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        if (vlSelfRef.__PVT__if_stage_i__DOT__instr_new_id_d) {
            vlSelfRef.__PVT__instr_fetch_err = ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__stall_dummy_instr)) 
                                                & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__if_instr_err));
            vlSelfRef.__PVT__pc_id = (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U);
            vlSelfRef.__PVT__instr_rdata_id = vlSelfRef.__PVT__if_stage_i__DOT__instr_out;
        }
        if (((IData)(vlSelfRef.__PVT__pc_set) | ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ready_i) 
                                                 & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__valid_o)))) {
            vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                = vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_d;
        }
    } else {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = 0U;
        vlSelfRef.__PVT__instr_fetch_err = 0U;
        vlSelfRef.__PVT__pc_id = 0U;
        vlSelfRef.__PVT__instr_rdata_id = 0U;
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q = 0U;
    }
    vlSelfRef.__PVT__if_stage_i__DOT__instr_valid_id_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.__PVT__if_stage_i__DOT__instr_valid_id_d));
    vlSelfRef.__PVT__if_stage_i__DOT__stall_dummy_instr 
        = (((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
            >> 2U) & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_q) 
                      == ((IData)(vlSelfRef.__VdfgRegularize_h2dc7b7d1_1_34) 
                          & (3U | (0x0000001cU & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_d 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__stall_dummy_instr)
            ? 0U : (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_q))));
    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__imm_i_type_o 
        = (((- (IData)((vlSelfRef.__PVT__instr_rdata_id 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | (vlSelfRef.__PVT__instr_rdata_id >> 0x00000014U));
    vlSelfRef.__PVT__id_stage_i__DOT__rf_rd_b_wb_match_o 
        = (((0x0000001fU & (vlSelfRef.__PVT__instr_rdata_id 
                            >> 0x00000014U)) == (IData)(vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (0x0000001fU & (vlSelfRef.__PVT__instr_rdata_id 
                                    >> 0x00000014U))));
    id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_hc04a6b80__0 
        = (0U != (((2U == (3U & (vlSelfRef.__PVT__instr_rdata_id 
                                 >> 0x0000000cU))) 
                   << 2U) | (((1U == (3U & (vlSelfRef.__PVT__instr_rdata_id 
                                            >> 0x0000000cU))) 
                              << 1U) | (0U == (3U & 
                                               (vlSelfRef.__PVT__instr_rdata_id 
                                                >> 0x0000000cU))))));
    if (vlSelfRef.__PVT__if_stage_i__DOT__instr_valid_id_q) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
            = (1U & ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (vlSelfRef.__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                        >> 2U)));
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
            = vlSelfRef.__PVT__instr_fetch_err;
        vlSelfRef.id_stage_i__DOT____VdfgRegularize_h5aca553c_0_7 
            = (1U & (~ (IData)(vlSelfRef.__PVT__instr_fetch_err)));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i 
            = (1U & (~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__id_fsm_q)));
    } else {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
            = (1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err = 0U;
        vlSelfRef.id_stage_i__DOT____VdfgRegularize_h5aca553c_0_7 = 0U;
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i = 0U;
    }
    vlSelfRef.__VdfgRegularize_h2dc7b7d1_1_4 = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_rd_b_wb_match_o) 
                                                & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_write_wb_i));
    vlSelfRef.__PVT__rvfi_intr_d = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)
                                     ? (IData)(vlSelfRef.__PVT__rvfi_set_trap_pc_q)
                                     : (IData)(vlSelfRef.__PVT__rvfi_intr_q));
    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_raddr_a_o 
        = (0x0000001fU & (((~ (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)) 
                           & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_q))
                           ? (vlSelfRef.__PVT__instr_rdata_id 
                              >> 0x0000001bU) : (vlSelfRef.__PVT__instr_rdata_id 
                                                 >> 0x0000000fU)));
    vlSelfRef.__PVT__id_stage_i__DOT__jump_in_dec = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__jump_set_dec = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__branch_in_dec = 0U;
    vlSelfRef.__PVT__icache_inval = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__rf_wdata_sel = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_a_dec = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_b_dec = 0U;
    vlSelfRef.__PVT__csr_access = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__lsu_we = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__lsu_type = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__lsu_sign_ext = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__lsu_req_dec = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__ebrk_insn = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__wfi_insn_dec = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode 
        = (0x0000007fU & vlSelfRef.__PVT__instr_rdata_id);
    if ((0x00000040U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x00000020U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x00000010U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((0U == (7U & (vlSelfRef.__PVT__instr_rdata_id 
                                          >> 0x0000000cU)))) {
                            if ((0U == (vlSelfRef.__PVT__instr_rdata_id 
                                        >> 0x14U))) {
                                vlSelfRef.__PVT__id_stage_i__DOT__ecall_insn_dec = 1U;
                            } else if ((1U == (vlSelfRef.__PVT__instr_rdata_id 
                                               >> 0x14U))) {
                                vlSelfRef.__PVT__id_stage_i__DOT__ebrk_insn = 1U;
                            } else if ((0x0302U == 
                                        (vlSelfRef.__PVT__instr_rdata_id 
                                         >> 0x14U))) {
                                vlSelfRef.__PVT__id_stage_i__DOT__mret_insn_dec = 1U;
                            } else if ((0x07b2U == 
                                        (vlSelfRef.__PVT__instr_rdata_id 
                                         >> 0x14U))) {
                                vlSelfRef.__PVT__id_stage_i__DOT__dret_insn_dec = 1U;
                            } else if ((0x0105U == 
                                        (vlSelfRef.__PVT__instr_rdata_id 
                                         >> 0x14U))) {
                                vlSelfRef.__PVT__id_stage_i__DOT__wfi_insn_dec = 1U;
                            } else {
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     ((((0x0105U 
                                                         == 
                                                         (vlSelfRef.__PVT__instr_rdata_id 
                                                          >> 0x14U)) 
                                                        << 4U) 
                                                       | (((0x07b2U 
                                                            == 
                                                            (vlSelfRef.__PVT__instr_rdata_id 
                                                             >> 0x14U)) 
                                                           << 3U) 
                                                          | ((0x0302U 
                                                              == 
                                                              (vlSelfRef.__PVT__instr_rdata_id 
                                                               >> 0x14U)) 
                                                             << 2U))) 
                                                      | (((1U 
                                                           == 
                                                           (vlSelfRef.__PVT__instr_rdata_id 
                                                            >> 0x14U)) 
                                                          << 1U) 
                                                         | (0U 
                                                            == 
                                                            (vlSelfRef.__PVT__instr_rdata_id 
                                                             >> 0x14U)))))))) {
                                if ((0U != ((((0x0105U 
                                               == (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x00000014U)) 
                                              << 4U) 
                                             | (((0x07b2U 
                                                  == 
                                                  (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x00000014U)) 
                                                 << 3U) 
                                                | ((0x0302U 
                                                    == 
                                                    (vlSelfRef.__PVT__instr_rdata_id 
                                                     >> 0x00000014U)) 
                                                   << 2U))) 
                                            | (((1U 
                                                 == 
                                                 (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x00000014U)) 
                                                << 1U) 
                                               | (0U 
                                                  == 
                                                  (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x00000014U)))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:594: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core.id_stage_i.decoder_i: unique case, but multiple matches found for '12'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1),
                                                     -12,
                                                     vlSymsp->name(),
                                                     12,
                                                     (vlSelfRef.__PVT__instr_rdata_id 
                                                      >> 0x14U));
                                        Verilated::runFlushCallbacks();
                                        VL_STOP_MT("verilogSourceFiles/ibex_decoder.sv", 594, "");
                                    }
                                }
                            }
                            if ((IData)((0U != (0x000f8f80U 
                                                & vlSelfRef.__PVT__instr_rdata_id)))) {
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((3U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.__PVT__instr_rdata_id 
                                                            >> 0x0cU))) 
                                                       << 2U) 
                                                      | (((2U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.__PVT__instr_rdata_id 
                                                               >> 0x0cU))) 
                                                          << 1U) 
                                                         | (1U 
                                                            == 
                                                            (3U 
                                                             & (vlSelfRef.__PVT__instr_rdata_id 
                                                                >> 0x0cU))))))))) {
                                if ((0U != (((3U == 
                                              (3U & 
                                               (vlSelfRef.__PVT__instr_rdata_id 
                                                >> 0x0000000cU))) 
                                             << 2U) 
                                            | (((2U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.__PVT__instr_rdata_id 
                                                     >> 0x0000000cU))) 
                                                << 1U) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__instr_rdata_id 
                                                      >> 0x0000000cU))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:630: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1),
                                                     -12,
                                                     vlSymsp->name(),
                                                     2,
                                                     (3U 
                                                      & (vlSelfRef.__PVT__instr_rdata_id 
                                                         >> 0x0cU)));
                                        Verilated::runFlushCallbacks();
                                        VL_STOP_MT("verilogSourceFiles/ibex_decoder.sv", 630, "");
                                    }
                                }
                            }
                            vlSelfRef.__PVT__csr_access = 1U;
                            vlSelfRef.__PVT__id_stage_i__DOT__rf_wdata_sel = 1U;
                            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_id 
                                          >> 0x0000000eU)))) {
                                vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                            }
                            if ((1U == (3U & (vlSelfRef.__PVT__instr_rdata_id 
                                              >> 0x0cU)))) {
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                            } else if ((2U == (3U & 
                                               (vlSelfRef.__PVT__instr_rdata_id 
                                                >> 0x0cU)))) {
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__csr_op = 2U;
                            } else if ((3U == (3U & 
                                               (vlSelfRef.__PVT__instr_rdata_id 
                                                >> 0x0cU)))) {
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__csr_op = 3U;
                            } else {
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                = vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                        }
                    } else {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            vlSelfRef.__PVT__id_stage_i__DOT__jump_in_dec = 1U;
                            if (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                vlSelfRef.__PVT__id_stage_i__DOT__jump_set_dec = 1U;
                            } else {
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            }
                        } else {
                            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__jump_in_dec = 1U;
                        if (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
                            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            vlSelfRef.__PVT__id_stage_i__DOT__jump_set_dec = 1U;
                        } else {
                            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                        }
                        if ((0U != (7U & (vlSelfRef.__PVT__instr_rdata_id 
                                          >> 0x0000000cU)))) {
                            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                        vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    } else {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.__PVT__id_stage_i__DOT__branch_in_dec = 1U;
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                        = ((1U & (~ (vlSelfRef.__PVT__instr_rdata_id 
                                     >> 0x0000000eU))) 
                           && (1U & (vlSelfRef.__PVT__instr_rdata_id 
                                     >> 0x0000000dU)));
                    vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                } else {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    } else {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    if ((5U == ((4U & (vlSelfRef.__PVT__instr_rdata_id 
                                       >> 0x00000018U)) 
                                | (3U & (vlSelfRef.__PVT__instr_rdata_id 
                                         >> 0x0000000cU))))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                    } else if ((vlSelfRef.__PVT__instr_rdata_id 
                                >> 0x0000001fU)) {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x40000000U & vlSelfRef.__PVT__instr_rdata_id)) {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                            = ((0x20000000U & vlSelfRef.__PVT__instr_rdata_id)
                                ? ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                          >> 0x0000001cU)) 
                                   || ((0x08000000U 
                                        & vlSelfRef.__PVT__instr_rdata_id)
                                        ? ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x0000001aU)) 
                                           || ((1U 
                                                & (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x00000019U)) 
                                               || ((0x00004000U 
                                                    & vlSelfRef.__PVT__instr_rdata_id)
                                                    ? 
                                                   ((1U 
                                                     & (vlSelfRef.__PVT__instr_rdata_id 
                                                        >> 0x0000000dU)) 
                                                    || (1U 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__instr_rdata_id 
                                                            >> 0x0000000cU))))
                                                    : 
                                                   ((1U 
                                                     & (vlSelfRef.__PVT__instr_rdata_id 
                                                        >> 0x0000000dU)) 
                                                    || (1U 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__instr_rdata_id 
                                                            >> 0x0000000cU)))))))
                                        : ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x0000001aU)) 
                                           || ((1U 
                                                & (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x00000019U)) 
                                               || ((1U 
                                                    & (vlSelfRef.__PVT__instr_rdata_id 
                                                       >> 0x0000000dU)) 
                                                   || (1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__instr_rdata_id 
                                                           >> 0x0000000cU))))))))
                                : ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                          >> 0x0000001cU)) 
                                   || ((0x08000000U 
                                        & vlSelfRef.__PVT__instr_rdata_id)
                                        ? ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x0000001aU)) 
                                           || ((1U 
                                                & (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x00000019U)) 
                                               || ((0x00004000U 
                                                    & vlSelfRef.__PVT__instr_rdata_id)
                                                    ? 
                                                   ((1U 
                                                     & (vlSelfRef.__PVT__instr_rdata_id 
                                                        >> 0x0000000dU)) 
                                                    && (1U 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__instr_rdata_id 
                                                            >> 0x0000000cU))))
                                                    : 
                                                   ((1U 
                                                     & (vlSelfRef.__PVT__instr_rdata_id 
                                                        >> 0x0000000dU)) 
                                                    || (1U 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__instr_rdata_id 
                                                            >> 0x0000000cU)))))))
                                        : ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x0000001aU)) 
                                           || ((1U 
                                                & (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x00000019U)) 
                                               || ((1U 
                                                    & (~ 
                                                       (vlSelfRef.__PVT__instr_rdata_id 
                                                        >> 0x0000000eU))) 
                                                   && ((1U 
                                                        & (vlSelfRef.__PVT__instr_rdata_id 
                                                           >> 0x0000000dU)) 
                                                       || (1U 
                                                           & (vlSelfRef.__PVT__instr_rdata_id 
                                                              >> 0x0000000cU)))))))));
                    } else if ((0x20000000U & vlSelfRef.__PVT__instr_rdata_id)) {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                            = ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                      >> 0x0000001cU)) 
                               || ((0x08000000U & vlSelfRef.__PVT__instr_rdata_id)
                                    ? ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                              >> 0x0000001aU)) 
                                       || ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x00000019U)) 
                                           || (1U & 
                                               ((0x00004000U 
                                                 & vlSelfRef.__PVT__instr_rdata_id)
                                                 ? 
                                                ((1U 
                                                  & (vlSelfRef.__PVT__instr_rdata_id 
                                                     >> 0x0000000dU)) 
                                                 && (1U 
                                                     & (vlSelfRef.__PVT__instr_rdata_id 
                                                        >> 0x0000000cU)))
                                                 : 
                                                ((0x00002000U 
                                                  & vlSelfRef.__PVT__instr_rdata_id)
                                                  ? 
                                                 (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x0000000cU)
                                                  : 
                                                 (~ 
                                                  (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0000000cU)))))))
                                    : ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                              >> 0x0000001aU)) 
                                       || ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x00000019U)) 
                                           || (1U & 
                                               ((0x00004000U 
                                                 & vlSelfRef.__PVT__instr_rdata_id)
                                                 ? 
                                                ((1U 
                                                  & (vlSelfRef.__PVT__instr_rdata_id 
                                                     >> 0x0000000dU)) 
                                                 && (1U 
                                                     & (vlSelfRef.__PVT__instr_rdata_id 
                                                        >> 0x0000000cU)))
                                                 : 
                                                ((0x00002000U 
                                                  & vlSelfRef.__PVT__instr_rdata_id)
                                                  ? 
                                                 (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x0000000cU)
                                                  : 
                                                 (~ 
                                                  (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0000000cU)))))))));
                    } else if ((0x10000000U & vlSelfRef.__PVT__instr_rdata_id)) {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x08000000U & vlSelfRef.__PVT__instr_rdata_id)) {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                            = ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                      >> 0x0000001aU)) 
                               || ((0x02000000U & vlSelfRef.__PVT__instr_rdata_id)
                                    ? ((1U & (~ (vlSelfRef.__PVT__instr_rdata_id 
                                                 >> 0x0000000eU))) 
                                       && ((1U & (~ 
                                                  (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0000000dU))) 
                                           && (1U & 
                                               (~ (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0000000cU)))))
                                    : ((0x00004000U 
                                        & vlSelfRef.__PVT__instr_rdata_id)
                                        ? ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x0000000dU)) 
                                           && (1U & 
                                               (~ (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0000000cU))))
                                        : ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x0000000dU)) 
                                           || (1U & 
                                               (~ (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0000000cU)))))));
                    } else if ((0x04000000U & vlSelfRef.__PVT__instr_rdata_id)) {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x02000000U & vlSelfRef.__PVT__instr_rdata_id)) {
                        if ((0x00004000U & vlSelfRef.__PVT__instr_rdata_id)) {
                            if ((0x00002000U & vlSelfRef.__PVT__instr_rdata_id)) {
                                if ((0x00001000U & vlSelfRef.__PVT__instr_rdata_id)) {
                                    vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator = 3U;
                                    vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                } else {
                                    vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator = 3U;
                                    vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                }
                            } else if ((0x00001000U 
                                        & vlSelfRef.__PVT__instr_rdata_id)) {
                                vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator = 2U;
                                vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            } else {
                                vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator = 2U;
                                vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x00002000U & vlSelfRef.__PVT__instr_rdata_id)) {
                            if ((0x00001000U & vlSelfRef.__PVT__instr_rdata_id)) {
                                vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator = 1U;
                                vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            } else {
                                vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator = 1U;
                                vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode = 1U;
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x00001000U & vlSelfRef.__PVT__instr_rdata_id)) {
                            vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator = 1U;
                            vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                        } else {
                            vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator = 0U;
                            vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                        }
                    } else {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                    }
                } else {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (~ VL_ONEHOT_I((((2U == (3U 
                                                   & (vlSelfRef.__PVT__instr_rdata_id 
                                                      >> 0x0cU))) 
                                           << 2U) | 
                                          (((1U == 
                                             (3U & 
                                              (vlSelfRef.__PVT__instr_rdata_id 
                                               >> 0x0cU))) 
                                            << 1U) 
                                           | (0U == 
                                              (3U & 
                                               (vlSelfRef.__PVT__instr_rdata_id 
                                                >> 0x0cU))))))))) {
                    if (id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_hc04a6b80__0) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:306: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(3U & (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x0cU)));
                            Verilated::runFlushCallbacks();
                            VL_STOP_MT("verilogSourceFiles/ibex_decoder.sv", 306, "");
                        }
                    }
                }
                vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                vlSelfRef.__PVT__id_stage_i__DOT__lsu_req_dec = 1U;
                vlSelfRef.__PVT__id_stage_i__DOT__lsu_we = 1U;
                if ((0x00004000U & vlSelfRef.__PVT__instr_rdata_id)) {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
                if ((0U == (3U & (vlSelfRef.__PVT__instr_rdata_id 
                                  >> 0x0cU)))) {
                    vlSelfRef.__PVT__id_stage_i__DOT__lsu_type = 2U;
                } else if ((1U == (3U & (vlSelfRef.__PVT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.__PVT__id_stage_i__DOT__lsu_type = 1U;
                } else if ((2U == (3U & (vlSelfRef.__PVT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.__PVT__id_stage_i__DOT__lsu_type = 0U;
                } else {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                } else {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                    = ((0x00004000U & vlSelfRef.__PVT__instr_rdata_id)
                        ? ((1U & (~ (vlSelfRef.__PVT__instr_rdata_id 
                                     >> 0x0000000dU))) 
                           && ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                      >> 0x0000000cU)) 
                               && ((1U & (~ (vlSelfRef.__PVT__instr_rdata_id 
                                             >> 0x0000001aU))) 
                                   && ((vlSelfRef.__PVT__instr_rdata_id 
                                        >> 0x0000001fU) 
                                       || (1U & ((0x40000000U 
                                                  & vlSelfRef.__PVT__instr_rdata_id)
                                                  ? 
                                                 ((0x20000000U 
                                                   & vlSelfRef.__PVT__instr_rdata_id)
                                                   ? 
                                                  (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0000001cU)
                                                   : 
                                                  ((1U 
                                                    & (vlSelfRef.__PVT__instr_rdata_id 
                                                       >> 0x0000001cU)) 
                                                   || ((1U 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__instr_rdata_id 
                                                            >> 0x0000001bU))) 
                                                       && (0U 
                                                           != 
                                                           (3U 
                                                            & (vlSelfRef.__PVT__instr_rdata_id 
                                                               >> 0x00000019U))))))
                                                  : 
                                                 ((0x20000000U 
                                                   & vlSelfRef.__PVT__instr_rdata_id)
                                                   ? 
                                                  (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0000001cU)
                                                   : 
                                                  ((1U 
                                                    & (vlSelfRef.__PVT__instr_rdata_id 
                                                       >> 0x0000001cU)) 
                                                   || (1U 
                                                       & ((0x08000000U 
                                                           & vlSelfRef.__PVT__instr_rdata_id)
                                                           ? 
                                                          (vlSelfRef.__PVT__instr_rdata_id 
                                                           >> 0x0000001aU)
                                                           : 
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & (vlSelfRef.__PVT__instr_rdata_id 
                                                               >> 0x00000019U)))))))))))))
                        : ((1U & (~ (vlSelfRef.__PVT__instr_rdata_id 
                                     >> 0x0000000dU))) 
                           && ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                      >> 0x0000000cU)) 
                               && ((vlSelfRef.__PVT__instr_rdata_id 
                                    >> 0x0000001fU) 
                                   || (1U & ((0x40000000U 
                                              & vlSelfRef.__PVT__instr_rdata_id)
                                              ? ((0x20000000U 
                                                  & vlSelfRef.__PVT__instr_rdata_id)
                                                  ? 
                                                 ((1U 
                                                   & (vlSelfRef.__PVT__instr_rdata_id 
                                                      >> 0x0000001cU)) 
                                                  || ((1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__instr_rdata_id 
                                                           >> 0x0000001bU))) 
                                                      && ((1U 
                                                           & (vlSelfRef.__PVT__instr_rdata_id 
                                                              >> 0x0000001aU)) 
                                                          || ((1U 
                                                               & (vlSelfRef.__PVT__instr_rdata_id 
                                                                  >> 0x00000019U)) 
                                                              || ((0x01000000U 
                                                                   & vlSelfRef.__PVT__instr_rdata_id)
                                                                   ? 
                                                                  ((1U 
                                                                    & (vlSelfRef.__PVT__instr_rdata_id 
                                                                       >> 0x00000016U)) 
                                                                   || ((1U 
                                                                        & (vlSelfRef.__PVT__instr_rdata_id 
                                                                           >> 0x00000015U)) 
                                                                       && (1U 
                                                                           & (vlSelfRef.__PVT__instr_rdata_id 
                                                                              >> 0x00000014U))))
                                                                   : 
                                                                  ((1U 
                                                                    & (vlSelfRef.__PVT__instr_rdata_id 
                                                                       >> 0x00000017U)) 
                                                                   || (1U 
                                                                       & ((0x00400000U 
                                                                           & vlSelfRef.__PVT__instr_rdata_id)
                                                                           ? 
                                                                          (vlSelfRef.__PVT__instr_rdata_id 
                                                                           >> 0x00000015U)
                                                                           : 
                                                                          ((1U 
                                                                            & (vlSelfRef.__PVT__instr_rdata_id 
                                                                               >> 0x00000015U)) 
                                                                           && (1U 
                                                                               & (vlSelfRef.__PVT__instr_rdata_id 
                                                                                >> 0x00000014U)))))))))))
                                                  : 
                                                 ((1U 
                                                   & (vlSelfRef.__PVT__instr_rdata_id 
                                                      >> 0x0000001cU)) 
                                                  || (1U 
                                                      & (~ 
                                                         (vlSelfRef.__PVT__instr_rdata_id 
                                                          >> 0x0000001bU)))))
                                              : ((0x20000000U 
                                                  & vlSelfRef.__PVT__instr_rdata_id)
                                                  ? 
                                                 (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x0000001cU)
                                                  : 
                                                 ((1U 
                                                   & (vlSelfRef.__PVT__instr_rdata_id 
                                                      >> 0x0000001cU)) 
                                                  || (1U 
                                                      & ((0x08000000U 
                                                          & vlSelfRef.__PVT__instr_rdata_id)
                                                          ? 
                                                         (vlSelfRef.__PVT__instr_rdata_id 
                                                          >> 0x0000001aU)
                                                          : 
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & (vlSelfRef.__PVT__instr_rdata_id 
                                                              >> 0x00000019U)))))))))))));
            } else {
                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (~ VL_ONEHOT_I((((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.__PVT__instr_rdata_id 
                                                    >> 0x0cU))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.__PVT__instr_rdata_id 
                                                     >> 0x0cU)))))))) {
                        if ((0U != (((1U == (7U & (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0000000cU))) 
                                     << 1U) | (0U == 
                                               (7U 
                                                & (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0000000cU)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:566: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core.id_stage_i.decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name(),
                                             3,(7U 
                                                & (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0cU)));
                                Verilated::runFlushCallbacks();
                                VL_STOP_MT("verilogSourceFiles/ibex_decoder.sv", 566, "");
                            }
                        }
                    }
                    if ((0U == (7U & (vlSelfRef.__PVT__instr_rdata_id 
                                      >> 0x0cU)))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                    } else if ((1U == (7U & (vlSelfRef.__PVT__instr_rdata_id 
                                             >> 0x0cU)))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__jump_in_dec = 1U;
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                        if (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
                            vlSelfRef.__PVT__id_stage_i__DOT__jump_set_dec = 1U;
                            vlSelfRef.__PVT__icache_inval = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    } else if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (~ VL_ONEHOT_I((((2U == (3U & 
                                               (vlSelfRef.__PVT__instr_rdata_id 
                                                >> 0x0cU))) 
                                       << 2U) | (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.__PVT__instr_rdata_id 
                                                       >> 0x0cU))) 
                                                  << 1U) 
                                                 | (0U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.__PVT__instr_rdata_id 
                                                        >> 0x0cU))))))))) {
                if (id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_hc04a6b80__0) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:323: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     2,(3U & (vlSelfRef.__PVT__instr_rdata_id 
                                              >> 0x0cU)));
                        Verilated::runFlushCallbacks();
                        VL_STOP_MT("verilogSourceFiles/ibex_decoder.sv", 323, "");
                    }
                }
            }
            vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_a_dec = 1U;
            vlSelfRef.__PVT__id_stage_i__DOT__lsu_req_dec = 1U;
            vlSelfRef.__PVT__id_stage_i__DOT__lsu_type = 0U;
            vlSelfRef.__PVT__id_stage_i__DOT__lsu_sign_ext 
                = (1U & (~ (vlSelfRef.__PVT__instr_rdata_id 
                            >> 0x0000000eU)));
            if ((0U == (3U & (vlSelfRef.__PVT__instr_rdata_id 
                              >> 0x0cU)))) {
                vlSelfRef.__PVT__id_stage_i__DOT__lsu_type = 2U;
            } else if ((1U == (3U & (vlSelfRef.__PVT__instr_rdata_id 
                                     >> 0x0cU)))) {
                vlSelfRef.__PVT__id_stage_i__DOT__lsu_type = 1U;
            } else if ((2U == (3U & (vlSelfRef.__PVT__instr_rdata_id 
                                     >> 0x0cU)))) {
                vlSelfRef.__PVT__id_stage_i__DOT__lsu_type = 0U;
                if ((0x00004000U & vlSelfRef.__PVT__instr_rdata_id)) {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else {
        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelfRef.__PVT__illegal_c_insn_id) {
        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) {
        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
        vlSelfRef.__PVT__id_stage_i__DOT__lsu_req_dec = 0U;
        vlSelfRef.__PVT__id_stage_i__DOT__lsu_we = 0U;
        vlSelfRef.__PVT__id_stage_i__DOT__jump_in_dec = 0U;
        vlSelfRef.__PVT__id_stage_i__DOT__jump_set_dec = 0U;
        vlSelfRef.__PVT__id_stage_i__DOT__branch_in_dec = 0U;
        vlSelfRef.__PVT__csr_access = 0U;
    }
    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x2cU;
    vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
    vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
    vlSelfRef.__PVT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__bt_a_mux_sel = 2U;
    vlSelfRef.__PVT__id_stage_i__DOT__bt_b_mux_sel = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu 
        = (0x0000007fU & vlSelfRef.__PVT__instr_rdata_alu_id);
    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 0U;
    vlSelfRef.__PVT__mult_sel_ex = 0U;
    vlSelfRef.__PVT__div_sel_ex = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x00000020U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x00000010U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                  >> 0x0000000cU)))) {
                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlSelfRef.__PVT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                                    vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec 
                                        = ((0x00004000U 
                                            & vlSelfRef.__PVT__instr_rdata_alu_id)
                                            ? 3U : 0U);
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            vlSelfRef.__PVT__id_stage_i__DOT__bt_a_mux_sel = 2U;
                            vlSelfRef.__PVT__id_stage_i__DOT__bt_b_mux_sel = 4U;
                            vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                            vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__bt_a_mux_sel = 0U;
                        vlSelfRef.__PVT__id_stage_i__DOT__bt_b_mux_sel = 0U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0x00004000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                            = ((0x00002000U & vlSelfRef.__PVT__instr_rdata_alu_id)
                                ? ((0x00001000U & vlSelfRef.__PVT__instr_rdata_alu_id)
                                    ? 0x1cU : 0x1aU)
                                : ((0x00001000U & vlSelfRef.__PVT__instr_rdata_alu_id)
                                    ? 0x1bU : 0x19U));
                    } else if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                         >> 0x0000000dU)))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                            = ((0x00001000U & vlSelfRef.__PVT__instr_rdata_alu_id)
                                ? 0x1eU : 0x1dU);
                    }
                    vlSelfRef.__PVT__id_stage_i__DOT__bt_a_mux_sel = 2U;
                    vlSelfRef.__PVT__id_stage_i__DOT__bt_b_mux_sel 
                        = ((1U & ((~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                      >> 1U)) | (IData)(vlSelfRef.__PVT__id_stage_i__DOT__g_sec_branch_taken__DOT__branch_taken_q)))
                            ? 2U : 5U);
                    if (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                    }
                }
            }
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
                            vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.__PVT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                            vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        if ((0x04000000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                            if ((0x02000000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                if ((0x00004000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                  >> 0x0000000dU)))) {
                                        if ((0x00001000U 
                                             & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x2dU;
                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d 
                                                = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                   >> 0x0000000dU)))) {
                                    if ((0x00001000U 
                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x2eU;
                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d 
                                            = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i;
                                    }
                                }
                            } else if ((0x00004000U 
                                        & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                              >> 0x0000000dU)))) {
                                    if ((0x00001000U 
                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x30U;
                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d 
                                            = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i;
                                    }
                                }
                            } else if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                 >> 0x0000000dU)))) {
                                if ((0x00001000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x2fU;
                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d 
                                        = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i;
                                }
                            }
                        } else if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                             >> 0x0000001fU)))) {
                            if ((0x40000000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                if ((0x20000000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                  >> 0x0000001cU)))) {
                                        if ((0x08000000U 
                                             & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                     >> 0x0000001aU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                         >> 0x00000019U)))) {
                                                    if (
                                                        (0x00004000U 
                                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                 >> 0x0000000dU)))) {
                                                            if (
                                                                (0x00001000U 
                                                                 & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x0fU;
                                                            }
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                    >> 0x0000000dU)))) {
                                                        if (
                                                            (0x00001000U 
                                                             & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x33U;
                                                        }
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                        >> 0x0000001aU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                     >> 0x00000019U)))) {
                                                if (
                                                    (0x00004000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                             >> 0x0000000dU)))) {
                                                        if (
                                                            (0x00001000U 
                                                             & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x0dU;
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                >> 0x0000000dU)))) {
                                                    if (
                                                        (0x00001000U 
                                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x0eU;
                                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                   >> 0x0000001cU)))) {
                                    if ((0x08000000U 
                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                    >> 0x0000001aU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                     >> 0x00000019U)))) {
                                                if (
                                                    (0x00004000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                    if (
                                                        (0x00002000U 
                                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                        if (
                                                            (0x00001000U 
                                                             & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x37U;
                                                        }
                                                    } else {
                                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                                            = 
                                                            ((0x00001000U 
                                                              & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                              ? 0x34U
                                                              : 0x24U);
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                >> 0x0000000dU)))) {
                                                    if (
                                                        (0x00001000U 
                                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x32U;
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                    >> 0x0000001aU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                    >> 0x00000019U)))) {
                                            if ((0x00004000U 
                                                 & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                                    = 
                                                    ((0x00002000U 
                                                      & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                      ? 
                                                     ((0x00001000U 
                                                       & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                       ? 7U
                                                       : 6U)
                                                      : 
                                                     ((0x00001000U 
                                                       & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                       ? 8U
                                                       : 5U));
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                            >> 0x0000000dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                         >> 0x0000000cU)))) {
                                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((0x20000000U 
                                        & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                              >> 0x0000001cU)))) {
                                    if ((0x08000000U 
                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                    >> 0x0000001aU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                     >> 0x00000019U)))) {
                                                if (
                                                    (0x00004000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                    if (
                                                        (0x00002000U 
                                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                 >> 0x0000000cU)))) {
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x15U;
                                                        }
                                                    } else {
                                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                                            = 
                                                            ((0x00001000U 
                                                              & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                              ? 0x10U
                                                              : 0x14U);
                                                    }
                                                } else if (
                                                           (0x00002000U 
                                                            & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                             >> 0x0000000cU)))) {
                                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x13U;
                                                    }
                                                } else if (
                                                           (0x00001000U 
                                                            & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x31U;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                    >> 0x0000001aU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                    >> 0x00000019U)))) {
                                            if ((0x00004000U 
                                                 & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                if (
                                                    (0x00002000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                             >> 0x0000000cU)))) {
                                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x18U;
                                                    }
                                                } else {
                                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                                        = 
                                                        ((0x00001000U 
                                                          & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                          ? 0x0bU
                                                          : 0x17U);
                                                }
                                            } else if (
                                                       (0x00002000U 
                                                        & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                         >> 0x0000000cU)))) {
                                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x16U;
                                                }
                                            } else if (
                                                       (0x00001000U 
                                                        & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x0cU;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                 >> 0x0000001cU)))) {
                                if ((0x08000000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                  >> 0x0000001aU)))) {
                                        if ((0x02000000U 
                                             & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                            if ((0x00004000U 
                                                 & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                                    = 
                                                    ((0x00002000U 
                                                      & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                      ? 
                                                     ((0x00001000U 
                                                       & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                       ? 0x22U
                                                       : 0x21U)
                                                      : 
                                                     ((0x00001000U 
                                                       & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                       ? 0x20U
                                                       : 0x1fU));
                                            } else if (
                                                       (0x00002000U 
                                                        & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                                    = 
                                                    ((0x00001000U 
                                                      & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                      ? 0x3aU
                                                      : 0x39U);
                                            } else if (
                                                       (0x00001000U 
                                                        & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x38U;
                                            }
                                        } else if (
                                                   (0x00004000U 
                                                    & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                            if ((0x00002000U 
                                                 & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                if (
                                                    (0x00001000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x25U;
                                                }
                                            } else {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                                    = 
                                                    ((0x00001000U 
                                                      & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                      ? 0x12U
                                                      : 0x23U);
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                        >> 0x0000000dU)))) {
                                            if ((0x00001000U 
                                                 & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x11U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                   >> 0x0000001aU)))) {
                                    if ((0x02000000U 
                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                        if ((0x00004000U 
                                             & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                            if ((0x00002000U 
                                                 & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                if (
                                                    (0x00001000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                                                    vlSelfRef.__PVT__div_sel_ex = 1U;
                                                } else {
                                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                                                    vlSelfRef.__PVT__div_sel_ex = 1U;
                                                }
                                            } else if (
                                                       (0x00001000U 
                                                        & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                                                vlSelfRef.__PVT__div_sel_ex = 1U;
                                            } else {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                                                vlSelfRef.__PVT__div_sel_ex = 1U;
                                            }
                                        } else if (
                                                   (0x00002000U 
                                                    & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                            if ((0x00001000U 
                                                 & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                                                vlSelfRef.__PVT__mult_sel_ex = 1U;
                                            } else {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                                                vlSelfRef.__PVT__mult_sel_ex = 1U;
                                            }
                                        } else if (
                                                   (0x00001000U 
                                                    & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                                            vlSelfRef.__PVT__mult_sel_ex = 1U;
                                        } else {
                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                                            vlSelfRef.__PVT__mult_sel_ex = 1U;
                                        }
                                    } else {
                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                            = ((0x00004000U 
                                                & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                ? (
                                                   (0x00002000U 
                                                    & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                    ? 
                                                   ((0x00001000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((0x00001000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                     ? 9U
                                                     : 2U))
                                                : (
                                                   (0x00002000U 
                                                    & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                    ? 
                                                   ((0x00001000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                     ? 0x2cU
                                                     : 0x2bU)
                                                    : 
                                                   ((0x00001000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                     ? 0x0aU
                                                     : 0U)));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                        if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                      >> 0x0000000eU)))) {
                            vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 1U;
                            vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                    vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                    if ((0x00004000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                        if ((0x00002000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                = ((0x00001000U & vlSelfRef.__PVT__instr_rdata_alu_id)
                                    ? 4U : 3U);
                        } else if ((0x00001000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                            if ((0x04000000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x30U;
                                vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d 
                                    = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i;
                            } else if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                 >> 0x0000001fU)))) {
                                if ((0x40000000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                    if ((0x20000000U 
                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                    >> 0x0000001cU)))) {
                                            if ((0x08000000U 
                                                 & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x0fU;
                                            } else {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x0dU;
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                    >> 0x0000001cU)))) {
                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                            = ((0x08000000U 
                                                & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                ? 0x34U
                                                : 8U);
                                    }
                                } else if ((0x20000000U 
                                            & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                  >> 0x0000001cU)))) {
                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                            = ((0x08000000U 
                                                & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                ? 0x10U
                                                : 0x0bU);
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                   >> 0x0000001cU)))) {
                                    if ((0x08000000U 
                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                    >> 0x0000001aU)))) {
                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x12U;
                                        }
                                    } else {
                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 9U;
                                    }
                                }
                            }
                        } else {
                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 2U;
                        }
                    } else if ((0x00002000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                            = ((0x00001000U & vlSelfRef.__PVT__instr_rdata_alu_id)
                                ? 0x2cU : 0x2bU);
                    } else if ((0x00001000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                        if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                      >> 0x0000001fU)))) {
                            if ((0x40000000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                if ((0x20000000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                  >> 0x0000001cU)))) {
                                        if ((0x08000000U 
                                             & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x33U;
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                        >> 0x0000001aU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                     >> 0x00000019U)))) {
                                                if (
                                                    (0x01000000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                    if (
                                                        (0x00800000U 
                                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                 >> 0x00000016U)))) {
                                                            if (
                                                                (0x00200000U 
                                                                 & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                         >> 0x00000014U)))) {
                                                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x40U;
                                                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                                }
                                                            } else if (
                                                                       (0x00100000U 
                                                                        & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x3eU;
                                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                            } else {
                                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x3cU;
                                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                            }
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                    >> 0x00000016U)))) {
                                                        if (
                                                            (0x00200000U 
                                                             & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                     >> 0x00000014U)))) {
                                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x3fU;
                                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                            }
                                                        } else if (
                                                                   (0x00100000U 
                                                                    & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x3dU;
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                        } else {
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x3bU;
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                >> 0x00000017U)))) {
                                                    if (
                                                        (0x00400000U 
                                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                 >> 0x00000015U)))) {
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                                                = 
                                                                ((0x00100000U 
                                                                  & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                                  ? 0x27U
                                                                  : 0x26U);
                                                        }
                                                    } else if (
                                                               (0x00200000U 
                                                                & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                 >> 0x00000014U)))) {
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x2aU;
                                                        }
                                                    } else {
                                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                                            = 
                                                            ((0x00100000U 
                                                              & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                              ? 0x29U
                                                              : 0x28U);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                   >> 0x0000001cU)))) {
                                    if ((0x08000000U 
                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x32U;
                                    }
                                }
                            } else if ((0x20000000U 
                                        & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                              >> 0x0000001cU)))) {
                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                        = ((0x08000000U 
                                            & vlSelfRef.__PVT__instr_rdata_alu_id)
                                            ? 0x31U
                                            : 0x0cU);
                                }
                            } else if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                 >> 0x0000001cU)))) {
                                if ((0x08000000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                  >> 0x0000001aU)))) {
                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x11U;
                                    }
                                } else {
                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x0aU;
                                }
                            }
                        }
                    } else {
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0U == (7U & (vlSelfRef.__PVT__instr_rdata_alu_id 
                                      >> 0x0cU)))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    } else if ((1U == (7U & (vlSelfRef.__PVT__instr_rdata_alu_id 
                                             >> 0x0cU)))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__bt_a_mux_sel = 2U;
                        vlSelfRef.__PVT__id_stage_i__DOT__bt_b_mux_sel = 5U;
                    }
                    if ((1U & (~ VL_ONEHOT_I((((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                    >> 0x0cU))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                     >> 0x0cU)))))))) {
                        if ((0U != (((1U == (7U & (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                   >> 0x0000000cU))) 
                                     << 1U) | (0U == 
                                               (7U 
                                                & (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                   >> 0x0000000cU)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:1141: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core.id_stage_i.decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name(),
                                             3,(7U 
                                                & (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                   >> 0x0cU)));
                                Verilated::runFlushCallbacks();
                                VL_STOP_MT("verilogSourceFiles/ibex_decoder.sv", 1141, "");
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
            }
        }
    }
    vlSelfRef.__PVT__g_pmp__DOT__pmp_req_addr[0U] = (QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_req_addr[1U] = (QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__31__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_177) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_144);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__30__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_176) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_138);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__29__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_175) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_132);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__28__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_174) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_126);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__27__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_173) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_120);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__26__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_172) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_114);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__25__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_171) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_108);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__24__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_170) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_102);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__23__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_169) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_96);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__22__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_168) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_90);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__21__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_167) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_84);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__20__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_166) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_78);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__19__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_165) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_72);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__18__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_164) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_66);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__17__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_163) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_60);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__16__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_162) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_49);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__15__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_177) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_144);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__14__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_176) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_138);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__13__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_175) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_132);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__12__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_174) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_126);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__11__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_173) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_120);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__10__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_172) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_114);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__9__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_171) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_108);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__8__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_170) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_102);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__7__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_169) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_96);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__6__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_168) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_90);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__5__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_167) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_84);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__4__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_166) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_78);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__3__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_165) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_72);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__2__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_164) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_66);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__1__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_163) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_60);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__0__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_162) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_49);
    vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match 
        = (((((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__3__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
              & (vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__3__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                 == (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                     << 1U))) << 3U) | (((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__2__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                         & (vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__2__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                                            == (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                << 1U))) 
                                        << 2U)) | (
                                                   (((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                                     & (vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                                                        == 
                                                        (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                         << 1U))) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                                      & (vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                                                         == 
                                                         (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                          << 1U)))));
    vlSelfRef.__PVT__id_stage_i__DOT__rf_rd_a_wb_match_o 
        = (((IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_raddr_a_o) 
            == (IData)(vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_raddr_a_o)));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_wdata_sel) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_wdata_sel)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_wdata_sel) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_wdata_sel)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_id_stage.sv:423: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core.id_stage_i.rf_wdata_id_mux: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_wdata_sel));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/ibex_id_stage.sv", 423, "");
            }
        }
    }
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_block_cache = 1U;
    if ((2U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_q))) {
        if ((1U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__icache_inval)))) {
                vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_block_cache = 0U;
            }
        }
    }
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_d = 0U;
    if (vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q) {
        vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_d = 0U;
    } else if ((0U != (IData)(vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator))) {
        vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_d = 1U;
    }
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__32__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__33__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__34__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__35__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__36__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__37__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__38__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__39__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__40__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__41__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__42__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__43__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__44__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__45__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__46__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__47__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type[2U] = 
        ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
          ? 1U : 2U);
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_core.sv:1725: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/ibex_core.sv", 1725, "");
            }
        }
    }
    vlSelfRef.__PVT__rvfi_mem_mask_int = ((0U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type))
                                           ? 0x0fU : 
                                          ((1U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type))
                                            ? 3U : 
                                           ((2U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type))
                                             ? 1U : 0U)));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn 
        = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__ebrk_insn) 
           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn 
        = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__ecall_insn_dec) 
           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mret_insn 
        = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__mret_insn_dec) 
           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__dret_insn 
        = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__dret_insn_dec) 
           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__wfi_insn 
        = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__wfi_insn_dec) 
           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_op_i 
        = ((IData)(((0U == (0x000f8000U & vlSelfRef.__PVT__instr_rdata_id)) 
                    & ((2U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__csr_op)) 
                       | (3U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__csr_op)))))
            ? 0U : (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__csr_op));
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__bt_a_mux_sel)) 
                               << 1U) | (0U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__bt_a_mux_sel))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__bt_a_mux_sel)) 
                     << 1U) | (0U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__bt_a_mux_sel))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_id_stage.sv:328: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core.id_stage_i.g_btalu_muxes.bt_operand_a_mux: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__id_stage_i__DOT__bt_a_mux_sel));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/ibex_id_stage.sv", 328, "");
            }
        }
    }
    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__div_en_o 
        = ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlSelfRef.__PVT__div_sel_ex));
    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__mult_en_o 
        = ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlSelfRef.__PVT__mult_sel_ex));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i 
        = ((IData)(vlSelfRef.__PVT__div_sel_ex) | (IData)(vlSelfRef.__PVT__mult_sel_ex));
    if (vlSelfRef.__PVT__lsu_addr_incr_req) {
        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
        vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel = 6U;
    } else {
        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel 
            = vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
        vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel 
            = vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel_dec;
    }
    if ((1U & (~ VL_ONEHOT_I((((0x25U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                               << 1U) | (0x24U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))))))) {
        if ((0U != (((0x25U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                     << 1U) | (0x24U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:564: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core.ex_block_i.alu_i.g_alu_rvb: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/ibex_alu.sv", 564, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((0x33U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                               << 2U) | (((0x32U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                                          << 1U) | 
                                         (0x31U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)))))))) {
        if ((0U != (((0x33U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                     << 2U) | (((0x32U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                                << 1U) | (0x31U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:583: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core.ex_block_i.alu_i.g_alu_rvb: unique case, but multiple matches found for '7'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),7,
                             (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/ibex_alu.sv", 583, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((0x15U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                               << 2U) | (((0x14U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                                          << 1U) | 
                                         (0x13U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)))))))) {
        if ((0U != (((0x15U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                     << 2U) | (((0x14U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                                << 1U) | (0x13U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:778: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core.ex_block_i.alu_i.g_alu_rvb.gen_alu_rvb_otearlgrey_full: unique case, but multiple matches found for '7'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),7,
                             (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/ibex_alu.sv", 778, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((0x3aU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                               << 1U) | (0x39U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))))))) {
        if ((0U != (((0x3aU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                     << 1U) | (0x39U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:980: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core.ex_block_i.alu_i.g_alu_rvb.gen_alu_rvb_otearlgrey_full: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/ibex_alu.sv", 980, "");
            }
        }
    }
    if ((0x13U != (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
        if ((0x14U != (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
            if ((0x15U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
                vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__unnamedblk10__DOT__h = 2U;
            }
        }
        if ((0x14U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
            vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__unnamedblk9__DOT__b = 4U;
        }
    }
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_and 
        = ((4U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
           | (7U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_or 
        = ((3U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
           | (6U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_cz 
        = ((0x29U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
           | (0x28U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbe_op 
        = ((0x35U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
           | (0x36U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)));
    __Vtableidx12 = vlSelfRef.__PVT__id_stage_i__DOT__alu_operator;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__cmp_signed 
        = Vsim__ConstPool__TABLE_h5df9fcbf_0[__Vtableidx12];
    __Vtableidx14 = (((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) 
                      << 7U) | (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_op_b_negate 
        = Vsim__ConstPool__TABLE_hf8601f55_0[__Vtableidx14];
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_sbmode 
        = ((0x31U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
           | ((0x32U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
              | (0x33U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))));
    __Vtableidx11 = vlSelfRef.__PVT__id_stage_i__DOT__alu_operator;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 
        = Vsim__ConstPool__TABLE_h99e708d5_0[__Vtableidx11];
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 
        = Vsim__ConstPool__TABLE_h395e6778_0[__Vtableidx11];
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 
        = Vsim__ConstPool__TABLE_he85dd9ee_0[__Vtableidx11];
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate 
        = Vsim__ConstPool__TABLE_h133834bd_0[__Vtableidx11];
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__crc_cpoly 
        = ((0x40U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
           | ((0x3eU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
              | (0x3cU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_bmode 
        = ((0x3bU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
           | (0x3cU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_hmode 
        = ((0x3dU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
           | (0x3eU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__crc_op 
        = ((0x40U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
           | ((0x3fU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
              | ((0x3eU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                 | ((0x3dU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                    | ((0x3cU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                       | (0x3bU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)))))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffff7fffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffff7fffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0fU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__31__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0fU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__31__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_46 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000001fU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffbfffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffbfffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0eU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__30__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0eU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__30__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_43 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000001eU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffdfffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffdfffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0dU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__29__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0dU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__29__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_40 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000001dU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffefffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffefffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0cU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__28__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0cU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__28__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_37 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000001cU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffff7ffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffff7ffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0bU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__27__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0bU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__27__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_34 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000001bU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffbffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffbffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0aU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__26__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0aU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__26__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_31 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000001aU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffdffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffdffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [9U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__25__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [9U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__25__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_28 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000019U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffeffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffeffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [8U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__24__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [8U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__24__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_25 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000018U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffff7fffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffff7fffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [7U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__23__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [7U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__23__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_22 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000017U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffbfffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffbfffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [6U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__22__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [6U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__22__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_19 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000016U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffdfffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffdfffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [5U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__21__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [5U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__21__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_16 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000015U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffefffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffefffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [4U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__20__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [4U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__20__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_13 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000014U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffff7ffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffff7ffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [3U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__19__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [3U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__19__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_10 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000013U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffbffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffbffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [2U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__18__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [2U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__18__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_7 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000012U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffdffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffdffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [1U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__17__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [1U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__17__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_4 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000011U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffeffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffeffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__16__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__16__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_1 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000010U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffff7fffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffff7fffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0fU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__15__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0fU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__15__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_46 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000000fU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffffbfffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffffbfffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0eU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__14__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0eU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__14__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_43 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000000eU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffffdfffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffffdfffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0dU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__13__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0dU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__13__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_40 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000000dU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffffefffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffffefffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0cU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__12__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0cU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__12__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_37 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000000cU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffff7ffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffff7ffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0bU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__11__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0bU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__11__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_34 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000000bU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffffbffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffffbffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0aU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__10__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0aU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__10__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_31 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000000aU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffffdffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffffdffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [9U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__9__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [9U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__9__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_28 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 9U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffffeffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffffeffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [8U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__8__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [8U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__8__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_25 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 8U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffffff7fULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffffff7fULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [7U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__7__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [7U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__7__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_22 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 7U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffffffbfULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffffffbfULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [6U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__6__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [6U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__6__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_19 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 6U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffffffdfULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffffffdfULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [5U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__5__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [5U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__5__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_16 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 5U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffffffefULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffffffefULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [4U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__4__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [4U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__4__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_13 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 4U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffffff7ULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffffff7ULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [3U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__3__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [3U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__3__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_10 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 3U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffffffbULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffffffbULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [2U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__2__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [2U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__2__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_7 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 2U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffffffdULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffffffdULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [1U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__1__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [1U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__1__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_4 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 1U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffffffeULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffffffeULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (IData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                               [0U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__0__KET__)
                               : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                         [0U] >> 3U)) 
                                  && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__0__KET__) 
                                       | ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          > (IData)(
                                                    (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_1 
                                                     >> 2U)))) 
                                      & ((IData)(((QData)((IData)(
                                                                  (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                   << 1U))) 
                                                  >> 2U)) 
                                         < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))));
    vlSelfRef.__VdfgRegularize_h2dc7b7d1_1_3 = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_rd_a_wb_match_o) 
                                                & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_write_wb_i));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
        = (((QData)((IData)((((((((((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__47__KET__) 
                                    << 3U) | ((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__46__KET__) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__45__KET__) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__44__KET__))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__43__KET__) 
                                    << 3U) | ((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__42__KET__) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__41__KET__) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__40__KET__))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__39__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__38__KET__) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__37__KET__) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__36__KET__))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__35__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__34__KET__) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__33__KET__) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__32__KET__))))) 
                              << 0x00000010U) | (((
                                                   ((((2U 
                                                       & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                            >> 2U))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                            >> 1U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                              >> 2U))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                            >> 1U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                              >> 2U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                             >> 1U)) 
                                                         | (1U 
                                                            & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                               >> 2U))))) 
                                                  << 8U) 
                                                 | (((((2U 
                                                        & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                           >> 1U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                             >> 2U))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                             >> 1U)) 
                                                         | (1U 
                                                            & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                               >> 2U))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                             >> 1U)) 
                                                         | (1U 
                                                            & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                               >> 2U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                              >> 1U)) 
                                                          | (1U 
                                                             & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                >> 2U))))))))) 
            << 0x00000010U) | (QData)((IData)((((((
                                                   ((2U 
                                                     & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                          >> 2U))) 
                                                   << 6U) 
                                                  | (((2U 
                                                       & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                            >> 2U))) 
                                                     << 4U)) 
                                                 | ((((2U 
                                                       & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                            >> 2U))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                           >> 1U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                             >> 2U))))) 
                                                << 8U) 
                                               | (((((2U 
                                                      & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                         >> 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                           >> 2U))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                           >> 1U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                             >> 2U))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                           >> 1U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                             >> 2U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                            >> 1U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                              >> 2U)))))))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__pmp_req_type_i[0U] 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__pmp_req_type_i[1U] 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__pmp_req_type_i[2U] 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffffffeULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | (IData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__Vfuncout)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffffffdULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__Vfuncout)) 
              << 1U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffffffbULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__Vfuncout)) 
              << 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[3U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffffff7ULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__Vfuncout)) 
              << 3U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[4U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffffffefULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__Vfuncout)) 
              << 4U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[5U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffffffdfULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__Vfuncout)) 
              << 5U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[6U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffffffbfULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__Vfuncout)) 
              << 6U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[7U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffffff7fULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__Vfuncout)) 
              << 7U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[8U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffffeffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__Vfuncout)) 
              << 8U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[9U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffffdffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__Vfuncout)) 
              << 9U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0aU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffffbffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__Vfuncout)) 
              << 0x0000000aU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0bU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffff7ffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__Vfuncout)) 
              << 0x0000000bU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0cU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffffefffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0dU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffffdfffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__Vfuncout)) 
              << 0x0000000dU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0eU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffffbfffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__Vfuncout)) 
              << 0x0000000eU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0fU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffff7fffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__Vfuncout)) 
              << 0x0000000fU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffeffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffdffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__Vfuncout)) 
              << 0x00000011U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffbffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__Vfuncout)) 
              << 0x00000012U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[3U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffff7ffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__Vfuncout)) 
              << 0x00000013U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[4U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffefffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[5U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffdfffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__Vfuncout)) 
              << 0x00000015U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[6U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffbfffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__Vfuncout)) 
              << 0x00000016U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[7U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffff7fffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__Vfuncout)) 
              << 0x00000017U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[8U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffeffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[9U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffdffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__Vfuncout)) 
              << 0x00000019U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0aU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffbffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__Vfuncout)) 
              << 0x0000001aU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0bU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffff7ffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__Vfuncout)) 
              << 0x0000001bU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0cU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffefffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0dU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffdfffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__Vfuncout)) 
              << 0x0000001dU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0eU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffbfffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__Vfuncout)) 
              << 0x0000001eU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0fU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffff7fffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__Vfuncout)) 
              << 0x0000001fU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__permission_check 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__32__KET__;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffeffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__permission_check 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__33__KET__;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffdffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__Vfuncout)) 
              << 0x00000021U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__permission_check 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__34__KET__;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffbffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__Vfuncout)) 
              << 0x00000022U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__permission_check 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__35__KET__;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[3U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fff7ffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__Vfuncout)) 
              << 0x00000023U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__permission_check 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__36__KET__;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[4U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffefffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__permission_check 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__37__KET__;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[5U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffdfffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__Vfuncout)) 
              << 0x00000025U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__permission_check 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__38__KET__;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[6U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffbfffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__Vfuncout)) 
              << 0x00000026U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__permission_check 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__39__KET__;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[7U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ff7fffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__Vfuncout)) 
              << 0x00000027U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__permission_check 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__40__KET__;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[8U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000feffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__permission_check 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__41__KET__;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[9U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fdffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__Vfuncout)) 
              << 0x00000029U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__permission_check 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__42__KET__;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0aU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fbffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__Vfuncout)) 
              << 0x0000002aU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__permission_check 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__43__KET__;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0bU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000f7ffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__Vfuncout)) 
              << 0x0000002bU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__permission_check 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__44__KET__;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0cU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000efffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__permission_check 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__45__KET__;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0dU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000dfffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__Vfuncout)) 
              << 0x0000002dU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__permission_check 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__46__KET__;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0eU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000bfffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__Vfuncout)) 
              << 0x0000002eU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__permission_check 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__47__KET__;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0fU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x00007fffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__Vfuncout)) 
              << 0x0000002fU));
    __Vtableidx10 = ((((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q) 
                                    << 1U) | (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q))));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio 
        = Vsim__ConstPool__TABLE_h50a4d887_0[__Vtableidx10];
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio 
        = Vsim__ConstPool__TABLE_h4e9d7c14_0[__Vtableidx10];
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio 
        = Vsim__ConstPool__TABLE_hd09f48e5_0[__Vtableidx10];
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio 
        = Vsim__ConstPool__TABLE_h723ae096_0[__Vtableidx10];
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__store_err_prio 
        = Vsim__ConstPool__TABLE_h66672509_0[__Vtableidx10];
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__load_err_prio 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx10];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_wr = 
        ((1U == (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_op_i)) 
         | ((2U == (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_op_i)) 
            | (3U == (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_op_i))));
    vlSelfRef.__PVT__id_stage_i__DOT__multdiv_en_dec 
        = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__div_en_o) 
           | (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__mult_en_o));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_and) 
                               << 1U) | (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_or)))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_and) 
                     << 1U) | (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_or)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:392: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/ibex_alu.sv", 392, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_cz) 
                               << 1U) | (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbe_op)))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_cz) 
                     << 1U) | (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbe_op)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:459: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core.ex_block_i.alu_i.g_alu_rvb: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/ibex_alu.sv", 459, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_sbmode) 
                               << 1U) | (0x37U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_sbmode) 
                     << 1U) | (0x37U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:335: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/ibex_alu.sv", 335, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate) 
                               << 1U) | (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i)))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate) 
                     << 1U) | (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:97: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/ibex_alu.sv", 97, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3) 
                                << 3U) | ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1) 
                                << 1U) | (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i))))))) {
        if ((0U != ((((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3) 
                      << 3U) | ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2) 
                                << 2U)) | (((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:85: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/ibex_alu.sv", 85, "");
            }
        }
    }
    vlSelfRef.ex_block_i__DOT__alu_i__DOT____VdfgExtracted_h62347566__1 
        = (1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_hmode) 
                                 << 1U) | (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_bmode)))));
    vlSelfRef.ex_block_i__DOT__alu_i__DOT____VdfgExtracted_heda666c8__0 
        = (0U != (((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_hmode) 
                   << 1U) | (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_bmode)));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_hmode) 
                               << 1U) | (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_bmode)))))) {
        if (vlSelfRef.ex_block_i__DOT__alu_i__DOT____VdfgExtracted_heda666c8__0) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:933: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core.ex_block_i.alu_i.g_alu_rvb.gen_alu_rvb_otearlgrey_full: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/ibex_alu.sv", 933, "");
            }
        }
    }
}
