// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_lc_ctrl_regs_reg_top___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__0(Vsim_lc_ctrl_regs_reg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_lc_ctrl_regs_reg_top___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reg_rdata_next = 0U;
    if ((IData)((0ULL != (0x00000000000000ffULL & vlSelfRef.__PVT__addr_hit)))) {
        if ((1U & (IData)(vlSelfRef.__PVT__addr_hit))) {
            vlSelfRef.__PVT__reg_rdata_next = (0xfffffff8U 
                                               & vlSelfRef.__PVT__reg_rdata_next);
        } else if ((1U & (IData)((vlSelfRef.__PVT__addr_hit 
                                  >> 1U)))) {
            vlSelfRef.__PVT__reg_rdata_next = ((0xfffffff0U 
                                                & vlSelfRef.__PVT__reg_rdata_next) 
                                               | ((((2U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
                                                        >> 0x00000013U)) 
                                                    | (1U 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
                                                          >> 0x00000015U))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
                                                         >> 0x00000015U)) 
                                                     | (1U 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
                                                           >> 0x00000017U)))));
            vlSelfRef.__PVT__reg_rdata_next = ((0xffffff0fU 
                                                & vlSelfRef.__PVT__reg_rdata_next) 
                                               | ((((2U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
                                                        >> 0x0000000fU)) 
                                                    | (1U 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
                                                          >> 0x00000011U))) 
                                                   << 6U) 
                                                  | (((2U 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
                                                          >> 0x00000011U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
                                                            >> 0x00000013U))) 
                                                     << 4U)));
            vlSelfRef.__PVT__reg_rdata_next = ((0xfffff0ffU 
                                                & vlSelfRef.__PVT__reg_rdata_next) 
                                               | ((((2U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
                                                        >> 0x0000000bU)) 
                                                    | (1U 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
                                                          >> 0x0000000dU))) 
                                                   << 0x0000000aU) 
                                                  | (((2U 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
                                                          >> 0x0000000dU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
                                                            >> 0x0000000fU))) 
                                                     << 8U)));
        } else {
            vlSelfRef.__PVT__reg_rdata_next = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__addr_hit 
                                                           >> 2U)))
                                                ? (
                                                   (0xfffffffeU 
                                                    & vlSelfRef.__PVT__reg_rdata_next) 
                                                   | (IData)(vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__q))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__addr_hit 
                                                               >> 3U)))
                                                    ? 
                                                   ((0xffffff00U 
                                                     & vlSelfRef.__PVT__reg_rdata_next) 
                                                    | (0x000000ffU 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
                                                          >> 4U)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__addr_hit 
                                                                >> 4U)))
                                                     ? 
                                                    ((0xfffffffeU 
                                                      & vlSelfRef.__PVT__reg_rdata_next) 
                                                     | (1U 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
                                                           >> 3U)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__addr_hit 
                                                                 >> 5U)))
                                                      ? 
                                                     (0xfffffffeU 
                                                      & vlSelfRef.__PVT__reg_rdata_next)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__addr_hit 
                                                                  >> 6U)))
                                                       ? 
                                                      ((0xfffffffcU 
                                                        & vlSelfRef.__PVT__reg_rdata_next) 
                                                       | ((2U 
                                                           & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU]) 
                                                          | (1U 
                                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
                                                                >> 2U))))
                                                       : 
                                                      ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000018U] 
                                                        << 0x0000001fU) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000017U] 
                                                          >> 1U)))))));
        }
    } else {
        vlSelfRef.__PVT__reg_rdata_next = ((IData)(
                                                   (0ULL 
                                                    != 
                                                    (0x000000000000ff00ULL 
                                                     & vlSelfRef.__PVT__addr_hit)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__addr_hit 
                                                           >> 8U)))
                                                ? (
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000019U] 
                                                    << 0x0000001fU) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000018U] 
                                                      >> 1U))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__addr_hit 
                                                               >> 9U)))
                                                    ? 
                                                   ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001aU] 
                                                     << 0x0000001fU) 
                                                    | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000019U] 
                                                       >> 1U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__addr_hit 
                                                                >> 0x0aU)))
                                                     ? 
                                                    ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
                                                      << 0x0000001fU) 
                                                     | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001aU] 
                                                        >> 1U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__addr_hit 
                                                                 >> 0x0bU)))
                                                      ? 
                                                     ((0xc0000000U 
                                                       & vlSelfRef.__PVT__reg_rdata_next) 
                                                      | (0x3fffffffU 
                                                         & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000017U] 
                                                             << 0x0000001dU) 
                                                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000016U] 
                                                               >> 3U))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__addr_hit 
                                                                  >> 0x0cU)))
                                                       ? 
                                                      ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000016U] 
                                                        << 0x0000001dU) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000015U] 
                                                          >> 3U))
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__addr_hit 
                                                                   >> 0x0dU)))
                                                        ? 
                                                       ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000015U] 
                                                         << 0x0000001dU) 
                                                        | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000014U] 
                                                           >> 3U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__addr_hit 
                                                                    >> 0x0eU)))
                                                         ? 
                                                        ((0xc0000000U 
                                                          & vlSelfRef.__PVT__reg_rdata_next) 
                                                         | (0x3fffffffU 
                                                            & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000014U] 
                                                                << 0x0000001bU) 
                                                               | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000013U] 
                                                                  >> 5U))))
                                                         : 
                                                        ((0xffffffe0U 
                                                          & vlSelfRef.__PVT__reg_rdata_next) 
                                                         | (0x0000001fU 
                                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000013U])))))))))
                                            : ((IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x0000000000ff0000ULL 
                                                         & vlSelfRef.__PVT__addr_hit)))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__addr_hit 
                                                               >> 0x10U)))
                                                    ? 
                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000012U]
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__addr_hit 
                                                                >> 0x11U)))
                                                     ? 
                                                    ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000011U] 
                                                      << 0x00000010U) 
                                                     | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000011U] 
                                                        >> 0x00000010U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__addr_hit 
                                                                 >> 0x12U)))
                                                      ? 
                                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000010U] 
                                                       << 8U) 
                                                      | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000010U] 
                                                         >> 0x00000018U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__addr_hit 
                                                                  >> 0x13U)))
                                                       ? 
                                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[8U]
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__addr_hit 
                                                                   >> 0x14U)))
                                                        ? 
                                                       vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[9U]
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__addr_hit 
                                                                    >> 0x15U)))
                                                         ? 
                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000aU]
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.__PVT__addr_hit 
                                                                     >> 0x16U)))
                                                          ? 
                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000bU]
                                                          : 
                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000cU])))))))
                                                : ((IData)(
                                                           (0ULL 
                                                            != 
                                                            (0x00000000ff000000ULL 
                                                             & vlSelfRef.__PVT__addr_hit)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__addr_hit 
                                                                >> 0x18U)))
                                                     ? 
                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000dU]
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__addr_hit 
                                                                 >> 0x19U)))
                                                      ? 
                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000eU]
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__addr_hit 
                                                                  >> 0x1aU)))
                                                       ? 
                                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000fU]
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__addr_hit 
                                                                   >> 0x1bU)))
                                                        ? 
                                                       vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0U]
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__addr_hit 
                                                                    >> 0x1cU)))
                                                         ? 
                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[1U]
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.__PVT__addr_hit 
                                                                     >> 0x1dU)))
                                                          ? 
                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[2U]
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__addr_hit 
                                                                      >> 0x1eU)))
                                                           ? 
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[3U]
                                                           : 
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[4U])))))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__addr_hit 
                                                                >> 0x20U)))
                                                     ? 
                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[5U]
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__addr_hit 
                                                                 >> 0x21U)))
                                                      ? 
                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[6U]
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__addr_hit 
                                                                  >> 0x22U)))
                                                       ? 
                                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[7U]
                                                       : 0xffffffffU))))));
    }
    vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__we 
        = (((0x0cU == (0x0000003fU & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
            & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40)) 
           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
              >> 3U));
    vlSelfRef.__PVT__u_transition_cmd__DOT__we = ((
                                                   (5U 
                                                    == 
                                                    (0x0000003fU 
                                                     & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                         << 3U) 
                                                        | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001dU)))) 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40)) 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
                                                     >> 3U));
    vlSelfRef.__PVT__u_transition_ctrl_ext_clock_en__DOT__we 
        = (((6U == (0x0000003fU & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                    << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                              >> 0x0000001dU)))) 
            & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40)) 
           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
              >> 3U));
    vlSelfRef.__PVT__u_transition_token_0__DOT__we 
        = (((7U == (0x0000003fU & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                    << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                              >> 0x0000001dU)))) 
            & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40)) 
           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
              >> 3U));
    vlSelfRef.__PVT__u_transition_token_1__DOT__we 
        = (((8U == (0x0000003fU & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                    << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                              >> 0x0000001dU)))) 
            & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40)) 
           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
              >> 3U));
    vlSelfRef.__PVT__u_transition_token_2__DOT__we 
        = (((9U == (0x0000003fU & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                    << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                              >> 0x0000001dU)))) 
            & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40)) 
           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
              >> 3U));
    vlSelfRef.__PVT__u_transition_token_3__DOT__we 
        = (((0x0aU == (0x0000003fU & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001dU)))) 
            & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40)) 
           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
              >> 3U));
    vlSelfRef.__PVT__u_transition_target__DOT__we = 
        (((0x0bU == (0x0000003fU & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                     << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                               >> 0x0000001dU)))) 
          & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40)) 
         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
            >> 3U));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_transition_ctrl_ext_clock_en__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_transition_token_0__DOT__we));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_transition_token_1__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_transition_token_2__DOT__we));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (QData)((IData)((((((((IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__we) 
                                << 3U) | ((IData)(vlSelfRef.__PVT__u_transition_target__DOT__we) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.__PVT__u_transition_token_3__DOT__we) 
                                << 1U) | (IData)(vlSelfRef.__PVT__u_transition_token_2__DOT__we))) 
                             << 9U) | (((IData)(vlSelfRef.__PVT__u_transition_token_1__DOT__we) 
                                        << 8U) | (((IData)(vlSelfRef.__PVT__u_transition_token_0__DOT__we) 
                                                   << 7U) 
                                                  | ((IData)(vlSelfRef.__PVT__u_transition_ctrl_ext_clock_en__DOT__we) 
                                                     << 6U)))) 
                           | (((IData)(vlSelfRef.__PVT__u_transition_cmd__DOT__we) 
                               << 5U) | (((IData)(vlSelfRef.__PVT__u_claim_transition_if__DOT__we) 
                                          << 3U) | 
                                         (((IData)(vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__we) 
                                           << 2U) | (IData)(vlSelfRef.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we)))))));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_transition_token_3__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_transition_target__DOT__we));
    vlSelfRef.reg2hw[0U] = (IData)((((QData)((IData)(
                                                     ((0x7ffffffeU 
                                                       & (vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                                          << 1U)) 
                                                      | (IData)(vlSelfRef.__PVT__u_transition_target__DOT__we)))) 
                                     << 0x00000021U) 
                                    | (((QData)((IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd)) 
                                        << 1U) | (QData)((IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__we)))));
    vlSelfRef.reg2hw[1U] = (IData)(((((QData)((IData)(
                                                      ((0x7ffffffeU 
                                                        & (vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                                           << 1U)) 
                                                       | (IData)(vlSelfRef.__PVT__u_transition_target__DOT__we)))) 
                                      << 0x00000021U) 
                                     | (((QData)((IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd)) 
                                         << 1U) | (QData)((IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__we)))) 
                                    >> 0x00000020U));
    vlSelfRef.reg2hw[2U] = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_transition_token_1__DOT__we)) 
                                     << 0x00000021U) 
                                    | (((QData)((IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd)) 
                                        << 1U) | (QData)((IData)(vlSelfRef.__PVT__u_transition_token_0__DOT__we)))));
    vlSelfRef.reg2hw[3U] = ((vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                             << 2U) | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_transition_token_1__DOT__we)) 
                                                 << 0x00000021U) 
                                                | (((QData)((IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd)) 
                                                    << 1U) 
                                                   | (QData)((IData)(vlSelfRef.__PVT__u_transition_token_0__DOT__we)))) 
                                               >> 0x00000020U)));
    vlSelfRef.reg2hw[4U] = ((0xfffffffcU & vlSelfRef.reg2hw[4U]) 
                            | (vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                               >> 0x0000001eU));
    vlSelfRef.reg2hw[4U] = ((3U & vlSelfRef.reg2hw[4U]) 
                            | ((IData)((((QData)((IData)(vlSelfRef.__PVT__u_transition_token_3__DOT__we)) 
                                         << 0x00000021U) 
                                        | (((QData)((IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.__PVT__u_transition_token_2__DOT__we))))) 
                               << 2U));
    vlSelfRef.reg2hw[5U] = (((IData)((((QData)((IData)(vlSelfRef.__PVT__u_transition_token_3__DOT__we)) 
                                       << 0x00000021U) 
                                      | (((QData)((IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.__PVT__u_transition_token_2__DOT__we))))) 
                             >> 0x0000001eU) | ((vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                                 << 4U) 
                                                | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.__PVT__u_transition_token_3__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.__PVT__u_transition_token_2__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   << 2U)));
    vlSelfRef.reg2hw[6U] = ((0x01fffff0U & vlSelfRef.reg2hw[6U]) 
                            | (0x01ffffffU & (((3U 
                                                & (vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                                   >> 0x0000001cU)) 
                                               | ((IData)(
                                                          ((((QData)((IData)(vlSelfRef.__PVT__u_transition_token_3__DOT__we)) 
                                                             << 0x00000021U) 
                                                            | (((QData)((IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd)) 
                                                                << 1U) 
                                                               | (QData)((IData)(vlSelfRef.__PVT__u_transition_token_2__DOT__we)))) 
                                                           >> 0x00000020U)) 
                                                  >> 0x0000001eU)) 
                                              | (0x0000000cU 
                                                 & (vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                                    >> 0x0000001cU)))));
    vlSelfRef.reg2hw[6U] = ((0x0000000fU & vlSelfRef.reg2hw[6U]) 
                            | (0x01ffffffU & ((((((4U 
                                                   & vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd) 
                                                  | (((7U 
                                                       == 
                                                       (7U 
                                                        & (- (IData)((IData)(vlSelfRef.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we))))) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                                           >> 1U)))) 
                                                 << 0x00000012U) 
                                                | (((7U 
                                                     == 
                                                     (7U 
                                                      & (- (IData)((IData)(vlSelfRef.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we))))) 
                                                    << 0x00000011U) 
                                                   | (((2U 
                                                        & (vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                                           << 1U)) 
                                                       | (7U 
                                                          == 
                                                          (7U 
                                                           & (- (IData)((IData)(vlSelfRef.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we)))))) 
                                                      << 0x0000000fU))) 
                                               | ((0x00007f80U 
                                                   & (vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                                      << 7U)) 
                                                  | ((((((IData)(vlSelfRef.__PVT__u_claim_transition_if__DOT__we) 
                                                         << 3U) 
                                                        | (4U 
                                                           & (vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                                              << 2U))) 
                                                       | (((IData)(vlSelfRef.__PVT__u_transition_cmd__DOT__we) 
                                                           << 1U) 
                                                          | (1U 
                                                             & (vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                                                >> 1U)))) 
                                                      << 3U) 
                                                     | (((3U 
                                                          == 
                                                          (3U 
                                                           & (- (IData)((IData)(vlSelfRef.__PVT__u_transition_ctrl_ext_clock_en__DOT__we))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
                                                               << 1U)) 
                                                           | (3U 
                                                              == 
                                                              (3U 
                                                               & (- (IData)((IData)(vlSelfRef.__PVT__u_transition_ctrl_ext_clock_en__DOT__we)))))))))) 
                                              << 4U)));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_transition_cmd__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
           | (IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__we));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o 
        = ((((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
             & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
            | ((((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
                 & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__)) 
                | ((((IData)(vlSelfRef.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we) 
                     & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__)) 
                    | ((IData)(vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__we) 
                       & (IData)(vlSelfRef.__PVT__u_claim_transition_if__DOT__we))) 
                   | (((IData)(vlSelfRef.__PVT__u_transition_cmd__DOT__we) 
                       & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__)) 
                      | ((IData)(vlSelfRef.__PVT__u_transition_ctrl_ext_clock_en__DOT__we) 
                         & (IData)(vlSelfRef.__PVT__u_transition_token_0__DOT__we))))) 
               | (((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
                   & (IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__we)) 
                  | (((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__) 
                      & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__)) 
                     | (((IData)(vlSelfRef.__PVT__u_transition_token_1__DOT__we) 
                         & (IData)(vlSelfRef.__PVT__u_transition_token_2__DOT__we)) 
                        | ((IData)(vlSelfRef.__PVT__u_transition_token_3__DOT__we) 
                           & (IData)(vlSelfRef.__PVT__u_transition_target__DOT__we))))))) 
           | ((~ ((~ (IData)(vlSelfRef.__PVT__addrmiss)) 
                  & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__we_o))) 
              & ((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
                 | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__))));
}

