// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_57__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_57__1\n"); );
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
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                                            >> 0x00000019U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_57_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 0x00000019U));
        }
    } else {
        vlSelfRef.__PVT__in_hsb_same_d = 0U;
        vlSelfRef.__PVT__oi_sign_d = 0U;
        vlSelfRef.__PVT__di_sign_d = 0U;
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_57__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_57__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_57__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_57__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_57_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_58__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_58__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4666 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 0x0000001aU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_58_d1 
                                                                  >> 0x00000020U))))) 
                                       + (VL_EXTENDS_II(17,16, 
                                                        ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                          ? 0U
                                                          : 
                                                         (0x0000ffffU 
                                                          & (IData)(
                                                                    (vlSelfRef.__PVT__in_mask_op 
                                                                     >> 0x00000020U))))) 
                                          + VL_EXTENDS_II(17,2, 
                                                          ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                            ? 0U
                                                            : 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__i_lsum_pd_nxt 
                                                                       >> 0x00000020U))))))));
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                       >> 0x0000001aU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_58__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_58__1\n"); );
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
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                                            >> 0x0000001aU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_58_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 0x0000001aU));
        }
    } else {
        vlSelfRef.__PVT__in_hsb_same_d = 0U;
        vlSelfRef.__PVT__oi_sign_d = 0U;
        vlSelfRef.__PVT__di_sign_d = 0U;
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_58__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_58__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_58__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_58__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_58_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_59__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_59__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4667 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 0x0000001bU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_59_d1 
                                                                  >> 0x00000020U))))) 
                                       + (VL_EXTENDS_II(17,16, 
                                                        ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                          ? 0U
                                                          : 
                                                         (0x0000ffffU 
                                                          & (IData)(
                                                                    (vlSelfRef.__PVT__in_mask_op 
                                                                     >> 0x00000020U))))) 
                                          + VL_EXTENDS_II(17,2, 
                                                          ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                            ? 0U
                                                            : 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__i_lsum_pd_nxt 
                                                                       >> 0x00000020U))))))));
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                       >> 0x0000001bU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_59__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_59__1\n"); );
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
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                                            >> 0x0000001bU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_59_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 0x0000001bU));
        }
    } else {
        vlSelfRef.__PVT__in_hsb_same_d = 0U;
        vlSelfRef.__PVT__oi_sign_d = 0U;
        vlSelfRef.__PVT__di_sign_d = 0U;
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_59__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_59__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_59__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_59__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_59_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_60__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_60__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4668 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 0x0000001cU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_60_d1 
                                                                  >> 0x00000020U))))) 
                                       + (VL_EXTENDS_II(17,16, 
                                                        ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                          ? 0U
                                                          : 
                                                         (0x0000ffffU 
                                                          & (IData)(
                                                                    (vlSelfRef.__PVT__in_mask_op 
                                                                     >> 0x00000020U))))) 
                                          + VL_EXTENDS_II(17,2, 
                                                          ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                            ? 0U
                                                            : 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__i_lsum_pd_nxt 
                                                                       >> 0x00000020U))))))));
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                       >> 0x0000001cU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_60__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_60__1\n"); );
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
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                                            >> 0x0000001cU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_60_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 0x0000001cU));
        }
    } else {
        vlSelfRef.__PVT__in_hsb_same_d = 0U;
        vlSelfRef.__PVT__oi_sign_d = 0U;
        vlSelfRef.__PVT__di_sign_d = 0U;
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_60__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_60__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_60__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_60__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_60_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_61__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_61__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4669 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 0x0000001dU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_61_d1 
                                                                  >> 0x00000020U))))) 
                                       + (VL_EXTENDS_II(17,16, 
                                                        ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                          ? 0U
                                                          : 
                                                         (0x0000ffffU 
                                                          & (IData)(
                                                                    (vlSelfRef.__PVT__in_mask_op 
                                                                     >> 0x00000020U))))) 
                                          + VL_EXTENDS_II(17,2, 
                                                          ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                            ? 0U
                                                            : 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__i_lsum_pd_nxt 
                                                                       >> 0x00000020U))))))));
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                       >> 0x0000001dU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_61__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_61__1\n"); );
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
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                                            >> 0x0000001dU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_61_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 0x0000001dU));
        }
    } else {
        vlSelfRef.__PVT__in_hsb_same_d = 0U;
        vlSelfRef.__PVT__oi_sign_d = 0U;
        vlSelfRef.__PVT__di_sign_d = 0U;
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_61__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_61__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_61__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_61__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_61_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_62__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_62__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4670 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 0x0000001eU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_62_d1 
                                                                  >> 0x00000020U))))) 
                                       + (VL_EXTENDS_II(17,16, 
                                                        ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                          ? 0U
                                                          : 
                                                         (0x0000ffffU 
                                                          & (IData)(
                                                                    (vlSelfRef.__PVT__in_mask_op 
                                                                     >> 0x00000020U))))) 
                                          + VL_EXTENDS_II(17,2, 
                                                          ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                            ? 0U
                                                            : 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__i_lsum_pd_nxt 
                                                                       >> 0x00000020U))))))));
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                       >> 0x0000001eU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_62__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_62__1\n"); );
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
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                                            >> 0x0000001eU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_62_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 0x0000001eU));
        }
    } else {
        vlSelfRef.__PVT__in_hsb_same_d = 0U;
        vlSelfRef.__PVT__oi_sign_d = 0U;
        vlSelfRef.__PVT__di_sign_d = 0U;
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_62__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_62__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_62__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_62__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_62_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_63__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_63__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4671 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
         >> 0x0000001fU)) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if (((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
          >> 0x0000001fU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same)))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_63_d1 
                                                                  >> 0x00000020U))))) 
                                       + (VL_EXTENDS_II(17,16, 
                                                        ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                          ? 0U
                                                          : 
                                                         (0x0000ffffU 
                                                          & (IData)(
                                                                    (vlSelfRef.__PVT__in_mask_op 
                                                                     >> 0x00000020U))))) 
                                          + VL_EXTENDS_II(17,2, 
                                                          ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                            ? 0U
                                                            : 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__i_lsum_pd_nxt 
                                                                       >> 0x00000020U))))))));
    } else if (((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                 >> 0x0000001fU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same)))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_63__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_63__1\n"); );
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
                                  && (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                                      >> 0x0000001fU));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
             >> 0x0000001fU)) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_63_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                          >> 0x0000001fU);
        }
    } else {
        vlSelfRef.__PVT__in_hsb_same_d = 0U;
        vlSelfRef.__PVT__oi_sign_d = 0U;
        vlSelfRef.__PVT__di_sign_d = 0U;
        vlSelfRef.__PVT__i_sat_sel = 0U;
    }
    vlSelfRef.__PVT__i_partial_vld = ((~ (IData)(vlSelfRef.__PVT__i_sat_sel)) 
                                      & (IData)(vlSelfRef.__PVT__i_sat_vld));
    vlSelfRef.__PVT__i_final_vld = ((IData)(vlSelfRef.__PVT__i_sat_sel) 
                                    & (IData)(vlSelfRef.__PVT__i_sat_vld));
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_63__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_63__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_63__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_63__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U] 
                                    >> 0x0000001fU)
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_63_d1
                                    : 0ULL);
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
}
