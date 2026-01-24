// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_CACC_CALC_int16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_0__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.nvdla_core_clk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_slcg_cell_0__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_0__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_0__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4608 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
               & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_0_d1 
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
    } else if ((1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                      & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_0__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_0__1\n"); );
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
                                  && (1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U]));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_0_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U]);
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_0__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_0__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_0__3(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_0_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_1__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_1__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4609 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 1U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_1_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 1U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_1__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_1__1\n"); );
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
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 1U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_1_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 1U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_1__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_1__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_1_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_2__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_2__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4610 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 2U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_2_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 2U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_2__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_2__1\n"); );
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
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 2U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_2_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 2U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_2__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_2__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_2__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_2_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_3__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_3__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4611 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 3U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_3_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 3U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_3__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_3__1\n"); );
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
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 3U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_3_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 3U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_3__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_3__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_3__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_3_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_4__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_4__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4612 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 4U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_4_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 4U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_4__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_4__1\n"); );
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
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 4U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_4_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 4U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_4__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_4__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_4__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_4__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_4_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_5__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_5__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4613 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 5U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_5_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 5U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_5__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_5__1\n"); );
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
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 5U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_5_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 5U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_5__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_5__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_5__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_5__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_5_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_6__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_6__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4614 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 6U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_6_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 6U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_6__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_6__1\n"); );
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
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 6U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_6_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 6U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_6__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_6__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_6__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_6__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_6_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_7__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_7__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4615 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 7U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_7_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 7U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_7__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_7__1\n"); );
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
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 7U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_7_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 7U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_7__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_7__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_7__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_7_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_8__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_8__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4616 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 8U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_8_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 8U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_8__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_8__1\n"); );
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
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 8U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_8_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 8U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_8__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_8__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_8__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_8__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_8_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_9__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_9__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4617 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 9U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_9_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 9U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_9__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_9__1\n"); );
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
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 9U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_9_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 9U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_9__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_9__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_9__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_9__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_9_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_10__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_10__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4618 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 0x0000000aU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_10_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 0x0000000aU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_10__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_10__1\n"); );
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
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 0x0000000aU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_10_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 0x0000000aU));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_10__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_10__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_10__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_10__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_10_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_11__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_11__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4619 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 0x0000000bU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_11_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 0x0000000bU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_11__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_11__1\n"); );
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
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 0x0000000bU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_11_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 0x0000000bU));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_11__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_11__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_11__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_11__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_11_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_12__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_12__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4620 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 0x0000000cU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_12_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 0x0000000cU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_12__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_12__1\n"); );
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
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 0x0000000cU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_12_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 0x0000000cU));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_12__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_12__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_12__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_12__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_12_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_13__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_13__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4621 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 0x0000000dU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_13_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 0x0000000dU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_13__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_13__1\n"); );
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
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 0x0000000dU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_13_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 0x0000000dU));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_13__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_13__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_13__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_13__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_13_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_14__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_14__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4622 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 0x0000000eU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_14_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 0x0000000eU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_14__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_14__1\n"); );
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
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 0x0000000eU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_14_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 0x0000000eU));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_14__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_14__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_14__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_14__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_14_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_15__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_15__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4623 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 0x0000000fU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_15_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 0x0000000fU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_15__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_15__1\n"); );
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
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 0x0000000fU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_15_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 0x0000000fU));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_15__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_15__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_15__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_15__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_15_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_16__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_16__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.nvdla_core_clk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_slcg_cell_1__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_16__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_16__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4624 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 0x00000010U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_16_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 0x00000010U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_16__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_16__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 0x00000010U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_16_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 0x00000010U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_16__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_16__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_16__3(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_16__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_16_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_17__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_17__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4625 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 0x00000011U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_17_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 0x00000011U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_17__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_17__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 0x00000011U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_17_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 0x00000011U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_17__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_17__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_17__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_17__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_17_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_18__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_18__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4626 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 0x00000012U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_18_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 0x00000012U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_18__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_18__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 0x00000012U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_18_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 0x00000012U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_18__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_18__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_18__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_18__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_18_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_19__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_19__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4627 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 0x00000013U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_19_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 0x00000013U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_19__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_19__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 0x00000013U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_19_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 0x00000013U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_19__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_19__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_19__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_19__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_19_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_20__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_20__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4628 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 0x00000014U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_20_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 0x00000014U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_20__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_20__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 0x00000014U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_20_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 0x00000014U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_20__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_20__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_20__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_20__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_20_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_21__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_21__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4629 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 0x00000015U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_21_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 0x00000015U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_21__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_21__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 0x00000015U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_21_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 0x00000015U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_21__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_21__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_21__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_21__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_21_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_22__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_22__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4630 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 0x00000016U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_22_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 0x00000016U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_22__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_22__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 0x00000016U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_22_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 0x00000016U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_22__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_22__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_22__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_22__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_22_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_23__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_23__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4631 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 0x00000017U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_23_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 0x00000017U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_23__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_23__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 0x00000017U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_23_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 0x00000017U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_23__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_23__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_23__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_23__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_23_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_24__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_24__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4632 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 0x00000018U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_24_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 0x00000018U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_24__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_24__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 0x00000018U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_24_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
                                                >> 0x00000018U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_24__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_24__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_24__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_24__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_24_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_25__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_25__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4633 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 0x00000019U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_25_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 0x00000019U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_25__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_25__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 0x00000019U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_25_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_25__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_25__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_25__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_25__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_25_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_26__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_26__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4634 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 0x0000001aU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_26_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 0x0000001aU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_26__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_26__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 0x0000001aU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_26_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_26__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_26__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_26__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_26__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_26_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_27__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_27__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4635 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 0x0000001bU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_27_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 0x0000001bU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_27__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_27__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 0x0000001bU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_27_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_27__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_27__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_27__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_27__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_27_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_28__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_28__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4636 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 0x0000001cU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_28_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 0x0000001cU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_28__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_28__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 0x0000001cU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_28_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_28__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_28__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_28__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_28__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_28_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_29__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_29__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4637 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 0x0000001dU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_29_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 0x0000001dU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_29__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_29__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 0x0000001dU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_29_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_29__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_29__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_29__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_29__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_29_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_30__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_30__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4638 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                >> 0x0000001eU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_30_d1 
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
    } else if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                       >> 0x0000001eU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_30__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_30__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                            >> 0x0000001eU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_30_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_30__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_30__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_30__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_30__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_30_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_31__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_31__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if (vlSelfRef.__PVT__i_final_vld) {
        vlSelfRef.out_final_data = ((IData)(vlSelfRef.__PVT__i_sft_need_sat)
                                     ? ((1U & (IData)(
                                                      (vlSelfRef.__PVT__i_partial_result 
                                                       >> 0x0000002fU)))
                                         ? 0x80000000U
                                         : 0x7fffffffU)
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4639 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
         >> 0x0000001fU)) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if (((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
          >> 0x0000001fU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same)))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_31_d1 
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
    } else if (((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                 >> 0x0000001fU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same)))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_31__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_31__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_final_sat = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                               && ((IData)(vlSelfRef.__PVT__i_final_vld) 
                                   & (IData)(vlSelfRef.__PVT__i_sft_need_sat)));
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__i_partial_vld));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__i_final_vld));
    vlSelfRef.__PVT__i_sat_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
                                      >> 0x0000001fU));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[0U] 
             >> 0x0000001fU)) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_31_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[0U] 
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_31__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_31__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_31__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_31__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[0U] 
                                    >> 0x0000001fU)
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_31_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_32__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_32__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4640 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
               & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_32_d1 
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
    } else if ((1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                      & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_32__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_32__1\n"); );
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
                                  && (1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U]));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_32_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U]);
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_32__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_32__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_32__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_32__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_32_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_33__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_33__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4641 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 1U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_33_d1 
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
                       >> 1U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_33__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_33__1\n"); );
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
                                            >> 1U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_33_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 1U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_33__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_33__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_33__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_33__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_33_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_34__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_34__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4642 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 2U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_34_d1 
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
                       >> 2U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_34__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_34__1\n"); );
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
                                            >> 2U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_34_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 2U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_34__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_34__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_34__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_34__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_34_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_35__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_35__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4643 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 3U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_35_d1 
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
                       >> 3U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_35__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_35__1\n"); );
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
                                            >> 3U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_35_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 3U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_35__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_35__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_35__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_35__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_35_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_36__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_36__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4644 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 4U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_36_d1 
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
                       >> 4U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_36__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_36__1\n"); );
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
                                            >> 4U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_36_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 4U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_36__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_36__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_36__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_36__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_36_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_37__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_37__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4645 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 5U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_37_d1 
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
                       >> 5U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_37__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_37__1\n"); );
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
                                            >> 5U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_37_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 5U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_37__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_37__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_37__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_37__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_37_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_38__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_38__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4646 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 6U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_38_d1 
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
                       >> 6U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_38__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_38__1\n"); );
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
                                            >> 6U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_38_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 6U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_38__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_38__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_38__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_38__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_38_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_39__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_39__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4647 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 7U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_39_d1 
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
                       >> 7U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_39__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_39__1\n"); );
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
                                            >> 7U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_39_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 7U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_39__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_39__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_39__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_39__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_39_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_40__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_40__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4648 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 8U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_40_d1 
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
                       >> 8U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_40__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_40__1\n"); );
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
                                            >> 8U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_40_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 8U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_40__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_40__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_40__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_40__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_40_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_41__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_41__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4649 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 9U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_41_d1 
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
                       >> 9U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_41__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_41__1\n"); );
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
                                            >> 9U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_41_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 9U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_41__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_41__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_41__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_41__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_41_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_42__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_42__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4650 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 0x0000000aU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_42_d1 
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
                       >> 0x0000000aU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_42__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_42__1\n"); );
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
                                            >> 0x0000000aU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_42_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 0x0000000aU));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_42__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_42__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_42__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_42__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_42_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_43__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_43__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4651 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 0x0000000bU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_43_d1 
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
                       >> 0x0000000bU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_43__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_43__1\n"); );
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
                                            >> 0x0000000bU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_43_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 0x0000000bU));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_43__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_43__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_43__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_43__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_43_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_44__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_44__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4652 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 0x0000000cU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_44_d1 
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
                       >> 0x0000000cU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_44__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_44__1\n"); );
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
                                            >> 0x0000000cU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_44_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 0x0000000cU));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_44__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_44__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_44__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_44__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_44_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_45__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_45__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4653 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 0x0000000dU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_45_d1 
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
                       >> 0x0000000dU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_45__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_45__1\n"); );
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
                                            >> 0x0000000dU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_45_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 0x0000000dU));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_45__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_45__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_45__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_45__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_45_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_46__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_46__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4654 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 0x0000000eU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_46_d1 
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
                       >> 0x0000000eU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_46__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_46__1\n"); );
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
                                            >> 0x0000000eU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_46_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 0x0000000eU));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_46__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_46__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_46__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_46__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_46_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_47__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_47__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4655 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 0x0000000fU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_47_d1 
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
                       >> 0x0000000fU) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_47__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_47__1\n"); );
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
                                            >> 0x0000000fU)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_47_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 0x0000000fU));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_47__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_47__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_47__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_47__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_47_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_48__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_48__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4656 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 0x00000010U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_48_d1 
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
                       >> 0x00000010U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_48__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_48__1\n"); );
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
                                            >> 0x00000010U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_48_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 0x00000010U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_48__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_48__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_48__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_48__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_48_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_49__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_49__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4657 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 0x00000011U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_49_d1 
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
                       >> 0x00000011U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_49__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_49__1\n"); );
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
                                            >> 0x00000011U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_49_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 0x00000011U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_49__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_49__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_49__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_49__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_49_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_50__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_50__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4658 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 0x00000012U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_50_d1 
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
                       >> 0x00000012U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_50__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_50__1\n"); );
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
                                            >> 0x00000012U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_50_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 0x00000012U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_50__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_50__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_50__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_50__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_50_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_51__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_51__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4659 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 0x00000013U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_51_d1 
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
                       >> 0x00000013U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_51__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_51__1\n"); );
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
                                            >> 0x00000013U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_51_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 0x00000013U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_51__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_51__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_51__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_51__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_51_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_52__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_52__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4660 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 0x00000014U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_52_d1 
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
                       >> 0x00000014U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_52__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_52__1\n"); );
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
                                            >> 0x00000014U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_52_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 0x00000014U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_52__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_52__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_52__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_52__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_52_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_53__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_53__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4661 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 0x00000015U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_53_d1 
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
                       >> 0x00000015U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_53__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_53__1\n"); );
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
                                            >> 0x00000015U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_53_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 0x00000015U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_53__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_53__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_53__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_53__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_53_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_54__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_54__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4662 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 0x00000016U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_54_d1 
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
                       >> 0x00000016U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_54__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_54__1\n"); );
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
                                            >> 0x00000016U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_54_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 0x00000016U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_54__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_54__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_54__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_54__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_54_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_55__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_55__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4663 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 0x00000017U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_55_d1 
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
                       >> 0x00000017U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_55__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_55__1\n"); );
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
                                            >> 0x00000017U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_55_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 0x00000017U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_55__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_55__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_55__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_55__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_55_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_56__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_56__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4664 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 0x00000018U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_56_d1 
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
                       >> 0x00000018U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_56__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_56__1\n"); );
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
                                            >> 0x00000018U)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
            vlSelfRef.__PVT__in_hsb_same_d = vlSelfRef.__PVT__in_hsb_same;
            vlSelfRef.__PVT__oi_sign_d = (1U & (IData)(
                                                       (vlSelfRef.__PVT__in_mask_op 
                                                        >> 0x0000002fU)));
            vlSelfRef.__PVT__di_sign_d = (1U & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_56_d1 
                                                        >> 0x00000025U)));
            vlSelfRef.__PVT__i_sat_sel = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_int_d1[1U] 
                                                >> 0x00000018U));
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_56__1(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_56__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_56__2(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_56__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_mask_op = ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_int_d1[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_int_56_d1
                                    : 0ULL);
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
}

void Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_57__0(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_int16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_57__0\n"); );
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
                                     : ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4665 
                                                 >> 0x00000010U)) 
                                        + (IData)((QData)((IData)(vlSelfRef.__PVT__i_point5)))));
    }
    if (vlSelfRef.__PVT__i_partial_vld) {
        vlSelfRef.out_partial_data = vlSelfRef.__PVT__i_partial_result;
    }
    if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U])) {
        vlSelfRef.__PVT__i_lsum_pd = vlSelfRef.__PVT__i_lsum_pd_nxt;
    }
    if ((1U & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_int_d1[1U] 
                >> 0x00000019U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = (0x0001ffffU & 
                                      (VL_EXTENDS_II(17,6, 
                                                     ((IData)(vlSelfRef.__PVT__in_hsb_same)
                                                       ? 0U
                                                       : 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_int_57_d1 
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
                       >> 0x00000019U) & (~ (IData)(vlSelfRef.__PVT__in_hsb_same))))) {
        vlSelfRef.__PVT__i_hsum_pd = 0U;
    }
}