void Vsim_lc_ctrl_regs_reg_top___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__0(Vsim_lc_ctrl_regs_reg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_lc_ctrl_regs_reg_top___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__0\n"); );
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
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__we) {
            vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__q 
                = vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg_if__DOT__a_ack) {
            vlSelfRef.__PVT__u_reg_if__DOT__rspop_q 
                = ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
            vlSelfRef.__PVT__u_reg_if__DOT__error_q 
                = ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__error_i) 
                   | (IData)(vlSelfRef.__PVT__u_reg_if__DOT__err_internal));
            vlSelfRef.__PVT__u_reg_if__DOT__rdata_q 
                = ((((IData)(vlSelfRef.__PVT__u_reg_if__DOT__error_i) 
                     | (IData)(vlSelfRef.__PVT__u_reg_if__DOT__err_internal)) 
                    | (IData)(vlSelfRef.__PVT__u_reg_if__DOT__wr_req))
                    ? 0xffffffffU : vlSelfRef.__PVT__reg_rdata_next);
            vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q = 1U;
            vlSelfRef.__PVT__u_reg_if__DOT__reqid_q 
                = (0x000000ffU & ((vlSelf->__PVT__u_chk->tl_i[3U] 
                                   << 4U) | (vlSelf->__PVT__u_chk->tl_i[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.__PVT__u_reg_if__DOT__reqsz_q 
                = (3U & (vlSelf->__PVT__u_chk->tl_i[3U] 
                         >> 4U));
        } else if (vlSelfRef.__PVT__u_reg_if__DOT__d_ack) {
            vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q = 0U;
        }
        if (((IData)(vlSelf->__PVT__u_chk->err_o) | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) {
            vlSelfRef.__PVT__err_q = 1U;
        }
    } else {
        vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__q = 1U;
        vlSelfRef.__PVT__u_reg_if__DOT__rspop_q = 0U;
        vlSelfRef.__PVT__u_reg_if__DOT__error_q = 0U;
        vlSelfRef.__PVT__u_reg_if__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q = 0U;
        vlSelfRef.__PVT__u_reg_if__DOT__reqid_q = 0U;
        vlSelfRef.__PVT__u_reg_if__DOT__reqsz_q = 0U;
        vlSelfRef.__PVT__err_q = 0U;
    }
    __VdfgRegularize_hba25b58b_1_3 = (((IData)(vlSelfRef.__PVT__u_reg_if__DOT__error_q) 
                                       << 1U) | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q))));
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

