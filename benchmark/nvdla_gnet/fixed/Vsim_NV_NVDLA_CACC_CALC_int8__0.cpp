// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_64__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_64__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4672 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_64_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((1U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_64_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_64__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_64__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U]));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U]);
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_64__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_64__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_65__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_65__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4673 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_65_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((2U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_65_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_65__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_65__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 1U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 1U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_65__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_65__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_66__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_66__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4674 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_66_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((4U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_66_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_66__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_66__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 2U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 2U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_66__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_66__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_67__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_67__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4675 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_67_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((8U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_67_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_67__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_67__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 3U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 3U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_67__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_67__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_68__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_68__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4676 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_68_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00000010U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_68_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_68__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_68__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 4U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 4U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_68__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_68__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_69__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_69__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4677 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_69_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00000020U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_69_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_69__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_69__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 5U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 5U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_69__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_69__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_70__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_70__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4678 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_70_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00000040U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_70_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_70__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_70__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 6U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 6U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_70__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_70__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_71__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_71__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4679 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_71_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00000080U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_71_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_71__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_71__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 7U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 7U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_71__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_71__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_72__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_72__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4680 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_72_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00000100U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_72_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_72__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_72__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 8U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 8U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_72__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_72__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_73__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_73__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4681 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_73_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00000200U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_73_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_73__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_73__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 9U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 9U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_73__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_73__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_74__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_74__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4682 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_74_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00000400U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_74_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_74__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_74__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 0x0000000aU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 0x0000000aU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_74__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_74__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_75__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_75__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4683 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_75_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00000800U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_75_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_75__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_75__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 0x0000000bU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 0x0000000bU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_75__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_75__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_76__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_76__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4684 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_76_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00001000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_76_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_76__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_76__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 0x0000000cU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 0x0000000cU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_76__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_76__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_77__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_77__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4685 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_77_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00002000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_77_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_77__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_77__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 0x0000000dU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 0x0000000dU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_77__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_77__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_78__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_78__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4686 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_78_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00004000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_78_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_78__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_78__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 0x0000000eU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 0x0000000eU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_78__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_78__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_79__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_79__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4687 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_79_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00008000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_79_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_79__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_79__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 0x0000000fU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 0x0000000fU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_79__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_79__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_80__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_80__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4688 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_80_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00010000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_80_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_80__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_80__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 0x00000010U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 0x00000010U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_80__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_80__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_81__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_81__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4689 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_81_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00020000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_81_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_81__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_81__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 0x00000011U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 0x00000011U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_81__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_81__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_82__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_82__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4690 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_82_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00040000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_82_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_82__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_82__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 0x00000012U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 0x00000012U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_82__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_82__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_83__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_83__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4691 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_83_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00080000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_83_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_83__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_83__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 0x00000013U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 0x00000013U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_83__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_83__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_84__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_84__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4692 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_84_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00100000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_84_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_84__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_84__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 0x00000014U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 0x00000014U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_84__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_84__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_85__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_85__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4693 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_85_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00200000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_85_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_85__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_85__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 0x00000015U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 0x00000015U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_85__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_85__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_86__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_86__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4694 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_86_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00400000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_86_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_86__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_86__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 0x00000016U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 0x00000016U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_86__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_86__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_87__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_87__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4695 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_87_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00800000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_87_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_87__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_87__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 0x00000017U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 0x00000017U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_87__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_87__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_88__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_88__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4696 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_88_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x01000000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_88_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_88__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_88__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 0x00000018U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 0x00000018U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_88__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_88__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_89__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_89__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4697 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_89_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x02000000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_89_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_89__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_89__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 0x00000019U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 0x00000019U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_89__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_89__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_90__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_90__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4698 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_90_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x04000000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_90_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_90__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_90__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 0x0000001aU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 0x0000001aU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_90__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_90__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_91__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_91__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4699 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_91_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x08000000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_91_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_91__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_91__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 0x0000001bU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 0x0000001bU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_91__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_91__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_92__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_92__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4700 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_92_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x10000000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_92_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_92__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_92__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 0x0000001cU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 0x0000001cU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_92__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_92__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_93__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_93__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4701 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_93_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x20000000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_93_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_93__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_93__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 0x0000001dU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 0x0000001dU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_93__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_93__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_94__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_94__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4702 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_94_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x40000000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_94_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_94__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_94__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                            >> 0x0000001eU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                                >> 0x0000001eU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_94__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_94__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_95__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_95__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4703 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
         >> 0x0000001fU)) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_95_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[2U] 
                                                          >> 0x0000001fU)
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_95_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_95__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_95__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
                                      >> 0x0000001fU));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[2U] 
             >> 0x0000001fU)) {
            vlSelfRef.__PVT__i_sat_sel = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[2U] 
                                          >> 0x0000001fU);
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_95__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_95__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_96__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_96__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_96__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_96__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U]));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U]);
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_96__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_96__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4704 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_96_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((1U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_96_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_96__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_96__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_96__3(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_96__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_97__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_97__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 1U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 1U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_97__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_97__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4705 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_97_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((2U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_97_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_97__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_97__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_98__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_98__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 2U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 2U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_98__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_98__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4706 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_98_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((4U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_98_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_98__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_98__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_99__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_99__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 3U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 3U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_99__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_99__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4707 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_99_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((8U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_99_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_99__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_99__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_100__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_100__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 4U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 4U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_100__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_100__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4708 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_100_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00000010U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_100_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_100__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_100__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_101__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_101__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 5U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 5U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_101__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_101__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4709 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_101_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00000020U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_101_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_101__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_101__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_102__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_102__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 6U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 6U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_102__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_102__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4710 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_102_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00000040U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_102_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_102__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_102__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_103__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_103__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 7U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 7U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_103__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_103__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4711 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_103_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00000080U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_103_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_103__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_103__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_104__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_104__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 8U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 8U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_104__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_104__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4712 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_104_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00000100U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_104_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_104__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_104__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_105__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_105__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 9U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 9U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_105__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_105__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4713 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_105_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00000200U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_105_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_105__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_105__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_106__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_106__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 0x0000000aU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 0x0000000aU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_106__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_106__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4714 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_106_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00000400U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_106_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_106__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_106__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_107__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_107__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 0x0000000bU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 0x0000000bU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_107__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_107__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4715 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_107_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00000800U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_107_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_107__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_107__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_108__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_108__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 0x0000000cU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 0x0000000cU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_108__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_108__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4716 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_108_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00001000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_108_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_108__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_108__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_109__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_109__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 0x0000000dU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 0x0000000dU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_109__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_109__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4717 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_109_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00002000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_109_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_109__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_109__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_110__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_110__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 0x0000000eU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 0x0000000eU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_110__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_110__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4718 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_110_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00004000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_110_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_110__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_110__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_111__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_111__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 0x0000000fU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 0x0000000fU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_111__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_111__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4719 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_111_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00008000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_111_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_111__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_111__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_112__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_112__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 0x00000010U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 0x00000010U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_112__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_112__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4720 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_112_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00010000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_112_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_112__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_112__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_113__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_113__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 0x00000011U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 0x00000011U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_113__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_113__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4721 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_113_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00020000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_113_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_113__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_113__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_114__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_114__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 0x00000012U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 0x00000012U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_114__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_114__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4722 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_114_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00040000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_114_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_114__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_114__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_115__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_115__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 0x00000013U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 0x00000013U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_115__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_115__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4723 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_115_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00080000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_115_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_115__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_115__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_116__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_116__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 0x00000014U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 0x00000014U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_116__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_116__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4724 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_116_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00100000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_116_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_116__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_116__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_117__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_117__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 0x00000015U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 0x00000015U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_117__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_117__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4725 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_117_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00200000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_117_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_117__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_117__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_118__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_118__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 0x00000016U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 0x00000016U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_118__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_118__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4726 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_118_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00400000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_118_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_118__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_118__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_119__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_119__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 0x00000017U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 0x00000017U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_119__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_119__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4727 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_119_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x00800000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_119_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_119__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_119__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_120__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_120__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 0x00000018U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 0x00000018U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_120__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_120__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4728 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_120_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x01000000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_120_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_120__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_120__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_121__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_121__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 0x00000019U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 0x00000019U));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_121__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_121__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4729 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_121_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x02000000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_121_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_121__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_121__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_122__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_122__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 0x0000001aU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 0x0000001aU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_122__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_122__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4730 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_122_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x04000000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_122_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_122__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_122__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_123__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_123__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 0x0000001bU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 0x0000001bU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_123__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_123__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4731 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_123_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x08000000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_123_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_123__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_123__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_124__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_124__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 0x0000001cU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 0x0000001cU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_124__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_124__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4732 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_124_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x10000000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_124_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_124__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_124__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_125__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_125__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 0x0000001dU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 0x0000001dU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_125__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_125__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4733 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_125_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x20000000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_125_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_125__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_125__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_126__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_126__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                            >> 0x0000001eU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                                >> 0x0000001eU));
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_126__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_126__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4734 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U])) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_126_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((0x40000000U 
                                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U])
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_126_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_126__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_126__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_127__1(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_127__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
                                      >> 0x0000001fU));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
             >> 0x0000001fU)) {
            vlSelfRef.__PVT__i_sat_sel = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[3U] 
                                          >> 0x0000001fU);
        }
    } else {
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_127__2(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_127__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_sum_pd 
                                                       >> 0x00000022U)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4735 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[3U] 
         >> 0x0000001fU)) {
        vlSelfRef.__PVT__i_sum_pd = (0x00000007ffffffffULL 
                                     & (VL_EXTENDS_QI(35,22, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_127_d1) 
                                        + VL_EXTENDS_QQ(35,34, 
                                                        ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[3U] 
                                                          >> 0x0000001fU)
                                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_127_d1
                                                          : 0ULL))));
    }
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
}

void Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_127__0(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int8___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_127__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
