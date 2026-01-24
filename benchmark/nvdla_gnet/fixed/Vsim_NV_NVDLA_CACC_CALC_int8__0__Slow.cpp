// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_64__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_64__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4672 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000aU])));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4672 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4672))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4672 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4672 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4672)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_65__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_65__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4673 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000aU] 
                                                                        >> 5U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4673 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4673))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4673 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4673 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4673)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_66__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_66__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4674 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000aU] 
                                                                        >> 0x0000000aU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4674 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4674))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4674 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4674 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4674)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_67__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_67__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4675 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000aU] 
                                                                        >> 0x0000000fU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4675 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4675))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4675 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4675 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4675)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_68__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_68__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4676 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000aU] 
                                                                        >> 0x00000014U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4676 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4676))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4676 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4676 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4676)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_69__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_69__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4677 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000aU] 
                                                                        >> 0x00000019U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4677 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4677))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4677 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4677 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4677)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_70__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_70__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4678 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000bU] 
                                                                         << 2U) 
                                                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000aU] 
                                                                           >> 0x0000001eU)))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4678 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4678))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4678 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4678 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4678)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_71__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_71__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4679 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000bU] 
                                                                        >> 3U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4679 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4679))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4679 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4679 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4679)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_72__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_72__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4680 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000bU] 
                                                                        >> 8U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4680 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4680))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4680 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4680 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4680)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_73__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_73__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4681 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000bU] 
                                                                        >> 0x0000000dU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4681 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4681))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4681 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4681 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4681)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_74__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_74__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4682 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000bU] 
                                                                        >> 0x00000012U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4682 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4682))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4682 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4682 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4682)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_75__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_75__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4683 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000bU] 
                                                                        >> 0x00000017U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4683 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4683))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4683 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4683 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4683)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_76__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_76__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4684 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000cU] 
                                                                         << 4U) 
                                                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000bU] 
                                                                           >> 0x0000001cU)))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4684 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4684))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4684 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4684 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4684)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_77__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_77__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4685 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000cU] 
                                                                        >> 1U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4685 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4685))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4685 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4685 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4685)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_78__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_78__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4686 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000cU] 
                                                                        >> 6U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4686 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4686))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4686 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4686 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4686)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_79__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_79__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4687 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000cU] 
                                                                        >> 0x0000000bU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4687 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4687))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4687 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4687 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4687)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_80__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_80__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4688 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000cU] 
                                                                        >> 0x00000010U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4688 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4688))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4688 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4688 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4688)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_81__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_81__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4689 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000cU] 
                                                                        >> 0x00000015U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4689 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4689))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4689 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4689 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4689)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_82__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_82__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4690 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000cU] 
                                                                        >> 0x0000001aU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4690 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4690))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4690 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4690 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4690)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_83__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_83__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4691 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000dU] 
                                                                         << 1U) 
                                                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000cU] 
                                                                           >> 0x0000001fU)))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4691 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4691))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4691 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4691 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4691)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_84__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_84__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4692 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000dU] 
                                                                        >> 4U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4692 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4692))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4692 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4692 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4692)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_85__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_85__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4693 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000dU] 
                                                                        >> 9U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4693 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4693))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4693 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4693 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4693)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_86__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_86__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4694 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000dU] 
                                                                        >> 0x0000000eU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4694 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4694))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4694 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4694 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4694)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_87__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_87__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4695 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000dU] 
                                                                        >> 0x00000013U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4695 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4695))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4695 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4695 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4695)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_88__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_88__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4696 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000dU] 
                                                                        >> 0x00000018U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4696 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4696))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4696 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4696 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4696)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_89__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_89__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4697 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000eU] 
                                                                         << 3U) 
                                                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000dU] 
                                                                           >> 0x0000001dU)))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4697 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4697))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4697 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4697 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4697)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_90__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_90__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4698 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000eU] 
                                                                        >> 2U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4698 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4698))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4698 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4698 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4698)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_91__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_91__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4699 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000eU] 
                                                                        >> 7U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4699 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4699))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4699 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4699 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4699)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_92__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_92__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4700 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000eU] 
                                                                        >> 0x0000000cU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4700 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4700))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4700 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4700 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4700)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_93__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_93__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4701 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000eU] 
                                                                        >> 0x00000011U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4701 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4701))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4701 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4701 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4701)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_94__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_94__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4702 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000eU] 
                                                                        >> 0x00000016U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4702 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4702))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4702 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4702 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4702)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_95__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_95__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4703 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000eU] 
                                                                     >> 0x0000001bU)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4703 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4703))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4703 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4703 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4703)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_96__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_96__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4704 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000fU])));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4704 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4704))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4704 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4704 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4704)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_97__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_97__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4705 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000fU] 
                                                                        >> 5U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4705 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4705))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4705 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4705 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4705)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_98__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_98__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4706 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000fU] 
                                                                        >> 0x0000000aU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4706 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4706))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4706 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4706 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4706)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_99__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_99__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4707 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000fU] 
                                                                        >> 0x0000000fU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4707 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4707))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4707 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4707 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4707)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_100__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_100__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4708 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000fU] 
                                                                        >> 0x00000014U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4708 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4708))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4708 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4708 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4708)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_101__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_101__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4709 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000fU] 
                                                                        >> 0x00000019U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4709 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4709))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4709 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4709 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4709)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_102__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_102__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4710 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000010U] 
                                                                         << 2U) 
                                                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000fU] 
                                                                           >> 0x0000001eU)))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4710 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4710))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4710 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4710 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4710)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_103__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_103__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4711 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000010U] 
                                                                        >> 3U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4711 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4711))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4711 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4711 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4711)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_104__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_104__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4712 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000010U] 
                                                                        >> 8U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4712 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4712))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4712 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4712 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4712)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_105__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_105__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4713 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000010U] 
                                                                        >> 0x0000000dU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4713 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4713))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4713 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4713 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4713)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_106__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_106__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4714 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000010U] 
                                                                        >> 0x00000012U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4714 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4714))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4714 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4714 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4714)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_107__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_107__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4715 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000010U] 
                                                                        >> 0x00000017U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4715 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4715))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4715 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4715 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4715)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_108__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_108__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4716 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000011U] 
                                                                         << 4U) 
                                                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000010U] 
                                                                           >> 0x0000001cU)))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4716 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4716))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4716 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4716 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4716)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_109__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_109__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4717 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000011U] 
                                                                        >> 1U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4717 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4717))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4717 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4717 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4717)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_110__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_110__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4718 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000011U] 
                                                                        >> 6U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4718 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4718))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4718 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4718 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4718)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_111__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_111__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4719 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000011U] 
                                                                        >> 0x0000000bU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4719 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4719))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4719 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4719 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4719)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_112__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_112__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4720 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000011U] 
                                                                        >> 0x00000010U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4720 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4720))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4720 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4720 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4720)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_113__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_113__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4721 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000011U] 
                                                                        >> 0x00000015U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4721 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4721))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4721 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4721 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4721)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_114__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_114__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4722 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000011U] 
                                                                        >> 0x0000001aU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4722 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4722))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4722 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4722 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4722)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_115__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_115__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4723 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000012U] 
                                                                         << 1U) 
                                                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000011U] 
                                                                           >> 0x0000001fU)))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4723 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4723))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4723 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4723 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4723)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_116__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_116__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4724 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000012U] 
                                                                        >> 4U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4724 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4724))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4724 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4724 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4724)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_117__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_117__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4725 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000012U] 
                                                                        >> 9U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4725 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4725))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4725 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4725 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4725)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_118__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_118__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4726 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000012U] 
                                                                        >> 0x0000000eU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4726 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4726))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4726 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4726 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4726)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_119__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_119__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4727 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000012U] 
                                                                        >> 0x00000013U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4727 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4727))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4727 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4727 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4727)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_120__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_120__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4728 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000012U] 
                                                                        >> 0x00000018U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4728 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4728))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4728 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4728 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4728)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_121__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_121__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4729 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000013U] 
                                                                         << 3U) 
                                                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000012U] 
                                                                           >> 0x0000001dU)))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4729 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4729))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4729 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4729 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4729)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_122__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_122__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4730 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000013U] 
                                                                        >> 2U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4730 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4730))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4730 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4730 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4730)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_123__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_123__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4731 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000013U] 
                                                                        >> 7U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4731 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4731))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4731 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4731 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4731)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_124__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_124__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4732 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000013U] 
                                                                        >> 0x0000000cU))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4732 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4732))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4732 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4732 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4732)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_125__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_125__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4733 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000013U] 
                                                                        >> 0x00000011U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4733 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4733))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4733 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4733 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4733)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_126__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_126__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4734 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (0x0000001fU 
                                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000013U] 
                                                                        >> 0x00000016U))));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4734 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4734))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4734 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4734 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4734)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_127__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_127__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_partial_result = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__i_sum_pd 
                                                                      >> 0x00000022U))))) 
                                          << 0x00000021U) 
                                         | (0x00000001ffffffffULL 
                                            & ((1U 
                                                & VL_REDXOR_64(
                                                               (0x0000000600000000ULL 
                                                                & vlSelfRef.__PVT__i_sum_pd)))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (vlSelfRef.__PVT__i_sum_pd 
                                                                                >> 0x00000022U)))))))
                                                : vlSelfRef.__PVT__i_sum_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4735 = (0x0003ffffffffffffULL 
                                                   & VL_SHIFTRS_QQI(50,50,5, 
                                                                    (((IData)(vlSelfRef.__PVT__i_sat_sel)
                                                                       ? vlSelfRef.__PVT__i_partial_result
                                                                       : 0ULL) 
                                                                     << 0x00000010U), 
                                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000013U] 
                                                                     >> 0x0000001bU)));
    vlSelfRef.__PVT__i_point5 = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                 & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4735 
                                             >> 0x0000000fU)) 
                                    & ((~ (IData)((vlSelfRef.__PVT__i_sum_pd 
                                                   >> 0x00000022U))) 
                                       | (0U != (0x00007fffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4735))))));
    vlSelfRef.__PVT__i_sft_need_sat = (1U & (((~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4735 
                                                              >> 0x0000002fU))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__i_sum_pd 
                                                         >> 0x00000022U))) 
                                             | ((~ (IData)(
                                                           (vlSelfRef.__PVT__i_sum_pd 
                                                            >> 0x00000022U))) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4735 
                                                                >> 0x0000002fU)))) 
                                                   | (IData)(
                                                             ((0x00007fffffff0000ULL 
                                                               == 
                                                               (0x00007fffffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4735)) 
                                                              & (IData)(vlSelfRef.__PVT__i_point5)))))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_int8___ctor_var_reset(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->cfg_truncate = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18252016311599703412ull);
    vlSelf->in_data = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4057622023130387117ull);
    vlSelf->in_op = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 4275446026273260408ull);
    vlSelf->in_op_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10085951251531906012ull);
    vlSelf->in_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9133282104181324436ull);
    vlSelf->in_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2339549897027650563ull);
    vlSelf->out_final_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11439107436005456110ull);
    vlSelf->out_final_sat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12576298713112696262ull);
    vlSelf->out_final_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2096472593634662357ull);
    vlSelf->out_partial_data = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 13774363188188375297ull);
    vlSelf->out_partial_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2747282718597033443ull);
    vlSelf->__PVT__i_sat_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7488510734302961455ull);
    vlSelf->__PVT__i_sat_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11169572657244939749ull);
    vlSelf->__PVT__i_sum_pd = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 17736996948747996495ull);
    vlSelf->__PVT__i_final_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11271503020192762952ull);
    vlSelf->__PVT__i_partial_result = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11434547049317601996ull);
    vlSelf->__PVT__i_partial_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10947229197871246801ull);
    vlSelf->__PVT__i_point5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6965812256477773704ull);
    vlSelf->__PVT__i_sft_need_sat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1753700116209874841ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4672 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 3095139963120347053ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4673 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 12793685297956799939ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4674 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 2921255965669973303ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4675 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 872231993707164864ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4676 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 9286724000980018344ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4677 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 2771807338878236499ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4678 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 6847999715300028253ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4679 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 14828583890629927544ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4680 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 16216851495234857189ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4681 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 12589104275831936279ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4682 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 12359121233165727786ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4683 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 6568488406886369633ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4684 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 483468082955622775ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4685 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 10436528660324394243ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4686 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 15867515512341955118ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4687 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 10239515198290468929ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4688 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 9514583959526787996ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4689 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 16255704592882205084ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4690 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 13560902433599711989ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4691 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 2369327873507327160ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4692 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 6330048692554265493ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4693 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 7774656026146888557ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4694 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 2799473920685556649ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4695 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 12636514814381872338ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4696 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 6012832007686889317ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4697 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 6822564483064576367ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4698 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 17179511834633629964ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4699 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 6689533134260136103ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4700 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 8240441246174634166ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4701 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 9927513210189894716ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4702 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 13996894123371713252ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4703 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 4392453683587431796ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4704 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 14797454207085185650ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4705 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 17963203076939110828ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4706 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 17669352605392884288ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4707 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 18101588258962591163ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4708 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 3757250161165074946ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4709 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 7314596584295265112ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4710 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 4348687095023248566ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4711 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 8686825193318320229ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4712 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 4588178554734914150ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4713 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 8160473544503869317ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4714 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 143185099034720889ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4715 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 9292341823302417622ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4716 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 8080264053818314584ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4717 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 3695862112618529035ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4718 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 2746268970054449306ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4719 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 12034451505472576780ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4720 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 3427561719116838479ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4721 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 13157347114037422203ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4722 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 14108084630120767766ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4723 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 12372416281616744325ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4724 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 17800655611468673746ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4725 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 2228427347312453885ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4726 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 7027145652168442794ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4727 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 3129510421762022736ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4728 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 1362160524693955528ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4729 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 15807053034863419082ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4730 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 11048135856517441460ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4731 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 7652534054917621345ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4732 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 333254177227766198ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4733 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 10031269259773609026ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4734 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 14532128634107283271ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4735 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 10311171879651329017ull);
}