void Vsim_lc_ctrl_regs_reg_top___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__1(Vsim_lc_ctrl_regs_reg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_lc_ctrl_regs_reg_top___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg_if__DOT__d_ack = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o)) 
                                             & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q));
}

void Vsim_lc_ctrl_regs_reg_top___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__0(Vsim_lc_ctrl_regs_reg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_lc_ctrl_regs_reg_top___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vsim_lc_ctrl_regs_reg_top___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__1(Vsim_lc_ctrl_regs_reg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_lc_ctrl_regs_reg_top___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg_if__DOT__a_ack = ((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q)) 
                                             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__17__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i));
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

void Vsim_lc_ctrl_regs_reg_top___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__2(Vsim_lc_ctrl_regs_reg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_lc_ctrl_regs_reg_top___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    vlSelfRef.__PVT__u_reg_if__DOT__re_o = ((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__err_internal)) 
                                            & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__rd_req));
    vlSelfRef.__PVT__u_reg_if__DOT__we_o = ((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__err_internal)) 
                                            & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__wr_req));
    vlSelfRef.__PVT__wr_err = ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__we_o) 
                               & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__VdfgRegularize_h6e95ff9d_0_269) 
                                  | (((1U == (0x0000003fU 
                                              & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                  << 3U) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                    >> 0x0000001dU)))) 
                                      & (0U != (3U 
                                                & (~ 
                                                   ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     << 9U) 
                                                    | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                       >> 0x00000017U)))))) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__VdfgRegularize_h6e95ff9d_0_270) 
                                        | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__VdfgRegularize_h6e95ff9d_0_271) 
                                           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__VdfgRegularize_h6e95ff9d_0_272) 
                                              | (((5U 
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
                                                             >> 0x00000017U)))))) 
                                                 | (((6U 
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
                                                                >> 0x00000017U)))))) 
                                                    | (((7U 
                                                         == 
                                                         (0x0000003fU 
                                                          & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                              << 3U) 
                                                             | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x0000001dU)))) 
                                                        & (0U 
                                                           != 
                                                           (0x0000000fU 
                                                            & (~ 
                                                               ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 << 9U) 
                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x00000017U)))))) 
                                                       | (((8U 
                                                            == 
                                                            (0x0000003fU 
                                                             & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                 << 3U) 
                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x0000001dU)))) 
                                                           & (0U 
                                                              != 
                                                              (0x0000000fU 
                                                               & (~ 
                                                                  ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                    << 9U) 
                                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                      >> 0x00000017U)))))) 
                                                          | (((9U 
                                                               == 
                                                               (0x0000003fU 
                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                    << 3U) 
                                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                      >> 0x0000001dU)))) 
                                                              & (0U 
                                                                 != 
                                                                 (0x0000000fU 
                                                                  & (~ 
                                                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       << 9U) 
                                                                      | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                         >> 0x00000017U)))))) 
                                                             | (((0x0aU 
                                                                  == 
                                                                  (0x0000003fU 
                                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                       << 3U) 
                                                                      | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                         >> 0x0000001dU)))) 
                                                                 & (0U 
                                                                    != 
                                                                    (0x0000000fU 
                                                                     & (~ 
                                                                        ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                          << 9U) 
                                                                         | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                            >> 0x00000017U)))))) 
                                                                | (((0x0bU 
                                                                     == 
                                                                     (0x0000003fU 
                                                                      & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                          << 3U) 
                                                                         | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                            >> 0x0000001dU)))) 
                                                                    & (0U 
                                                                       != 
                                                                       (0x0000000fU 
                                                                        & (~ 
                                                                           ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                             << 9U) 
                                                                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               >> 0x00000017U)))))) 
                                                                   | (((0x0cU 
                                                                        == 
                                                                        (0x0000003fU 
                                                                         & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                             << 3U) 
                                                                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               >> 0x0000001dU)))) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x0000000fU 
                                                                           & (~ 
                                                                              ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                               | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                      | (((0x0dU 
                                                                           == 
                                                                           (0x0000003fU 
                                                                            & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                               | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                          & (0U 
                                                                             != 
                                                                             (0x0000000fU 
                                                                              & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                         | (((0x0eU 
                                                                              == 
                                                                              (0x0000003fU 
                                                                               & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                             & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                            | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__VdfgRegularize_h6e95ff9d_0_273) 
                                                                               | ((0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U))))) 
                                                                                & ((0x10U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x11U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x12U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x13U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x14U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x15U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x16U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x17U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x18U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x19U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x1aU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x1bU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x1cU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x1dU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x1eU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x1fU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x20U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_391))))))))))))))))))))))))))))))))))));
    vlSelfRef.__PVT__addrmiss = ((~ (0U != vlSelfRef.__PVT__addr_hit)) 
                                 & ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__re_o) 
                                    | (IData)(vlSelfRef.__PVT__u_reg_if__DOT__we_o)));
    vlSelfRef.__PVT__u_reg_if__DOT__error_i = ((IData)(vlSelfRef.__PVT__addrmiss) 
                                               | ((IData)(vlSelfRef.__PVT__wr_err) 
                                                  | (IData)(vlSelf->__PVT__u_chk->err_o)));
    vlSelfRef.__VdfgRegularize_hba25b58b_0_40 = ((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__error_i)) 
                                                 & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__we_o));
    vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__we 
        = ((2U == (0x0000003fU & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001dU)))) 
           & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40));
    vlSelfRef.__PVT__u_claim_transition_if__DOT__we 
        = (((3U == (0x0000003fU & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                    << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                              >> 0x0000001dU)))) 
            & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40)) 
           & (IData)(vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__q));
    vlSelfRef.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we 
        = ((0U == (0x0000003fU & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 3U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001dU)))) 
           & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40));
    vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__wr_data 
        = ((IData)(vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__q) 
           & ((~ (IData)(vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__we)) 
              | vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__wd));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_claim_transition_if__DOT__we));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__));
}

