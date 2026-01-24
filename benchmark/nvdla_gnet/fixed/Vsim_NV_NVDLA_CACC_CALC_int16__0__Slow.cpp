// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_0__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.nvdla_core_clk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_slcg_cell_0__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_0_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_0_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_0_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_0_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4608 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0U]));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4608 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4608))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4608 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4608 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4608)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_1__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_1_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_1_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_1_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_1_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4609 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0U] 
                                                                     >> 5U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4609 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4609))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4609 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4609 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4609)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_2__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_2_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_2_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_2_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_2_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4610 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0U] 
                                                                     >> 0x0000000aU)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4610 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4610))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4610 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4610 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4610)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_3__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_3_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_3_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_3_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_3_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4611 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0U] 
                                                                     >> 0x0000000fU)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4611 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4611))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4611 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4611 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4611)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_4__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_4_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_4_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_4_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_4_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4612 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0U] 
                                                                     >> 0x00000014U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4612 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4612))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4612 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4612 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4612)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_5__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_5_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_5_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_5_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_5_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4613 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0U] 
                                                                     >> 0x00000019U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4613 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4613))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4613 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4613 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4613)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_6__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_6_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_6_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_6_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_6_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4614 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[1U] 
                                                                      << 2U) 
                                                                     | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0U] 
                                                                        >> 0x0000001eU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4614 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4614))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4614 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4614 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4614)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_7__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_7_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_7_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_7_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_7_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4615 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[1U] 
                                                                     >> 3U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4615 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4615))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4615 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4615 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4615)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_8__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_8__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_8_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_8_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_8_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_8_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4616 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[1U] 
                                                                     >> 8U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4616 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4616))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4616 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4616 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4616)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_9__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_9__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_9_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_9_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_9_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_9_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4617 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[1U] 
                                                                     >> 0x0000000dU)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4617 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4617))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4617 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4617 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4617)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_10__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_10__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_10_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_10_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_10_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_10_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4618 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[1U] 
                                                                     >> 0x00000012U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4618 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4618))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4618 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4618 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4618)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_11__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_11__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_11_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_11_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_11_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_11_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4619 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[1U] 
                                                                     >> 0x00000017U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4619 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4619))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4619 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4619 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4619)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_12__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_12__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_12_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_12_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_12_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_12_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4620 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[2U] 
                                                                      << 4U) 
                                                                     | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[1U] 
                                                                        >> 0x0000001cU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4620 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4620))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4620 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4620 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4620)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_13__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_13__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_13_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_13_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_13_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_13_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4621 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[2U] 
                                                                     >> 1U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4621 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4621))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4621 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4621 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4621)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_14__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_14__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_14_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_14_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_14_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_14_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4622 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[2U] 
                                                                     >> 6U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4622 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4622))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4622 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4622 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4622)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_15__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_15__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_15_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_15_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_15_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_15_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4623 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[2U] 
                                                                     >> 0x0000000bU)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4623 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4623))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4623 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4623 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4623)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_16__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_16__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.nvdla_core_clk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_slcg_cell_1__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_16_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_16_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_16_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_16_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4624 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[2U] 
                                                                     >> 0x00000010U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4624 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4624))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4624 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4624 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4624)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_17__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_17__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_17_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_17_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_17_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_17_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4625 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[2U] 
                                                                     >> 0x00000015U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4625 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4625))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4625 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4625 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4625)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_18__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_18__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_18_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_18_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_18_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_18_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4626 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[2U] 
                                                                     >> 0x0000001aU)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4626 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4626))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4626 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4626 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4626)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_19__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_19__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_19_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_19_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_19_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_19_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4627 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[3U] 
                                                                      << 1U) 
                                                                     | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[2U] 
                                                                        >> 0x0000001fU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4627 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4627))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4627 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4627 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4627)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_20__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_20__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_20_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_20_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_20_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_20_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4628 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[3U] 
                                                                     >> 4U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4628 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4628))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4628 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4628 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4628)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_21__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_21__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_21_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_21_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_21_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_21_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4629 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[3U] 
                                                                     >> 9U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4629 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4629))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4629 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4629 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4629)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_22__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_22__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_22_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_22_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_22_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_22_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4630 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[3U] 
                                                                     >> 0x0000000eU)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4630 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4630))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4630 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4630 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4630)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_23__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_23__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_23_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_23_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_23_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_23_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4631 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[3U] 
                                                                     >> 0x00000013U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4631 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4631))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4631 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4631 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4631)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_24__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_24__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_24_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_24_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_24_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_24_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4632 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[3U] 
                                                                     >> 0x00000018U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4632 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4632))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4632 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4632 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4632)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_25__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_25__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_25_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_25_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_25_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_25_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4633 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[4U] 
                                                                      << 3U) 
                                                                     | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[3U] 
                                                                        >> 0x0000001dU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4633 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4633))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4633 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4633 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4633)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_26__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_26__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_26_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_26_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_26_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_26_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4634 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[4U] 
                                                                     >> 2U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4634 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4634))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4634 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4634 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4634)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_27__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_27__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_27_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_27_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_27_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_27_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4635 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[4U] 
                                                                     >> 7U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4635 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4635))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4635 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4635 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4635)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_28__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_28__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_28_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_28_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_28_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_28_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4636 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[4U] 
                                                                     >> 0x0000000cU)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4636 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4636))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4636 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4636 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4636)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_29__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_29__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_29_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_29_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_29_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_29_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4637 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[4U] 
                                                                     >> 0x00000011U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4637 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4637))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4637 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4637 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4637)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_30__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_30__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_30_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_30_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_30_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_30_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4638 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[4U] 
                                                                     >> 0x00000016U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4638 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4638))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4638 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4638 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4638)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_31__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_31__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U] 
                                    >> 0x0000001fU)
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_31_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_31_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_31_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_31_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4639 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[4U] 
                                                                  >> 0x0000001bU));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4639 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4639))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4639 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4639 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4639)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_32__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_32__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_32_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_32_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_32_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_32_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4640 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[5U]));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4640 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4640))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4640 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4640 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4640)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_33__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_33__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_33_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_33_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_33_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_33_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4641 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[5U] 
                                                                     >> 5U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4641 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4641))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4641 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4641 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4641)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_34__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_34__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_34_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_34_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_34_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_34_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4642 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[5U] 
                                                                     >> 0x0000000aU)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4642 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4642))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4642 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4642 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4642)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_35__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_35__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_35_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_35_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_35_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_35_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4643 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[5U] 
                                                                     >> 0x0000000fU)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4643 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4643))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4643 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4643 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4643)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_36__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_36__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_36_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_36_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_36_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_36_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4644 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[5U] 
                                                                     >> 0x00000014U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4644 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4644))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4644 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4644 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4644)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_37__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_37__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_37_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_37_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_37_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_37_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4645 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[5U] 
                                                                     >> 0x00000019U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4645 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4645))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4645 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4645 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4645)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_38__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_38__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_38_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_38_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_38_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_38_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4646 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[6U] 
                                                                      << 2U) 
                                                                     | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[5U] 
                                                                        >> 0x0000001eU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4646 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4646))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4646 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4646 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4646)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_39__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_39__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_39_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_39_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_39_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_39_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4647 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[6U] 
                                                                     >> 3U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4647 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4647))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4647 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4647 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4647)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_40__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_40__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_40_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_40_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_40_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_40_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4648 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[6U] 
                                                                     >> 8U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4648 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4648))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4648 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4648 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4648)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_41__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_41__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_41_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_41_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_41_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_41_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4649 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[6U] 
                                                                     >> 0x0000000dU)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4649 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4649))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4649 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4649 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4649)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_42__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_42__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_42_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_42_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_42_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_42_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4650 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[6U] 
                                                                     >> 0x00000012U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4650 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4650))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4650 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4650 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4650)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_43__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_43__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_43_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_43_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_43_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_43_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4651 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[6U] 
                                                                     >> 0x00000017U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4651 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4651))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4651 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4651 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4651)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_44__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_44__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_44_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_44_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_44_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_44_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4652 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[7U] 
                                                                      << 4U) 
                                                                     | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[6U] 
                                                                        >> 0x0000001cU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4652 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4652))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4652 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4652 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4652)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_45__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_45__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_45_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_45_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_45_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_45_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4653 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[7U] 
                                                                     >> 1U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4653 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4653))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4653 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4653 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4653)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_46__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_46__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_46_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_46_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_46_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_46_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4654 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[7U] 
                                                                     >> 6U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4654 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4654))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4654 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4654 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4654)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_47__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_47__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_47_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_47_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_47_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_47_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4655 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[7U] 
                                                                     >> 0x0000000bU)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4655 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4655))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4655 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4655 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4655)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_48__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_48__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_48_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_48_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_48_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_48_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4656 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[7U] 
                                                                     >> 0x00000010U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4656 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4656))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4656 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4656 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4656)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_49__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_49__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_49_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_49_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_49_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_49_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4657 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[7U] 
                                                                     >> 0x00000015U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4657 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4657))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4657 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4657 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4657)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_50__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_50__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_50_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_50_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_50_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_50_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4658 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[7U] 
                                                                     >> 0x0000001aU)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4658 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4658))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4658 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4658 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4658)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_51__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_51__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_51_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_51_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_51_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_51_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4659 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[8U] 
                                                                      << 1U) 
                                                                     | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[7U] 
                                                                        >> 0x0000001fU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4659 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4659))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4659 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4659 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4659)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_52__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_52__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_52_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_52_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_52_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_52_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4660 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[8U] 
                                                                     >> 4U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4660 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4660))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4660 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4660 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4660)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_53__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_53__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_53_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_53_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_53_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_53_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4661 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[8U] 
                                                                     >> 9U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4661 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4661))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4661 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4661 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4661)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_54__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_54__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_54_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_54_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_54_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_54_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4662 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[8U] 
                                                                     >> 0x0000000eU)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4662 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4662))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4662 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4662 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4662)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_55__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_55__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_55_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_55_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_55_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_55_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4663 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[8U] 
                                                                     >> 0x00000013U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4663 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4663))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4663 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4663 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4663)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_56__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_56__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_56_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_56_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_56_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_56_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4664 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[8U] 
                                                                     >> 0x00000018U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4664 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4664))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4664 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4664 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4664)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_57__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_57__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_57_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_57_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_57_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_57_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4665 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[9U] 
                                                                      << 3U) 
                                                                     | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[8U] 
                                                                        >> 0x0000001dU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4665 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4665))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4665 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4665 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4665)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_58__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_58__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_58_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_58_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_58_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_58_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4666 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[9U] 
                                                                     >> 2U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4666 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4666))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4666 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4666 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4666)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_59__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_59__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_59_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_59_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_59_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_59_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4667 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[9U] 
                                                                     >> 7U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4667 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4667))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4667 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4667 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4667)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_60__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_60__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_60_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_60_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_60_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_60_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4668 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[9U] 
                                                                     >> 0x0000000cU)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4668 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4668))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4668 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4668 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4668)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_61__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_61__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_61_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_61_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_61_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_61_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4669 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[9U] 
                                                                     >> 0x00000011U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4669 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4669))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4669 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4669 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4669)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_62__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_62__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_62_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_62_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_62_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_62_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4670 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (0x0000001fU 
                                                                  & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[9U] 
                                                                     >> 0x00000016U)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4670 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4670))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4670 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4670 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4670)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_63__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_63__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__in_mask_op = ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U] 
                                    >> 0x0000001fU)
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_63_d1
                                    : 0ULL);
    vlSelfRef.__PVT__i_partial_result = ((IData)(vlSelfRef.__PVT__in_hsb_same_d)
                                          ? (((QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (((IData)(vlSelfRef.__PVT__di_sign_d) 
                                                                   ^ (IData)(vlSelfRef.__PVT__oi_sign_d))
                                                                   ? 
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U))))))
                                                                   : 
                                                                  ((0x0000fffeU 
                                                                    & ((- (IData)((IData)(vlSelfRef.__PVT__oi_sign_d))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__i_lsum_pd 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd)))
                                          : ((1U & 
                                              VL_REDXOR_32(
                                                           (0x00018000U 
                                                            & vlSelfRef.__PVT__i_hsum_pd)))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (0x00007fffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelfRef.__PVT__i_hsum_pd 
                                                                              >> 0x00000010U))))))))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__i_hsum_pd 
                                                                      >> 0x00000010U)))) 
                                                  << 0x0000002fU) 
                                                 | (((QData)((IData)(
                                                                     (0x00007fffU 
                                                                      & vlSelfRef.__PVT__i_hsum_pd))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__i_lsum_pd))))));
    vlSelfRef.__PVT__in_hsb_same = (((0U == (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_63_d1 
                                                        >> 0x00000020U)))) 
                                     | (0x3fU == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_63_d1 
                                                             >> 0x00000020U))))) 
                                    & ((0U == (0x0000ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000020U)))) 
                                       | (0xffffU == 
                                          (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__in_mask_op 
                                                      >> 0x00000020U))))));
    vlSelfRef.__PVT__i_lsum_pd_nxt = (0x00000001ffffffffULL 
                                      & ((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_63_d1)) 
                                         + (QData)((IData)(vlSelfRef.__PVT__in_mask_op))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4671 = VL_SHIFTRS_QQI(64,64,5, 
                                                                 (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                    ? vlSelfRef.__PVT__i_partial_result
                                                                    : 0ULL) 
                                                                  << 0x00000010U), 
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[9U] 
                                                                  >> 0x0000001bU));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4671 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_partial_result 
                                                   >> 0x0000002fU))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4671))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (0x0000ffffU 
                                                  == 
                                                  (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4671 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_partial_result 
                                                         >> 0x0000002fU))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_partial_result 
                                                            >> 0x0000002fU))) 
                                                & ((0U 
                                                    != 
                                                    (0x0000ffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4671 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4671)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int16___ctor_var_reset(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->cfg_truncate = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18252016311599703412ull);
    vlSelf->in_data = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 4057622023130387117ull);
    vlSelf->in_op = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 4275446026273260408ull);
    vlSelf->in_op_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10085951251531906012ull);
    vlSelf->in_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9133282104181324436ull);
    vlSelf->in_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2339549897027650563ull);
    vlSelf->out_final_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11439107436005456110ull);
    vlSelf->out_final_sat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12576298713112696262ull);
    vlSelf->out_final_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2096472593634662357ull);
    vlSelf->out_partial_data = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 13774363188188375297ull);
    vlSelf->out_partial_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2747282718597033443ull);
    vlSelf->__PVT__di_sign_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7131288475708931368ull);
    vlSelf->__PVT__i_hsum_pd = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 18316809409648283634ull);
    vlSelf->__PVT__i_lsum_pd = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 14376715017199213961ull);
    vlSelf->__PVT__i_sat_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7488510734302961455ull);
    vlSelf->__PVT__i_sat_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11169572657244939749ull);
    vlSelf->__PVT__in_hsb_same_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8696668149954698863ull);
    vlSelf->__PVT__oi_sign_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14309066568319552368ull);
    vlSelf->__PVT__i_final_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11271503020192762952ull);
    vlSelf->__PVT__i_lsum_pd_nxt = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 8795133855493835856ull);
    vlSelf->__PVT__i_partial_result = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 11434547049317601996ull);
    vlSelf->__PVT__i_partial_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10947229197871246801ull);
    vlSelf->__PVT__i_point5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6965812256477773704ull);
    vlSelf->__PVT__i_sft_need_sat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1753700116209874841ull);
    vlSelf->__PVT__in_hsb_same = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9110340054427234151ull);
    vlSelf->__PVT__in_mask_op = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 16619662931089290180ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4608 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9267673610979275525ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4609 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3145767750269393681ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4610 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1709008376704621049ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4611 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9175543671772909017ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4612 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6090055448324472610ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4613 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10446393379816584644ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4614 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8064567853598708229ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4615 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1795402249132227973ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4616 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1271253030981790887ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4617 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6127362739499782684ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4618 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 141363981738454909ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4619 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9010419532841245421ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4620 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1153774224472069831ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4621 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5626591202123589664ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4622 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3786185489446161410ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4623 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11283607532569709593ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4624 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18444588282196560602ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4625 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10125552749538576516ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4626 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17658959478474332963ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4627 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12631837219136985976ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4628 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6499073240760462477ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4629 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 812656747614717938ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4630 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7972829546171960557ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4631 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12138334070993911505ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4632 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8470803360282465786ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4633 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 806185445842863562ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4634 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15021326748346344628ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4635 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5683310952091020466ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4636 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10880208885899528655ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4637 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7306813904516648106ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4638 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14466027525504559598ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4639 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18064049657019076591ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4640 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15340305817074823927ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4641 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8416263231903006677ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4642 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11185511424992320541ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4643 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7434323263826558860ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4644 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11542038691052381390ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4645 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17439498487896849641ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4646 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7980595045135331372ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4647 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12456946280064786292ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4648 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16830308836958329697ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4649 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10562733420869152913ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4650 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12642227182947582491ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4651 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4400019763497069489ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4652 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8724172402032660906ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4653 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13174619554955012594ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4654 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 238711738105518352ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4655 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10991753438613810994ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4656 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5184555349419932206ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4657 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3031208993865278270ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4658 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13953341357812439318ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4659 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14737912104389751981ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4660 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12134885205065656110ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4661 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1828071391701110550ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4662 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1885257468261365031ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4663 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 201255504164495617ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4664 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 812123519931319872ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4665 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2546232514334419189ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4666 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15147187501984743069ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4667 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11768195345204408096ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4668 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11219997350136952869ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4669 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6322147102275445349ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4670 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 365474260615903330ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4671 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11219268926783484479ull);
}