void Vsim_lc_ctrl_regs_reg_top___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__0(Vsim_lc_ctrl_regs_reg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_lc_ctrl_regs_reg_top___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reg_rdata_next = 0U;
    if ((IData)((0ULL != (0x00000000000000ffULL & vlSelfRef.__PVT__addr_hit)))) {
        if ((1U & (IData)(vlSelfRef.__PVT__addr_hit))) {
            vlSelfRef.__PVT__reg_rdata_next = (0xfffffff8U 
                                               & vlSelfRef.__PVT__reg_rdata_next);
        } else if ((1U & (IData)((vlSelfRef.__PVT__addr_hit 
                                  >> 1U)))) {
            vlSelfRef.__PVT__reg_rdata_next = ((0xfffffff0U 
                                                & vlSelfRef.__PVT__reg_rdata_next) 
                                               | ((((2U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                        >> 0x00000013U)) 
                                                    | (1U 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                          >> 0x00000015U))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                         >> 0x00000015U)) 
                                                     | (1U 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                           >> 0x00000017U)))));
            vlSelfRef.__PVT__reg_rdata_next = ((0xffffff0fU 
                                                & vlSelfRef.__PVT__reg_rdata_next) 
                                               | ((((2U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                        >> 0x0000000fU)) 
                                                    | (1U 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                          >> 0x00000011U))) 
                                                   << 6U) 
                                                  | (((2U 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                          >> 0x00000011U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                            >> 0x00000013U))) 
                                                     << 4U)));
            vlSelfRef.__PVT__reg_rdata_next = ((0xfffff0ffU 
                                                & vlSelfRef.__PVT__reg_rdata_next) 
                                               | ((((2U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                        >> 0x0000000bU)) 
                                                    | (1U 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                          >> 0x0000000dU))) 
                                                   << 0x0000000aU) 
                                                  | (((2U 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                          >> 0x0000000dU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                            >> 0x0000000fU))) 
                                                     << 8U)));
        } else {
            vlSelfRef.__PVT__reg_rdata_next = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__addr_hit 
                                                           >> 2U)))
                                                ? (
                                                   (0xfffffffeU 
                                                    & vlSelfRef.__PVT__reg_rdata_next) 
                                                   | (IData)(vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__q))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__addr_hit 
                                                               >> 3U)))
                                                    ? 
                                                   ((0xffffff00U 
                                                     & vlSelfRef.__PVT__reg_rdata_next) 
                                                    | (0x000000ffU 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                          >> 4U)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__addr_hit 
                                                                >> 4U)))
                                                     ? 
                                                    ((0xfffffffeU 
                                                      & vlSelfRef.__PVT__reg_rdata_next) 
                                                     | (1U 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                           >> 3U)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__addr_hit 
                                                                 >> 5U)))
                                                      ? 
                                                     (0xfffffffeU 
                                                      & vlSelfRef.__PVT__reg_rdata_next)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__addr_hit 
                                                                  >> 6U)))
                                                       ? 
                                                      ((0xfffffffcU 
                                                        & vlSelfRef.__PVT__reg_rdata_next) 
                                                       | ((2U 
                                                           & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU]) 
                                                          | (1U 
                                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                                >> 2U))))
                                                       : 
                                                      ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000018U] 
                                                        << 0x0000001fU) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000017U] 
                                                          >> 1U)))))));
        }
    } else {
        vlSelfRef.__PVT__reg_rdata_next = ((IData)(
                                                   (0ULL 
                                                    != 
                                                    (0x000000000000ff00ULL 
                                                     & vlSelfRef.__PVT__addr_hit)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__addr_hit 
                                                           >> 8U)))
                                                ? (
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000019U] 
                                                    << 0x0000001fU) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000018U] 
                                                      >> 1U))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__addr_hit 
                                                               >> 9U)))
                                                    ? 
                                                   ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001aU] 
                                                     << 0x0000001fU) 
                                                    | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000019U] 
                                                       >> 1U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__addr_hit 
                                                                >> 0x0aU)))
                                                     ? 
                                                    ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                      << 0x0000001fU) 
                                                     | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001aU] 
                                                        >> 1U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__addr_hit 
                                                                 >> 0x0bU)))
                                                      ? 
                                                     ((0xc0000000U 
                                                       & vlSelfRef.__PVT__reg_rdata_next) 
                                                      | (0x3fffffffU 
                                                         & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000017U] 
                                                             << 0x0000001dU) 
                                                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000016U] 
                                                               >> 3U))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__addr_hit 
                                                                  >> 0x0cU)))
                                                       ? 
                                                      ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000016U] 
                                                        << 0x0000001dU) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000015U] 
                                                          >> 3U))
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__addr_hit 
                                                                   >> 0x0dU)))
                                                        ? 
                                                       ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000015U] 
                                                         << 0x0000001dU) 
                                                        | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000014U] 
                                                           >> 3U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__addr_hit 
                                                                    >> 0x0eU)))
                                                         ? 
                                                        ((0xc0000000U 
                                                          & vlSelfRef.__PVT__reg_rdata_next) 
                                                         | (0x3fffffffU 
                                                            & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000014U] 
                                                                << 0x0000001bU) 
                                                               | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000013U] 
                                                                  >> 5U))))
                                                         : 
                                                        ((0xffffffe0U 
                                                          & vlSelfRef.__PVT__reg_rdata_next) 
                                                         | (0x0000001fU 
                                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000013U])))))))))
                                            : ((IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x0000000000ff0000ULL 
                                                         & vlSelfRef.__PVT__addr_hit)))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__addr_hit 
                                                               >> 0x10U)))
                                                    ? 
                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000012U]
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__addr_hit 
                                                                >> 0x11U)))
                                                     ? 
                                                    ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000011U] 
                                                      << 0x00000010U) 
                                                     | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000011U] 
                                                        >> 0x00000010U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__addr_hit 
                                                                 >> 0x12U)))
                                                      ? 
                                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000010U] 
                                                       << 8U) 
                                                      | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000010U] 
                                                         >> 0x00000018U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__addr_hit 
                                                                  >> 0x13U)))
                                                       ? 
                                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[8U]
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__addr_hit 
                                                                   >> 0x14U)))
                                                        ? 
                                                       vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[9U]
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__addr_hit 
                                                                    >> 0x15U)))
                                                         ? 
                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000000aU]
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.__PVT__addr_hit 
                                                                     >> 0x16U)))
                                                          ? 
                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000000bU]
                                                          : 
                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000000cU])))))))
                                                : ((IData)(
                                                           (0ULL 
                                                            != 
                                                            (0x00000000ff000000ULL 
                                                             & vlSelfRef.__PVT__addr_hit)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__addr_hit 
                                                                >> 0x18U)))
                                                     ? 
                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000000dU]
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__addr_hit 
                                                                 >> 0x19U)))
                                                      ? 
                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000000eU]
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__addr_hit 
                                                                  >> 0x1aU)))
                                                       ? 
                                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000000fU]
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__addr_hit 
                                                                   >> 0x1bU)))
                                                        ? 
                                                       vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0U]
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__addr_hit 
                                                                    >> 0x1cU)))
                                                         ? 
                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[1U]
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.__PVT__addr_hit 
                                                                     >> 0x1dU)))
                                                          ? 
                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[2U]
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__addr_hit 
                                                                      >> 0x1eU)))
                                                           ? 
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[3U]
                                                           : 
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[4U])))))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__addr_hit 
                                                                >> 0x20U)))
                                                     ? 
                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[5U]
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__addr_hit 
                                                                 >> 0x21U)))
                                                      ? 
                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[6U]
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__addr_hit 
                                                                  >> 0x22U)))
                                                       ? 
                                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[7U]
                                                       : 0xffffffffU))))));
    }
    vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__we 
        = ((IData)(((0x00000030U == (0x000000fcU & 
                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U])) 
                    & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40))) 
           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
              >> 3U));
    vlSelfRef.__PVT__u_transition_cmd__DOT__we = ((IData)(
                                                          ((0x00000014U 
                                                            == 
                                                            (0x000000fcU 
                                                             & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U])) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40))) 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                     >> 3U));
    vlSelfRef.__PVT__u_transition_ctrl_ext_clock_en__DOT__we 
        = ((IData)(((0x00000018U == (0x000000fcU & 
                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U])) 
                    & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40))) 
           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
              >> 3U));
    vlSelfRef.__PVT__u_transition_token_0__DOT__we 
        = ((IData)(((0x0000001cU == (0x000000fcU & 
                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U])) 
                    & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40))) 
           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
              >> 3U));
    vlSelfRef.__PVT__u_transition_token_1__DOT__we 
        = ((IData)(((0x00000020U == (0x000000fcU & 
                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U])) 
                    & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40))) 
           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
              >> 3U));
    vlSelfRef.__PVT__u_transition_token_2__DOT__we 
        = ((IData)(((0x00000024U == (0x000000fcU & 
                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U])) 
                    & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40))) 
           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
              >> 3U));
    vlSelfRef.__PVT__u_transition_token_3__DOT__we 
        = ((IData)(((0x00000028U == (0x000000fcU & 
                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U])) 
                    & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40))) 
           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
              >> 3U));
    vlSelfRef.__PVT__u_transition_target__DOT__we = 
        ((IData)(((0x0000002cU == (0x000000fcU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U])) 
                  & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40))) 
         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
            >> 3U));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_transition_ctrl_ext_clock_en__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_transition_token_0__DOT__we));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_transition_token_1__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_transition_token_2__DOT__we));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (QData)((IData)((((((((IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__we) 
                                << 3U) | ((IData)(vlSelfRef.__PVT__u_transition_target__DOT__we) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.__PVT__u_transition_token_3__DOT__we) 
                                << 1U) | (IData)(vlSelfRef.__PVT__u_transition_token_2__DOT__we))) 
                             << 9U) | (((IData)(vlSelfRef.__PVT__u_transition_token_1__DOT__we) 
                                        << 8U) | (((IData)(vlSelfRef.__PVT__u_transition_token_0__DOT__we) 
                                                   << 7U) 
                                                  | ((IData)(vlSelfRef.__PVT__u_transition_ctrl_ext_clock_en__DOT__we) 
                                                     << 6U)))) 
                           | (((IData)(vlSelfRef.__PVT__u_transition_cmd__DOT__we) 
                               << 5U) | (((IData)(vlSelfRef.__PVT__u_claim_transition_if__DOT__we) 
                                          << 3U) | 
                                         (((IData)(vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__we) 
                                           << 2U) | (IData)(vlSelfRef.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we)))))));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_transition_token_3__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_transition_target__DOT__we));
    vlSelfRef.reg2hw[0U] = (IData)((((QData)((IData)(
                                                     ((0x7ffffffeU 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                          << 1U)) 
                                                      | (IData)(vlSelfRef.__PVT__u_transition_target__DOT__we)))) 
                                     << 0x00000021U) 
                                    | (((QData)((IData)(
                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])) 
                                        << 1U) | (QData)((IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__we)))));
    vlSelfRef.reg2hw[1U] = (IData)(((((QData)((IData)(
                                                      ((0x7ffffffeU 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                           << 1U)) 
                                                       | (IData)(vlSelfRef.__PVT__u_transition_target__DOT__we)))) 
                                      << 0x00000021U) 
                                     | (((QData)((IData)(
                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])) 
                                         << 1U) | (QData)((IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__we)))) 
                                    >> 0x00000020U));
    vlSelfRef.reg2hw[2U] = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_transition_token_1__DOT__we)) 
                                     << 0x00000021U) 
                                    | (((QData)((IData)(
                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])) 
                                        << 1U) | (QData)((IData)(vlSelfRef.__PVT__u_transition_token_0__DOT__we)))));
    vlSelfRef.reg2hw[3U] = ((0xfffffffcU & vlSelfRef.reg2hw[3U]) 
                            | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_transition_token_1__DOT__we)) 
                                         << 0x00000021U) 
                                        | (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.__PVT__u_transition_token_0__DOT__we)))) 
                                       >> 0x00000020U)));
    vlSelfRef.reg2hw[3U] = ((3U & vlSelfRef.reg2hw[3U]) 
                            | ((IData)((((QData)((IData)(vlSelfRef.__PVT__u_transition_token_2__DOT__we)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])))) 
                               << 2U));
    vlSelfRef.reg2hw[4U] = (((IData)((((QData)((IData)(vlSelfRef.__PVT__u_transition_token_2__DOT__we)) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])))) 
                             >> 0x0000001eU) | ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                 << 3U) 
                                                | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.__PVT__u_transition_token_2__DOT__we)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U]))) 
                                                            >> 0x00000020U)) 
                                                   << 2U)));
    vlSelfRef.reg2hw[5U] = ((0xfffffff8U & vlSelfRef.reg2hw[5U]) 
                            | (((3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                       >> 0x0000001dU)) 
                                | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__u_transition_token_2__DOT__we)) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U]))) 
                                            >> 0x00000020U)) 
                                   >> 0x0000001eU)) 
                               | (4U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                        >> 0x0000001dU))));
    vlSelfRef.reg2hw[5U] = ((7U & vlSelfRef.reg2hw[5U]) 
                            | ((IData)((((QData)((IData)(
                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])) 
                                         << 1U) | (QData)((IData)(vlSelfRef.__PVT__u_transition_token_3__DOT__we)))) 
                               << 3U));
    vlSelfRef.reg2hw[6U] = ((0x01fffff0U & vlSelfRef.reg2hw[6U]) 
                            | (0x01ffffffU & (((IData)(
                                                       (((QData)((IData)(
                                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])) 
                                                         << 1U) 
                                                        | (QData)((IData)(vlSelfRef.__PVT__u_transition_token_3__DOT__we)))) 
                                               >> 0x0000001dU) 
                                              | ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])) 
                                                            << 1U) 
                                                           | (QData)((IData)(vlSelfRef.__PVT__u_transition_token_3__DOT__we))) 
                                                          >> 0x00000020U)) 
                                                 << 3U))));
    vlSelfRef.reg2hw[6U] = ((0x0000000fU & vlSelfRef.reg2hw[6U]) 
                            | (0x01ffffffU & ((((((4U 
                                                   & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U]) 
                                                  | (((7U 
                                                       == 
                                                       (7U 
                                                        & (- (IData)((IData)(vlSelfRef.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we))))) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                           >> 1U)))) 
                                                 << 0x00000012U) 
                                                | (((7U 
                                                     == 
                                                     (7U 
                                                      & (- (IData)((IData)(vlSelfRef.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we))))) 
                                                    << 0x00000011U) 
                                                   | (((2U 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                           << 1U)) 
                                                       | (7U 
                                                          == 
                                                          (7U 
                                                           & (- (IData)((IData)(vlSelfRef.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we)))))) 
                                                      << 0x0000000fU))) 
                                               | ((0x00007f80U 
                                                   & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                      << 7U)) 
                                                  | ((((((IData)(vlSelfRef.__PVT__u_claim_transition_if__DOT__we) 
                                                         << 3U) 
                                                        | (4U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                              << 2U))) 
                                                       | (((IData)(vlSelfRef.__PVT__u_transition_cmd__DOT__we) 
                                                           << 1U) 
                                                          | (1U 
                                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                                >> 1U)))) 
                                                      << 3U) 
                                                     | (((3U 
                                                          == 
                                                          (3U 
                                                           & (- (IData)((IData)(vlSelfRef.__PVT__u_transition_ctrl_ext_clock_en__DOT__we))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                               << 1U)) 
                                                           | (3U 
                                                              == 
                                                              (3U 
                                                               & (- (IData)((IData)(vlSelfRef.__PVT__u_transition_ctrl_ext_clock_en__DOT__we)))))))))) 
                                              << 4U)));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_transition_cmd__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
           | (IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__we));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o 
        = ((((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
             & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
            | ((((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
                 & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__)) 
                | ((((IData)(vlSelfRef.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we) 
                     & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__)) 
                    | ((IData)(vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__we) 
                       & (IData)(vlSelfRef.__PVT__u_claim_transition_if__DOT__we))) 
                   | (((IData)(vlSelfRef.__PVT__u_transition_cmd__DOT__we) 
                       & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__)) 
                      | ((IData)(vlSelfRef.__PVT__u_transition_ctrl_ext_clock_en__DOT__we) 
                         & (IData)(vlSelfRef.__PVT__u_transition_token_0__DOT__we))))) 
               | (((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
                   & (IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__we)) 
                  | (((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__) 
                      & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__)) 
                     | (((IData)(vlSelfRef.__PVT__u_transition_token_1__DOT__we) 
                         & (IData)(vlSelfRef.__PVT__u_transition_token_2__DOT__we)) 
                        | ((IData)(vlSelfRef.__PVT__u_transition_token_3__DOT__we) 
                           & (IData)(vlSelfRef.__PVT__u_transition_target__DOT__we))))))) 
           | ((~ ((~ (IData)(vlSelfRef.__PVT__addrmiss)) 
                  & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__we_o))) 
              & ((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
                 | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__))));
}

void Vsim_lc_ctrl_regs_reg_top___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__0(Vsim_lc_ctrl_regs_reg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_lc_ctrl_regs_reg_top___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__u_reg_if__DOT__outstanding_q;
    __Vdly__u_reg_if__DOT__outstanding_q = 0;
    // Body
    __Vdly__u_reg_if__DOT__outstanding_q = vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__u_reg_if__DOT__a_ack) {
            __Vdly__u_reg_if__DOT__outstanding_q = 1U;
            vlSelfRef.__PVT__u_reg_if__DOT__rspop_q 
                = ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
            vlSelfRef.__PVT__u_reg_if__DOT__error_q 
                = ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__error_i) 
                   | (IData)(vlSelfRef.__PVT__u_reg_if__DOT__err_internal));
            vlSelfRef.__PVT__u_reg_if__DOT__reqid_q 
                = (0x000000ffU & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[3U] 
                                   << 4U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.__PVT__u_reg_if__DOT__reqsz_q 
                = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[3U] 
                         >> 4U));
        } else if (vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q) {
            __Vdly__u_reg_if__DOT__outstanding_q = 0U;
        }
        if (vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__we) {
            vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__q 
                = vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__wr_data;
        }
        if (((IData)(vlSelf->__PVT__u_chk->err_o) | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) {
            vlSelfRef.__PVT__err_q = 1U;
        }
    } else {
        __Vdly__u_reg_if__DOT__outstanding_q = 0U;
        vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__q = 1U;
        vlSelfRef.__PVT__u_reg_if__DOT__rspop_q = 0U;
        vlSelfRef.__PVT__u_reg_if__DOT__error_q = 0U;
        vlSelfRef.__PVT__u_reg_if__DOT__reqid_q = 0U;
        vlSelfRef.__PVT__u_reg_if__DOT__reqsz_q = 0U;
        vlSelfRef.__PVT__err_q = 0U;
    }
    vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q = __Vdly__u_reg_if__DOT__outstanding_q;
    vlSelfRef.__VdfgRegularize_hba25b58b_1_3 = (((IData)(vlSelfRef.__PVT__u_reg_if__DOT__error_q) 
                                                 << 1U) 
                                                | (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q))));
}

void Vsim_lc_ctrl_regs_reg_top___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__1(Vsim_lc_ctrl_regs_reg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_lc_ctrl_regs_reg_top___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vsim_lc_ctrl_regs_reg_top___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__2(Vsim_lc_ctrl_regs_reg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_lc_ctrl_regs_reg_top___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__2\n"); );
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
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__u_reg_if__DOT__a_ack) {
            vlSelfRef.__PVT__u_reg_if__DOT__rdata_q 
                = ((((IData)(vlSelfRef.__PVT__u_reg_if__DOT__error_i) 
                     | (IData)(vlSelfRef.__PVT__u_reg_if__DOT__err_internal)) 
                    | (IData)(vlSelfRef.__PVT__u_reg_if__DOT__wr_req))
                    ? 0xffffffffU : vlSelfRef.__PVT__reg_rdata_next);
        }
    } else {
        vlSelfRef.__PVT__u_reg_if__DOT__rdata_q = 0U;
    }
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

void Vsim_lc_ctrl_regs_reg_top___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__0(Vsim_lc_ctrl_regs_reg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_lc_ctrl_regs_reg_top___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg_if__DOT__a_ack = ((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__outstanding_q)) 
                                             & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__req_i));
}

void Vsim_lc_ctrl_regs_reg_top___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__1(Vsim_lc_ctrl_regs_reg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_lc_ctrl_regs_reg_top___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.__PVT__u_reg_if__DOT__instr_error = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__4__val 
                = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[0U] 
                                  >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__4__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__4__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__4__Vfuncout));
}

void Vsim_lc_ctrl_regs_reg_top___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__2(Vsim_lc_ctrl_regs_reg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_lc_ctrl_regs_reg_top___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg_if__DOT__err_internal = 
        (1U & ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__instr_error) 
               | ((~ (((0U == ((2U == (3U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U]))
                                ? 0U : 4U)) | ((1U 
                                                == 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U]))
                                                  ? 0U
                                                  : 4U)) 
                                               | (4U 
                                                  == 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U]))
                                                    ? 0U
                                                    : 4U)))) 
                      & ((IData)(vlSelf->__PVT__u_reg_if__DOT__u_err->__PVT__addr_sz_chk) 
                         & ((IData)(vlSelf->__PVT__u_reg_if__DOT__u_err->__PVT__mask_chk) 
                            & ((4U == ((2U == (3U & 
                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U]))
                                        ? 0U : 4U)) 
                               | ((1U == ((2U == (3U 
                                                  & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U]))
                                           ? 0U : 4U)) 
                                  | (IData)(vlSelf->__PVT__u_reg_if__DOT__u_err->__PVT__fulldata_chk))))))) 
                  | ((IData)(vlSelf->__PVT__u_reg_if__DOT__u_err->__PVT__instr_type_err) 
                     | (IData)(vlSelf->__PVT__u_reg_if__DOT__u_err->__PVT__instr_wr_err)))));
    vlSelfRef.__PVT__u_reg_if__DOT__re_o = ((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__err_internal)) 
                                            & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__rd_req));
    vlSelfRef.__PVT__u_reg_if__DOT__we_o = ((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__err_internal)) 
                                            & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__wr_req));
    vlSelfRef.__PVT__addrmiss = ((~ (0U != vlSelfRef.__PVT__addr_hit)) 
                                 & ((IData)(vlSelfRef.__PVT__u_reg_if__DOT__re_o) 
                                    | (IData)(vlSelfRef.__PVT__u_reg_if__DOT__we_o)));
    vlSelfRef.__PVT__u_reg_if__DOT__error_i = ((IData)(vlSelfRef.__PVT__addrmiss) 
                                               | (IData)(vlSelf->__PVT__u_chk->err_o));
    vlSelfRef.__VdfgRegularize_hba25b58b_0_40 = ((~ (IData)(vlSelfRef.__PVT__u_reg_if__DOT__error_i)) 
                                                 & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__we_o));
    vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__we 
        = (IData)(((8U == (0x000000fcU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U])) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40)));
    vlSelfRef.__PVT__u_claim_transition_if__DOT__we 
        = ((IData)(((0x0000000cU == (0x000000fcU & 
                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U])) 
                    & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40))) 
           & (IData)(vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__q));
    vlSelfRef.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we 
        = (IData)(((0U == (0x000000fcU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U])) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40)));
    vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__wr_data 
        = ((IData)(vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__q) 
           & ((~ (IData)(vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__we)) 
              | vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U]));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_claim_transition_if__DOT__we));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__));
}

void Vsim_lc_ctrl_regs_reg_top___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__3(Vsim_lc_ctrl_regs_reg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_lc_ctrl_regs_reg_top___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reg_rdata_next = 0U;
    if ((IData)((0ULL != (0x00000000000000ffULL & vlSelfRef.__PVT__addr_hit)))) {
        if ((1U & (IData)(vlSelfRef.__PVT__addr_hit))) {
            vlSelfRef.__PVT__reg_rdata_next = (0xfffffff8U 
                                               & vlSelfRef.__PVT__reg_rdata_next);
        } else if ((1U & (IData)((vlSelfRef.__PVT__addr_hit 
                                  >> 1U)))) {
            vlSelfRef.__PVT__reg_rdata_next = ((0xfffffff0U 
                                                & vlSelfRef.__PVT__reg_rdata_next) 
                                               | ((((2U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                        >> 0x00000013U)) 
                                                    | (1U 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                          >> 0x00000015U))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                         >> 0x00000015U)) 
                                                     | (1U 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                           >> 0x00000017U)))));
            vlSelfRef.__PVT__reg_rdata_next = ((0xffffff0fU 
                                                & vlSelfRef.__PVT__reg_rdata_next) 
                                               | ((((2U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                        >> 0x0000000fU)) 
                                                    | (1U 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                          >> 0x00000011U))) 
                                                   << 6U) 
                                                  | (((2U 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                          >> 0x00000011U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                            >> 0x00000013U))) 
                                                     << 4U)));
            vlSelfRef.__PVT__reg_rdata_next = ((0xfffff0ffU 
                                                & vlSelfRef.__PVT__reg_rdata_next) 
                                               | ((((2U 
                                                     & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                        >> 0x0000000bU)) 
                                                    | (1U 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                          >> 0x0000000dU))) 
                                                   << 0x0000000aU) 
                                                  | (((2U 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                          >> 0x0000000dU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                            >> 0x0000000fU))) 
                                                     << 8U)));
        } else {
            vlSelfRef.__PVT__reg_rdata_next = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__addr_hit 
                                                           >> 2U)))
                                                ? (
                                                   (0xfffffffeU 
                                                    & vlSelfRef.__PVT__reg_rdata_next) 
                                                   | (IData)(vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__q))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__addr_hit 
                                                               >> 3U)))
                                                    ? 
                                                   ((0xffffff00U 
                                                     & vlSelfRef.__PVT__reg_rdata_next) 
                                                    | (0x000000ffU 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                          >> 4U)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__addr_hit 
                                                                >> 4U)))
                                                     ? 
                                                    ((0xfffffffeU 
                                                      & vlSelfRef.__PVT__reg_rdata_next) 
                                                     | (1U 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                           >> 3U)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__addr_hit 
                                                                 >> 5U)))
                                                      ? 
                                                     (0xfffffffeU 
                                                      & vlSelfRef.__PVT__reg_rdata_next)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__addr_hit 
                                                                  >> 6U)))
                                                       ? 
                                                      ((0xfffffffcU 
                                                        & vlSelfRef.__PVT__reg_rdata_next) 
                                                       | ((2U 
                                                           & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU]) 
                                                          | (1U 
                                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                                >> 2U))))
                                                       : 
                                                      ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000018U] 
                                                        << 0x0000001fU) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000017U] 
                                                          >> 1U)))))));
        }
    } else {
        vlSelfRef.__PVT__reg_rdata_next = ((IData)(
                                                   (0ULL 
                                                    != 
                                                    (0x000000000000ff00ULL 
                                                     & vlSelfRef.__PVT__addr_hit)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__addr_hit 
                                                           >> 8U)))
                                                ? (
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000019U] 
                                                    << 0x0000001fU) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000018U] 
                                                      >> 1U))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__addr_hit 
                                                               >> 9U)))
                                                    ? 
                                                   ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001aU] 
                                                     << 0x0000001fU) 
                                                    | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000019U] 
                                                       >> 1U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__addr_hit 
                                                                >> 0x0aU)))
                                                     ? 
                                                    ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                      << 0x0000001fU) 
                                                     | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001aU] 
                                                        >> 1U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__addr_hit 
                                                                 >> 0x0bU)))
                                                      ? 
                                                     ((0xc0000000U 
                                                       & vlSelfRef.__PVT__reg_rdata_next) 
                                                      | (0x3fffffffU 
                                                         & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000017U] 
                                                             << 0x0000001dU) 
                                                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000016U] 
                                                               >> 3U))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__addr_hit 
                                                                  >> 0x0cU)))
                                                       ? 
                                                      ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000016U] 
                                                        << 0x0000001dU) 
                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000015U] 
                                                          >> 3U))
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__addr_hit 
                                                                   >> 0x0dU)))
                                                        ? 
                                                       ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000015U] 
                                                         << 0x0000001dU) 
                                                        | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000014U] 
                                                           >> 3U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__addr_hit 
                                                                    >> 0x0eU)))
                                                         ? 
                                                        ((0xc0000000U 
                                                          & vlSelfRef.__PVT__reg_rdata_next) 
                                                         | (0x3fffffffU 
                                                            & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000014U] 
                                                                << 0x0000001bU) 
                                                               | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000013U] 
                                                                  >> 5U))))
                                                         : 
                                                        ((0xffffffe0U 
                                                          & vlSelfRef.__PVT__reg_rdata_next) 
                                                         | (0x0000001fU 
                                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000013U])))))))))
                                            : ((IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x0000000000ff0000ULL 
                                                         & vlSelfRef.__PVT__addr_hit)))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__addr_hit 
                                                               >> 0x10U)))
                                                    ? 
                                                   vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000012U]
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__addr_hit 
                                                                >> 0x11U)))
                                                     ? 
                                                    ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000011U] 
                                                      << 0x00000010U) 
                                                     | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000011U] 
                                                        >> 0x00000010U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__addr_hit 
                                                                 >> 0x12U)))
                                                      ? 
                                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000010U] 
                                                       << 8U) 
                                                      | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000010U] 
                                                         >> 0x00000018U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__addr_hit 
                                                                  >> 0x13U)))
                                                       ? 
                                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[8U]
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__addr_hit 
                                                                   >> 0x14U)))
                                                        ? 
                                                       vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[9U]
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__addr_hit 
                                                                    >> 0x15U)))
                                                         ? 
                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000000aU]
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.__PVT__addr_hit 
                                                                     >> 0x16U)))
                                                          ? 
                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000000bU]
                                                          : 
                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000000cU])))))))
                                                : ((IData)(
                                                           (0ULL 
                                                            != 
                                                            (0x00000000ff000000ULL 
                                                             & vlSelfRef.__PVT__addr_hit)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__addr_hit 
                                                                >> 0x18U)))
                                                     ? 
                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000000dU]
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__addr_hit 
                                                                 >> 0x19U)))
                                                      ? 
                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000000eU]
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__addr_hit 
                                                                  >> 0x1aU)))
                                                       ? 
                                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000000fU]
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__addr_hit 
                                                                   >> 0x1bU)))
                                                        ? 
                                                       vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0U]
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__addr_hit 
                                                                    >> 0x1cU)))
                                                         ? 
                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[1U]
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.__PVT__addr_hit 
                                                                     >> 0x1dU)))
                                                          ? 
                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[2U]
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__addr_hit 
                                                                      >> 0x1eU)))
                                                           ? 
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[3U]
                                                           : 
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[4U])))))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__addr_hit 
                                                                >> 0x20U)))
                                                     ? 
                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[5U]
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__addr_hit 
                                                                 >> 0x21U)))
                                                      ? 
                                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[6U]
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__addr_hit 
                                                                  >> 0x22U)))
                                                       ? 
                                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[7U]
                                                       : 0xffffffffU))))));
    }
}

void Vsim_lc_ctrl_regs_reg_top___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__4(Vsim_lc_ctrl_regs_reg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_lc_ctrl_regs_reg_top___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__we 
        = ((IData)(((0x00000030U == (0x000000fcU & 
                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U])) 
                    & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40))) 
           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
              >> 3U));
    vlSelfRef.__PVT__u_transition_cmd__DOT__we = ((IData)(
                                                          ((0x00000014U 
                                                            == 
                                                            (0x000000fcU 
                                                             & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U])) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40))) 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
                                                     >> 3U));
    vlSelfRef.__PVT__u_transition_ctrl_ext_clock_en__DOT__we 
        = ((IData)(((0x00000018U == (0x000000fcU & 
                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U])) 
                    & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40))) 
           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
              >> 3U));
    vlSelfRef.__PVT__u_transition_token_0__DOT__we 
        = ((IData)(((0x0000001cU == (0x000000fcU & 
                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U])) 
                    & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40))) 
           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
              >> 3U));
    vlSelfRef.__PVT__u_transition_token_1__DOT__we 
        = ((IData)(((0x00000020U == (0x000000fcU & 
                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U])) 
                    & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40))) 
           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
              >> 3U));
    vlSelfRef.__PVT__u_transition_token_2__DOT__we 
        = ((IData)(((0x00000024U == (0x000000fcU & 
                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U])) 
                    & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40))) 
           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
              >> 3U));
    vlSelfRef.__PVT__u_transition_token_3__DOT__we 
        = ((IData)(((0x00000028U == (0x000000fcU & 
                                     vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U])) 
                    & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40))) 
           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
              >> 3U));
    vlSelfRef.__PVT__u_transition_target__DOT__we = 
        ((IData)(((0x0000002cU == (0x000000fcU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U])) 
                  & (IData)(vlSelfRef.__VdfgRegularize_hba25b58b_0_40))) 
         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
            >> 3U));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_transition_ctrl_ext_clock_en__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_transition_token_0__DOT__we));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_transition_token_1__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_transition_token_2__DOT__we));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (QData)((IData)((((((((IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__we) 
                                << 3U) | ((IData)(vlSelfRef.__PVT__u_transition_target__DOT__we) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.__PVT__u_transition_token_3__DOT__we) 
                                << 1U) | (IData)(vlSelfRef.__PVT__u_transition_token_2__DOT__we))) 
                             << 9U) | (((IData)(vlSelfRef.__PVT__u_transition_token_1__DOT__we) 
                                        << 8U) | (((IData)(vlSelfRef.__PVT__u_transition_token_0__DOT__we) 
                                                   << 7U) 
                                                  | ((IData)(vlSelfRef.__PVT__u_transition_ctrl_ext_clock_en__DOT__we) 
                                                     << 6U)))) 
                           | (((IData)(vlSelfRef.__PVT__u_transition_cmd__DOT__we) 
                               << 5U) | (((IData)(vlSelfRef.__PVT__u_claim_transition_if__DOT__we) 
                                          << 3U) | 
                                         (((IData)(vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__we) 
                                           << 2U) | (IData)(vlSelfRef.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we)))))));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_transition_token_3__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_transition_target__DOT__we));
    vlSelfRef.reg2hw[0U] = (IData)((((QData)((IData)(
                                                     ((0x7ffffffeU 
                                                       & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                          << 1U)) 
                                                      | (IData)(vlSelfRef.__PVT__u_transition_target__DOT__we)))) 
                                     << 0x00000021U) 
                                    | (((QData)((IData)(
                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])) 
                                        << 1U) | (QData)((IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__we)))));
    vlSelfRef.reg2hw[1U] = (IData)(((((QData)((IData)(
                                                      ((0x7ffffffeU 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                           << 1U)) 
                                                       | (IData)(vlSelfRef.__PVT__u_transition_target__DOT__we)))) 
                                      << 0x00000021U) 
                                     | (((QData)((IData)(
                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])) 
                                         << 1U) | (QData)((IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__we)))) 
                                    >> 0x00000020U));
    vlSelfRef.reg2hw[2U] = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_transition_token_1__DOT__we)) 
                                     << 0x00000021U) 
                                    | (((QData)((IData)(
                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])) 
                                        << 1U) | (QData)((IData)(vlSelfRef.__PVT__u_transition_token_0__DOT__we)))));
    vlSelfRef.reg2hw[3U] = ((0xfffffffcU & vlSelfRef.reg2hw[3U]) 
                            | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_transition_token_1__DOT__we)) 
                                         << 0x00000021U) 
                                        | (((QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.__PVT__u_transition_token_0__DOT__we)))) 
                                       >> 0x00000020U)));
    vlSelfRef.reg2hw[3U] = ((3U & vlSelfRef.reg2hw[3U]) 
                            | ((IData)((((QData)((IData)(vlSelfRef.__PVT__u_transition_token_2__DOT__we)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])))) 
                               << 2U));
    vlSelfRef.reg2hw[4U] = (((IData)((((QData)((IData)(vlSelfRef.__PVT__u_transition_token_2__DOT__we)) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])))) 
                             >> 0x0000001eU) | ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                 << 3U) 
                                                | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.__PVT__u_transition_token_2__DOT__we)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U]))) 
                                                            >> 0x00000020U)) 
                                                   << 2U)));
    vlSelfRef.reg2hw[5U] = ((0xfffffff8U & vlSelfRef.reg2hw[5U]) 
                            | (((3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                       >> 0x0000001dU)) 
                                | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__u_transition_token_2__DOT__we)) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U]))) 
                                            >> 0x00000020U)) 
                                   >> 0x0000001eU)) 
                               | (4U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                        >> 0x0000001dU))));
    vlSelfRef.reg2hw[5U] = ((7U & vlSelfRef.reg2hw[5U]) 
                            | ((IData)((((QData)((IData)(
                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])) 
                                         << 1U) | (QData)((IData)(vlSelfRef.__PVT__u_transition_token_3__DOT__we)))) 
                               << 3U));
    vlSelfRef.reg2hw[6U] = ((0x01fffff0U & vlSelfRef.reg2hw[6U]) 
                            | (0x01ffffffU & (((IData)(
                                                       (((QData)((IData)(
                                                                         vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])) 
                                                         << 1U) 
                                                        | (QData)((IData)(vlSelfRef.__PVT__u_transition_token_3__DOT__we)))) 
                                               >> 0x0000001dU) 
                                              | ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])) 
                                                            << 1U) 
                                                           | (QData)((IData)(vlSelfRef.__PVT__u_transition_token_3__DOT__we))) 
                                                          >> 0x00000020U)) 
                                                 << 3U))));
    vlSelfRef.reg2hw[6U] = ((0x0000000fU & vlSelfRef.reg2hw[6U]) 
                            | (0x01ffffffU & ((((((4U 
                                                   & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U]) 
                                                  | (((7U 
                                                       == 
                                                       (7U 
                                                        & (- (IData)((IData)(vlSelfRef.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we))))) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                           >> 1U)))) 
                                                 << 0x00000012U) 
                                                | (((7U 
                                                     == 
                                                     (7U 
                                                      & (- (IData)((IData)(vlSelfRef.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we))))) 
                                                    << 0x00000011U) 
                                                   | (((2U 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                           << 1U)) 
                                                       | (7U 
                                                          == 
                                                          (7U 
                                                           & (- (IData)((IData)(vlSelfRef.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we)))))) 
                                                      << 0x0000000fU))) 
                                               | ((0x00007f80U 
                                                   & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                      << 7U)) 
                                                  | ((((((IData)(vlSelfRef.__PVT__u_claim_transition_if__DOT__we) 
                                                         << 3U) 
                                                        | (4U 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                              << 2U))) 
                                                       | (((IData)(vlSelfRef.__PVT__u_transition_cmd__DOT__we) 
                                                           << 1U) 
                                                          | (1U 
                                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                                >> 1U)))) 
                                                      << 3U) 
                                                     | (((3U 
                                                          == 
                                                          (3U 
                                                           & (- (IData)((IData)(vlSelfRef.__PVT__u_transition_ctrl_ext_clock_en__DOT__we))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
                                                               << 1U)) 
                                                           | (3U 
                                                              == 
                                                              (3U 
                                                               & (- (IData)((IData)(vlSelfRef.__PVT__u_transition_ctrl_ext_clock_en__DOT__we)))))))))) 
                                              << 4U)));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_transition_cmd__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
           | (IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__we));
    vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o 
        = ((((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
             & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
            | ((((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
                 & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__)) 
                | ((((IData)(vlSelfRef.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we) 
                     & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__)) 
                    | ((IData)(vlSelfRef.__PVT__u_claim_transition_if_regwen__DOT__we) 
                       & (IData)(vlSelfRef.__PVT__u_claim_transition_if__DOT__we))) 
                   | (((IData)(vlSelfRef.__PVT__u_transition_cmd__DOT__we) 
                       & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__)) 
                      | ((IData)(vlSelfRef.__PVT__u_transition_ctrl_ext_clock_en__DOT__we) 
                         & (IData)(vlSelfRef.__PVT__u_transition_token_0__DOT__we))))) 
               | (((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
                   & (IData)(vlSelfRef.__PVT__u_otp_vendor_test_ctrl__DOT__we)) 
                  | (((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__) 
                      & (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__)) 
                     | (((IData)(vlSelfRef.__PVT__u_transition_token_1__DOT__we) 
                         & (IData)(vlSelfRef.__PVT__u_transition_token_2__DOT__we)) 
                        | ((IData)(vlSelfRef.__PVT__u_transition_token_3__DOT__we) 
                           & (IData)(vlSelfRef.__PVT__u_transition_target__DOT__we))))))) 
           | ((~ ((~ (IData)(vlSelfRef.__PVT__addrmiss)) 
                  & (IData)(vlSelfRef.__PVT__u_reg_if__DOT__we_o))) 
              & ((IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
                 | (IData)(vlSelfRef.__PVT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__))));
}
